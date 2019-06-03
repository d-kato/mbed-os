/* mbed Microcontroller Library
 * Copyright (c) 2006-2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "mbed_assert.h"
#include "device.h"

#if DEVICE_RTC

#include "rtc_api.h"
#include "iodefine.h"
#include "mbed_drv_cfg.h"
#include "mbed_mktime.h"

#define RCR1_VAL_ON      (0x08u) // AIE = 1
#define RCR1_VAL_OFF     (0x00u)
#define RCR3_VAL         (0x00u)
#define RCR5_VAL		 (0x00u)

#ifdef USE_RTCX1_CLK
#define RCR2_VAL_ALLSTOP (0x08u)
#define RCR2_VAL_START   (0x09u) // START = 1
#define RCR2_VAL_RESET   (0x0Au) // RESET = 1
#define RCR5_VAL_RTCX1   (0x00u) // RCKSEL = clock rtc from RTCX1(32.768 kHz)
#elif defined(USE_EXTAL_CLK)
#define RCR2_VAL_ALLSTOP (0x00u)
#define RCR2_VAL_START   (0x01u) // START = 1
#define RCR2_VAL_RESET   (0x02u) // RESET = 1
#define RCR5_VAL_EXTAL   (0x01u) // RCKSEL = clock rtc from EXTAL
#define RFRH_VAL_13333   (0x8003u) // 13.3333MHz (= 64Hz * 0x32DCD) 
#define RFRL_VAL_13333   (0x2DCDu) //
#else
#error Select RTC clock input !
#endif

#define RFRH_VAL_MAX     (0x0007u) // MAX value (= 128Hz * 0x7FFFF)
#define RFRL_VAL_MAX     (0xFFFFu) //

#define MASK_00_03_POS   (0x000Fu)
#define MASK_04_07_POS   (0x00F0u)
#define MASK_08_11_POS   (0x0F00u)
#define MASK_12_15_POS   (0xF000u)
#define MASK_16_20_POS   (0x000F0000u)
#define SHIFT_1_HBYTE    (4u)
#define SHIFT_2_HBYTE    (8u)
#define SHIFT_3_HBYTE    (12u)
#define SHIFT_1BYTE      (8u)
#define SHIFT_2BYTE      (16u)

#define TIME_ERROR_VAL   (0u)

static int rtc_dec8_to_hex(uint8_t dec_val, uint8_t offset, int *hex_val);
static uint8_t rtc_hex8_to_dec(uint8_t hex_val);

/*
 * Setup the RTC based on a time structure.
 * The rtc_init function should be executed first.
 * [in]
 * None.
 * [out]
 * None.
 */
void rtc_init(void)
{
    volatile int dummy_cnt;

    CPG.STBCR5.BIT.MSTP52 = 0;

    // Set control register
#if defined(USE_RTCX1_CLK)
    RTC1.RCR4.BIT.RCKSEL = 0;
    RTC1.RCR3.BIT.RTCEN  = 1;
#elif defined(USE_EXTAL_CLK)
    RTC1.RCR4.BIT.RCKSEL = 1;
    RTC1.RCR3.BIT.RTCEN  = 0;
#endif

    dummy_cnt = 0;
    while (dummy_cnt < 1000) {
        dummy_cnt++;
    }

    RTC1.RCR2.BIT.START = 0;
    while (RTC1.RCR2.BIT.START != 0) {
        ;
    }

#if defined(USE_EXTAL_CLK)
    // Clockin  = 24MHz
    RTC1.RFRH.WORD = 0x0001;
    RTC1.RFRL.WORD = 0x6E35;
#endif

    RTC1.RCR2.BIT.CNTMD = 0;

    RTC1.RCR2.BIT.RESET = 1;
    while (RTC1.RCR2.BIT.RESET != 0) {
        ;
    }

    RTC1.RCR1.BIT.AIE = 1;
    RTC1.RCR1.BIT.PIE = 0;

    RTC1.RCR2.BIT.START = 1;
    while (RTC1.RCR2.BIT.START != 1) {
        ;
    }
}


/*
 * Release the RTC based on a time structure.
 * @note This function does not stop the RTC from counting 
 * [in]
 * None.
 * [out]
 * None.
 */
void rtc_free(void)
{
}


/*
 * Check the RTC has been enabled.
 * Clock Control Register RTC1.RCR1.BYTE(bit3): 0 = Disabled, 1 = Enabled.
 * [in]
 * None.
 * [out]
 * 0:Disabled, 1:Enabled.
 */
int rtc_isenabled(void)
{
    int ret_val = 0;

    if (RTC1.RCR2.BIT.START == 1) { // RTC ON ?
        ret_val = 1;
    }

    return ret_val;
}


