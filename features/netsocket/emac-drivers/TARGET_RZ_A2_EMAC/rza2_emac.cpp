#include "cmsis_os.h"
#include "netsocket/nsapi_types.h"
#include "mbed_shared_queues.h"
#include "r_ether_rza2_if.h"
#include "rza2_emac.h"

#define RZ_A2_ETH_IF_NAME    "en"

// Weak so a module can override
MBED_WEAK EMAC &EMAC::get_default_instance()
{
    return RZ_A2_EMAC::get_instance();
}

RZ_A2_EMAC &RZ_A2_EMAC::get_instance()
{
    static RZ_A2_EMAC emac;
    return emac;
}

RZ_A2_EMAC::RZ_A2_EMAC() : hwaddr(), hwaddr_set(false), power_on(false),
    channel(ETHER_CHANNEL_0), recvThread(osPriorityNormal, 896)
{
}

uint32_t RZ_A2_EMAC::get_mtu_size() const
{
    return 1500;
}

uint32_t RZ_A2_EMAC::get_align_preference() const
{
    return 0;
}

void RZ_A2_EMAC::get_ifname(char *name, uint8_t size) const
{
    memcpy(name, RZ_A2_ETH_IF_NAME, (size < sizeof(RZ_A2_ETH_IF_NAME)) ? size : sizeof(RZ_A2_ETH_IF_NAME));
}

uint8_t RZ_A2_EMAC::get_hwaddr_size() const
{
    return 6;
}

bool RZ_A2_EMAC::get_hwaddr(uint8_t *addr) const
{
    return false;
}

void RZ_A2_EMAC::set_hwaddr(const uint8_t *addr)
{
    memcpy(hwaddr, addr, sizeof(hwaddr));
    hwaddr_set = true;

    /* Reconnect */
    if (power_on != false) {
        R_ETHER_Open_ZC2(channel, hwaddr, ETHER_FLAG_OFF);
    }
}

bool RZ_A2_EMAC::link_out(emac_mem_buf_t *buf)
{
    emac_mem_buf_t *copy_buf = buf;
    uint32_t       retry_cnt = 0;
    uint16_t       write_buf_size;
    int            total_write_size = 0;
    uint8_t *      pwrite_buffer_address;

    while (1) {
        if (R_ETHER_Write_ZC2_GetBuf(channel, (void **) &pwrite_buffer_address, &write_buf_size) == ETHER_SUCCESS) {
            break;
        }
        retry_cnt++;
        if (retry_cnt > 200) {
            memory_manager->free(buf);
            return false;
        }
        osDelay(1);
    }

    while ((copy_buf != NULL) && (memory_manager->get_ptr(copy_buf) != NULL) && (memory_manager->get_len(copy_buf) != 0)) {
        memcpy(&pwrite_buffer_address[total_write_size], memory_manager->get_ptr(copy_buf), memory_manager->get_len(copy_buf));
        total_write_size +=  memory_manager->get_len(copy_buf);
        copy_buf = memory_manager->get_next(copy_buf);
    }
    memory_manager->free(buf);

    if (total_write_size > 0) {
        if (total_write_size < 60) {
            memset(&pwrite_buffer_address[total_write_size], 0, 60 - total_write_size);
            total_write_size = 60;
        }
        if (R_ETHER_Write_ZC2_SetBuf(channel, total_write_size) == ETHER_SUCCESS) {
            return true;
        }
    }

    return false;
}

bool RZ_A2_EMAC::power_up()
{
    ether_param_t param;

    if (power_on != false) {
        return true;
    }

    /* Initialize memory which ETHERC/EDMAC is used */
    R_ETHER_Initial();

    /* Set the callback function */
    param.ether_callback.pcb_func    = &_callback;
    R_ETHER_Control(CONTROL_SET_CALLBACK, param);

    param.channel = channel;
    R_ETHER_Control(CONTROL_POWER_ON, param);

    if (hwaddr_set != false) {
        R_ETHER_Open_ZC2(channel, hwaddr, ETHER_FLAG_OFF);
    }

    /* task */
    recvThread.start(mbed::callback(this, &RZ_A2_EMAC::recv_task));
    phy_task_handle = mbed::mbed_event_queue()->call_every(200, mbed::callback(this, &RZ_A2_EMAC::phy_task));

    power_on = true;
    return true;
}

void RZ_A2_EMAC::power_down()
{
    power_on = false;
}

void RZ_A2_EMAC::set_link_input_cb(emac_link_input_cb_t input_cb)
{
    emac_link_input_cb = input_cb;
}

void RZ_A2_EMAC::set_link_state_cb(emac_link_state_change_cb_t state_cb)
{
    emac_link_state_cb = state_cb;
}

void RZ_A2_EMAC::add_multicast_group(const uint8_t *addr)
{
    // Not supported
}

void RZ_A2_EMAC::remove_multicast_group(const uint8_t *addr)
{
    // Not supported
}

void RZ_A2_EMAC::set_all_multicast(bool all)
{
    // Not supported
}

void RZ_A2_EMAC::set_memory_manager(EMACMemoryManager &mem_mngr)
{
    memory_manager = &mem_mngr;
}

void RZ_A2_EMAC::_callback(void* arg)
{
    get_instance().callback(arg);
}

void RZ_A2_EMAC::callback(void* arg)
{
    ether_cb_arg_t * p_cb_arg = (ether_cb_arg_t *)arg;

    if (p_cb_arg->event_id == ETHER_CB_EVENT_ID_LINK_ON) {
        emac_link_state_cb(true);
    } else if (p_cb_arg->event_id == ETHER_CB_EVENT_ID_LINK_OFF) {
        emac_link_state_cb(false);
    } else {
        // do nothing
    }

}

void RZ_A2_EMAC::recv_task(void)
{
    int32_t ret;
    emac_mem_buf_t *buf;
    uint8_t * pread_buffer_address;

    while (1) {
        /* (1) Retrieve the receive buffer location controlled by the  descriptor. */
        ret = R_ETHER_Read_ZC2(channel, (void **)&pread_buffer_address);

        /* When there is data to receive */
        if (ret > ETHER_NO_DATA) {
            while (1) {
                buf = memory_manager->alloc_heap(ret, 0);
                if (buf != NULL) {

                    /* (2) Copy the data read from the receive buffer which is controlled by the descriptor to
                     the buffer which is specified by the user (up to 1024 bytes). */
                    memcpy(memory_manager->get_ptr(buf), pread_buffer_address, (uint32_t)memory_manager->get_len(buf));

                    /* (3) Read the receive data from the receive buffer controlled by the descriptor,
                     and then release the receive buffer. */
                    R_ETHER_Read_ZC2_BufRelease(channel);

                    emac_link_input_cb(buf);
                    break;
                }
                osDelay(5);
            }
        } else {
            osDelay(1);
        }
    }
}

void RZ_A2_EMAC::phy_task(void)
{
    R_ETHER_LinkProcess(channel);
}

