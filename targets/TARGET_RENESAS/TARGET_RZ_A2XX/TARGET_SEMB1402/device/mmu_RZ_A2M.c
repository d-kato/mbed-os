/**************************************************************************//**
 * @file     mmu_RZ_A2M.c
 * @brief    MMU Configuration for RZ_A2M Device Series
 * @version  V1.00
 * @date     10 Mar 2017
 *
 * @note
 *
 ******************************************************************************/
/*
 * Copyright (c) 2009-2017 ARM Limited. All rights reserved.
 * Copyright (c) 2018 Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Memory map description

== User's Manual:Hardware ==
                                                     Memory Type
0xffffffff |--------------------------|             ------------
           |       Peripherals        |                Device
0xffff0000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0xfd000000 |--------------------------|             ------------
           |       Peripherals        |                Device
0xfcfe0000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0xfc040000 |--------------------------|             ------------
           |       Peripherals        |                Device
0xfc000000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0xf0002000 |--------------------------|             ------------
           |  Cortex-A9 private area  |                Device
0xf0000000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0xeb000000 |--------------------------|             ------------
           |       Peripherals        |                Device
0xea000000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0xe8240000 |--------------------------|             ------------
           |       Peripherals        |                Device
0xe8200000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0xe8050000 |--------------------------|             ------------
           |       Peripherals        |                Device
0xe8000000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0x80400000 |--------------------------|             ------------
           |     On Chip RAM 4MB      |                  RW
0x80000000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0x70000000 |--------------------------|             ------------
           |      OctaRAM 256MB       |                  RW
0x60000000 |--------------------------|             ------------
           |     OctaFlash 256MB      |                  RO
0x50000000 |--------------------------|             ------------
           |      HyperRAM 256MB      |                  RW
0x40000000 |--------------------------|             ------------
           |     HyperFlash 256MB     |                  RO
0x30000000 |--------------------------|             ------------
           |   SPI multi I/O 256MB    |                  RO
0x20000000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0x1f809000 |--------------------------|             ------------
           |       Peripherals        |                Device
0x1f808000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0x1f801000 |--------------------------|             ------------
           |       Peripherals        |                Device
0x1f800000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0x1f402000 |--------------------------|             ------------
           |       Peripherals        |                Device
0x1f400000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0x1f004000 |--------------------------|             ------------
           |       Peripherals        |                Device
0x1f000000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0x1c000000 |--------------------------|             ------------
           |        Page Fault        |                Fault
0x18000000 |--------------------------|             ------------
           |         CS5 64MB         |                  RW
0x14000000 |--------------------------|             ------------
           |         CS4 64MB         |                  RW
0x10000000 |--------------------------|             ------------
           |         CS3 64MB         |                  RW
0x0c000000 |--------------------------|             ------------
           |         CS2 64MB         |                  RW
0x08000000 |--------------------------|             ------------
           |         CS1 64MB         |                  RW
0x04000000 |--------------------------|             ------------
           |         CS0 64MB         |                  RW
0x00000000 |--------------------------|             ------------


== Actual setting of MMU ==
                                                     Memory Type
0xffffffff |--------------------------|             ------------
           |       Peripherals        |                Device
0xe8000000 |--------------------------|             ------------
           |            -             |                   -
0x80400000 |--------------------------|             ------------
           |     On Chip RAM 4MB      |                  RW
0x80000000 |--------------------------|             ------------
           |            -             |                   -
0x70000000 |--------------------------|             ------------
           |      OctaRAM 256MB       |                  RW
0x60000000 |--------------------------|             ------------
           |     OctaFlash 256MB      |                  RO
0x50000000 |--------------------------|             ------------
           |      HyperRAM 256MB      |                  RW
0x40000000 |--------------------------|             ------------
           |     HyperFlash 256MB     |                  RO
0x30000000 |--------------------------|             ------------
           |   SPI multi I/O 256MB    |                  RO
0x20000000 |--------------------------|             ------------
           |       Peripherals        |                Device
0x18000000 |--------------------------|             ------------
           |            -             |                   -
0x10000000 |--------------------------|             ------------
           |      CS3 SDRAM 64MB      |                  RW
0x0c000000 |--------------------------|             ------------
           |            -             |                   -
0x00000000 |--------------------------|             ------------
*/