/*
 * RTC read function.
 * [in]
 * None.
 * [out]
 * UNIX timestamp value.
 */
time_t rtc_read(void)
{
    struct tm timeinfo;
    int    err = 0;
    uint8_t tmp_regdata;
    time_t t;

    if (rtc_isenabled() != 0) {
        RTC1.RCR1.BIT.CIE = 0; // CIE = 0
        do {
            RTC1.RSR.BIT.CF = 0;

            // Read RTC register
            err  = rtc_dec8_to_hex(RTC1.RSECCNT.BYTE , 0    , &timeinfo.tm_sec);
            err += rtc_dec8_to_hex(RTC1.RMINCNT.BYTE , 0    , &timeinfo.tm_min);
            err += rtc_dec8_to_hex(RTC1.RHRCNT.BYTE  , 0    , &timeinfo.tm_hour);
            err += rtc_dec8_to_hex(RTC1.RDAYCNT.BYTE , 0    , &timeinfo.tm_mday);
            err += rtc_dec8_to_hex(RTC1.RMONCNT.BYTE , 1    , &timeinfo.tm_mon);
            err += rtc_dec8_to_hex(RTC1.RYRCNT.WORD  , 0    , &timeinfo.tm_year);
        } while (RTC1.RSR.BIT.CF != 0);
    } else {
        err = 1;
    }

    if (err == 0) {
        // Convert to timestamp
        if (_rtc_maketime(&timeinfo, &t, RTC_FULL_LEAP_YEAR_SUPPORT) == false) {
            return TIME_ERROR_VAL;
        }
    } else {
        // Error
        t = TIME_ERROR_VAL;
    }

    return t;
}

/*
 * Dec(8bit) to Hex function for RTC.
 * [in]
 * dec_val:Decimal value (from 0x00 to 0x99).
 * offset:Subtract offset from dec_val.
 * hex_val:Pointer of output hexadecimal value.
 * [out]
 * 0:Success
 * 1:Error
 */
static int rtc_dec8_to_hex(uint8_t dec_val, uint8_t offset, int *hex_val)
{
    int err = 0;
    uint8_t ret_val;

    if (hex_val != NULL) {
        if (((dec_val & MASK_04_07_POS) >= (0x0A << SHIFT_1_HBYTE)) ||
            ((dec_val & MASK_00_03_POS) >=  0x0A)) {
            err = 1;
        } else {
            ret_val = ((dec_val & MASK_04_07_POS) >> SHIFT_1_HBYTE) * 10 +
                       (dec_val & MASK_00_03_POS);
            if (ret_val < offset) {
                err = 1;
            } else {
                *hex_val = ret_val - offset;
            }
        }
    } else {
        err = 1;
    }

    return err;
}

/*
 * RTC write function
 * [in]
 * t:UNIX timestamp value
 * [out]
 * None.
 */
void rtc_write(time_t t)
{
    struct tm timeinfo;
    if (_rtc_localtime(t, &timeinfo, RTC_FULL_LEAP_YEAR_SUPPORT) == false) {
        return;
    }

    volatile uint16_t dummy_read;

    if (rtc_isenabled() != 0) {
        RTC1.RCR2.BIT.START = 0;
        while (RTC1.RCR2.BIT.START != 0) {
            ;
        }

        RTC1.RCR2.BIT.RESET = 1;
        while (RTC1.RCR2.BIT.RESET != 0) {
            ;
        }

        RTC1.RSECCNT.BYTE = rtc_hex8_to_dec(timeinfo.tm_sec);
        RTC1.RMINCNT.BYTE = rtc_hex8_to_dec(timeinfo.tm_min);
        RTC1.RHRCNT.BYTE  = rtc_hex8_to_dec(timeinfo.tm_hour);
        RTC1.RDAYCNT.BYTE = rtc_hex8_to_dec(timeinfo.tm_mday);
        RTC1.RMONCNT.BYTE = rtc_hex8_to_dec(timeinfo.tm_mon + 1);
        RTC1.RYRCNT.WORD  = rtc_hex8_to_dec(timeinfo.tm_year);

        RTC1.RCR2.BIT.START = 1;
        while (RTC1.RCR2.BIT.START != 1) {
            ;
        }
    }
}

/*
 * HEX to Dec(8bit) function for RTC.
 * [in]
 * hex_val:Hexadecimal value.
 * [out]
 * decimal value:From 0x00 to 0x99.
 */
static uint8_t rtc_hex8_to_dec(uint8_t hex_val)
{
    uint32_t calc_data;

    calc_data  = hex_val / 10 * 0x10;
    calc_data += hex_val % 10;

    if (calc_data > 0x99) {
        calc_data = 0;
    }

    return (uint8_t)calc_data;
}

#endif /* DEVICE_RTC */