// L1 Cache info and restrictions about architecture of the caches (CCSIR register):
// Write-Through support *not* available
// Write-Back support available.
// Read allocation support available.
// Write allocation support available.

//Note: You should use the Shareable attribute carefully.
//For cores without coherency logic (such as SCU) marking a region as shareable forces the processor to not cache that region regardless of the inner cache settings.
//Cortex-A versions of RTX use LDREX/STREX instructions relying on Local monitors. Local monitors will be used only when the region gets cached, regions that are not cached will use the Global Monitor.
//Some Cortex-A implementations do not include Global Monitors, so wrongly setting the attribute Shareable may cause STREX to fail.

//Recall: When the Shareable attribute is applied to a memory region that is not Write-Back, Normal memory, data held in this region is treated as Non-cacheable.
//When SMP bit = 0, Inner WB/WA Cacheable Shareable attributes are treated as Non-cacheable.
//When SMP bit = 1, Inner WB/WA Cacheable Shareable attributes are treated as Cacheable.


//Following MMU configuration is expected
//SCTLR.AFE == 1 (Simplified access permissions model - AP[2:1] define access permissions, AP[0] is an access flag)
//SCTLR.TRE == 0 (TEX remap disabled, so memory type and attributes are described directly by bits in the descriptor)
//Domain 0 is always the Client domain
//Descriptors should place all memory in domain 0
//There are no restrictions by privilege level (PL0 can access all memory)


#include "RZ_A2M.h"

//Import symbols from linker
#if !defined ( __ICCARM__ )
extern uint32_t Image$$TTB$$ZI$$Base;
#endif 
extern uint32_t Image$$VECTORS$$Base;
extern uint32_t Image$$RO_DATA$$Base;
extern uint32_t Image$$RW_DATA$$Base;
extern uint32_t Image$$RW_IRAM1$$Base;
extern uint32_t Image$$RW_DATA_NC$$Base;
extern uint32_t Image$$ZI_DATA_NC$$Base;

extern uint32_t Image$$VECTORS$$Limit;
extern uint32_t Image$$RO_DATA$$Limit;
extern uint32_t Image$$RW_DATA$$Limit;
extern uint32_t Image$$RW_IRAM1$$Limit;
extern uint32_t Image$$RW_DATA_NC$$Limit;
extern uint32_t Image$$ZI_DATA_NC$$Limit;

#if defined( __ICCARM__ )
#define VECTORS_SIZE    (((uint32_t)Image$$VECTORS$$Limit >> 20) - ((uint32_t)Image$$VECTORS$$Base >> 20) + 1)
#define RO_DATA_SIZE    (((uint32_t)Image$$RO_DATA$$Limit >> 20) - ((uint32_t)Image$$RO_DATA$$Base >> 20) + 1)
#define RW_DATA_SIZE    (((uint32_t)Image$$RW_DATA$$Limit >> 20) - ((uint32_t)Image$$RW_DATA$$Base >> 20) + 1)
#define RW_IRAM1_SIZE   (((uint32_t)Image$$RW_IRAM1$$Limit >> 20) - ((uint32_t)Image$$RW_IRAM1$$Base >> 20) + 1)
#define RW_DATA_NC_SIZE (((uint32_t)Image$$RW_DATA_NC$$Limit >> 20) - ((uint32_t)Image$$RW_DATA_NC$$Base >> 20) + 1)
#define ZI_DATA_NC_SIZE (((uint32_t)Image$$ZI_DATA_NC$$Limit >> 20) - ((uint32_t)Image$$ZI_DATA_NC$$Base >> 20) + 1)
#else
#define VECTORS_SIZE    (((uint32_t)&Image$$VECTORS$$Limit >> 20) - ((uint32_t)&Image$$VECTORS$$Base >> 20) + 1)
#define RO_DATA_SIZE    (((uint32_t)&Image$$RO_DATA$$Limit >> 20) - ((uint32_t)&Image$$RO_DATA$$Base >> 20) + 1)
#define RW_DATA_SIZE    (((uint32_t)&Image$$RW_DATA$$Limit >> 20) - ((uint32_t)&Image$$RW_DATA$$Base >> 20) + 1)
#define RW_IRAM1_SIZE   (((uint32_t)&Image$$RW_IRAM1$$Limit >> 20) - ((uint32_t)&Image$$RW_IRAM1$$Base >> 20) + 1)
#define RW_DATA_NC_SIZE (((uint32_t)&Image$$RW_DATA_NC$$Limit >> 20) - ((uint32_t)&Image$$RW_DATA_NC$$Base >> 20) + 1)
#define ZI_DATA_NC_SIZE (((uint32_t)&Image$$ZI_DATA_NC$$Limit >> 20) - ((uint32_t)&Image$$ZI_DATA_NC$$Base >> 20) + 1)
#endif

static uint32_t Sect_Normal;     //outer & inner wb/wa, non-shareable, executable, rw, domain 0, base addr 0
static uint32_t Sect_Normal_NC;  //non-shareable, non-executable, rw, domain 0, base addr 0
static uint32_t Sect_Normal_Cod; //outer & inner wb/wa, non-shareable, executable, ro, domain 0, base addr 0
static uint32_t Sect_Normal_RO;  //as Sect_Normal_Cod, but not executable
static uint32_t Sect_Normal_RW;  //as Sect_Normal_Cod, but writeable and not executable
static uint32_t Sect_Device_RO;  //device, non-shareable, non-executable, ro, domain 0, base addr 0
static uint32_t Sect_Device_RW;  //as Sect_Device_RO, but writeable

/* Define global descriptors */
static uint32_t Page_L1_4k  = 0x0;  //generic
static uint32_t Page_L1_64k = 0x0;  //generic
static uint32_t Page_4k_Device_RW;  //Shared device, not executable, rw, domain 0
static uint32_t Page_64k_Device_RW; //Shared device, not executable, rw, domain 0

#if defined ( __ICCARM__ )
__no_init uint32_t Image$$TTB$$ZI$$Base @ ".retram";
uint32_t Image$$VECTORS$$Base;
uint32_t Image$$RO_DATA$$Base;
uint32_t Image$$RW_DATA$$Base;
uint32_t Image$$RW_IRAM1$$Base;
uint32_t Image$$RW_DATA_NC$$Base;
uint32_t Image$$ZI_DATA_NC$$Base;

uint32_t Image$$VECTORS$$Limit;
uint32_t Image$$RO_DATA$$Limit;
uint32_t Image$$RW_DATA$$Limit;
uint32_t Image$$RW_IRAM1$$Limit;
uint32_t Image$$RW_DATA_NC$$Limit;
uint32_t Image$$ZI_DATA_NC$$Limit;
#endif

void MMU_CreateTranslationTable(void)
{
    mmu_region_attributes_Type region;
#if defined ( __ICCARM__ )
#pragma section=".intvec"
#pragma section=".rodata"
#pragma section=".rwdata"
#pragma section=".bss"
#pragma section="NC_DATA"
#pragma section=".mirrorram"
#pragma section="NC_BSS"

    Image$$VECTORS$$Base = (uint32_t) __section_begin(".intvec");
    Image$$VECTORS$$Limit= ((uint32_t)__section_begin(".intvec")+(uint32_t)__section_size(".intvec"));
    Image$$RO_DATA$$Base = (uint32_t) __section_begin(".rodata");
    Image$$RO_DATA$$Limit= ((uint32_t)__section_begin(".rodata")+(uint32_t)__section_size(".rodata"));
    Image$$RW_DATA$$Base = (uint32_t) __section_begin(".rwdata");
    Image$$RW_DATA$$Limit= ((uint32_t)__section_begin(".rwdata")+(uint32_t)__section_size(".rwdata"));
    Image$$RW_IRAM1$$Base = (uint32_t) __section_begin(".bss");
    Image$$RW_IRAM1$$Limit= ((uint32_t)__section_begin(".bss")+(uint32_t)__section_size(".bss"));
    Image$$RW_DATA_NC$$Base = (uint32_t) __section_begin("NC_DATA");
    Image$$RW_DATA_NC$$Limit= ((uint32_t)__section_begin("NC_DATA")+(uint32_t)__section_size("NC_DATA"));
    Image$$ZI_DATA_NC$$Base = (uint32_t) __section_begin(".mirrorram");
    Image$$ZI_DATA_NC$$Limit= ((uint32_t)__section_begin(".mirrorram")+(uint32_t)__section_size("NC_BSS"));
#endif
    /*
     * Generate descriptors. Refer to core_ca.h to get information about attributes
     *
     */
    //Create descriptors for Vectors, RO, RW, ZI sections
    section_normal(Sect_Normal, region);
    section_normal_cod(Sect_Normal_Cod, region);
    section_normal_ro(Sect_Normal_RO, region);
    section_normal(Sect_Normal_RW, region);
    //Create descriptors for peripherals
    section_device_ro(Sect_Device_RO, region);
    section_device_rw(Sect_Device_RW, region);
    section_normal_nc(Sect_Normal_NC, region);
    //Create descriptors for 64k pages
    page64k_device_rw(Page_L1_64k, Page_64k_Device_RW, region);
    //Create descriptors for 4k pages
    page4k_device_rw(Page_L1_4k, Page_4k_Device_RW, region);

    /*
     *  Define MMU flat-map regions and attributes
     *
     */

    //Create 4GB of faulting entries
    MMU_TTSection (&Image$$TTB$$ZI$$Base, 0, 4096, DESCRIPTOR_FAULT);

    // memory map.
    MMU_TTSection (&Image$$TTB$$ZI$$Base, RZ_A2_SDRAM             , 64, Sect_Normal_RW);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, RZ_A2_SPI_IO            ,256, Sect_Normal_RO);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, RZ_A2_HYPER_FLASH       ,256, Sect_Normal_RO);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, RZ_A2_HYPER_RAM         ,256, Sect_Normal_RW);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, RZ_A2_OCTA_FLASH        ,256, Sect_Normal_RO);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, RZ_A2_OCTA_RAM          ,256, Sect_Normal_RW);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, RZ_A2_ONCHIP_SRAM_BASE  ,  4, Sect_Normal_RW);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, RZ_A2_PERIPH_BASE0      ,384, Sect_Device_RW);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, RZ_A2_PERIPH_BASE1      ,128, Sect_Device_RW);

#if defined( __ICCARM__ )
    //Define Image
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)Image$$RO_DATA$$Base , RO_DATA_SIZE , Sect_Normal_Cod);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)Image$$VECTORS$$Base , VECTORS_SIZE , Sect_Normal_Cod);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)Image$$RW_DATA$$Base , RW_DATA_SIZE , Sect_Normal_RW);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)Image$$RW_IRAM1$$Base, RW_IRAM1_SIZE, Sect_Normal_RW);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)Image$$RW_DATA_NC$$Base, RW_DATA_NC_SIZE, Sect_Normal_NC);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)Image$$ZI_DATA_NC$$Base, ZI_DATA_NC_SIZE, Sect_Normal_NC);
#else
    //Define Image
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)&Image$$RO_DATA$$Base , RO_DATA_SIZE , Sect_Normal_Cod);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)&Image$$VECTORS$$Base , VECTORS_SIZE , Sect_Normal_Cod);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)&Image$$RW_DATA$$Base , RW_DATA_SIZE , Sect_Normal_RW);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)&Image$$RW_IRAM1$$Base, RW_IRAM1_SIZE, Sect_Normal_RW);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)&Image$$RW_DATA_NC$$Base, RW_DATA_NC_SIZE, Sect_Normal_NC);
    MMU_TTSection (&Image$$TTB$$ZI$$Base, (uint32_t)&Image$$ZI_DATA_NC$$Base, ZI_DATA_NC_SIZE, Sect_Normal_NC);
#endif

    /* Set location of level 1 page table
    ; 31:14 - Translation table base addr (31:14-TTBCR.N, TTBCR.N is 0 out of reset)
    ; 13:7  - 0x0
    ; 6     - IRGN[0] 0x0 (Inner WB WA)
    ; 5     - NOS     0x0 (Non-shared)
    ; 4:3   - RGN     0x1 (Outer WB WA)
    ; 2     - IMP     0x0 (Implementation Defined)
    ; 1     - S       0x0 (Non-shared)
    ; 0     - IRGN[1] 0x1 (Inner WB WA) */
    __set_TTBR0(((uint32_t)&Image$$TTB$$ZI$$Base) | 9);
    __ISB();

    /* Set up domain access control register
    ; We set domain 0 to Client and all other domains to No Access.
    ; All translation table entries specify domain 0 */
    __set_DACR(1);
    __ISB();
}
