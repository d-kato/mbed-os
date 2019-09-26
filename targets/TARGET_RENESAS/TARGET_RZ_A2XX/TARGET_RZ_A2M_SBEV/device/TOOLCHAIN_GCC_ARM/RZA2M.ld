/* Linker script for mbed RZ_A2M */

/* Linker script to configure memory regions. */

#define SERIAL_FLASH_ADDR   0x20000000   /* SerialFlash */

#define BOOT_LOADER_ADDR_SELECT    SERIAL_FLASH_ADDR

#if !defined(MBED_APP_START)
  #define MBED_APP_START BOOT_LOADER_ADDR_SELECT
#endif

#if !defined(MBED_APP_SIZE)
  #define MBED_APP_SIZE 0x800000
#endif

#define BOOT_LOADER_ADDR    (MBED_APP_START)
#if (MBED_APP_START == BOOT_LOADER_ADDR_SELECT)
  #define BOOT_LOADER_SIZE  (0x00004000)
#else
  #define BOOT_LOADER_SIZE  (0x00000000)
#endif

#define ROM_ADDR            (MBED_APP_START + BOOT_LOADER_SIZE)
#define ROM_SIZE            (MBED_APP_SIZE - BOOT_LOADER_SIZE)

MEMORY
{
  BOOT_LOADER (rx) : ORIGIN = BOOT_LOADER_ADDR, LENGTH = BOOT_LOADER_SIZE
  ROM (rx)         : ORIGIN = ROM_ADDR,         LENGTH = ROM_SIZE
  L_TTB (rw)       : ORIGIN = 0x80000000,       LENGTH = 0x00004000
  RAM_NV (rwx)     : ORIGIN = 0x80004000,       LENGTH = 0x0001C000
  RAM (rwx)        : ORIGIN = 0x80020000,       LENGTH = 0x002E0000
  RAM_NC (rwx)     : ORIGIN = 0x80300000,       LENGTH = 0x00100000
}

/* Linker script to place sections and symbol values. Should be used together
 * with other linker script that defines memory regions FLASH and RAM.
 * It references following symbols, which must be defined in code:
 *   Reset_Handler : Entry of reset handler
 * 
 * It defines following symbols, which code can use without definition:
 *   __exidx_start
 *   __exidx_end
 *   __etext
 *   __data_start__
 *   __preinit_array_start
 *   __preinit_array_end
 *   __init_array_start
 *   __init_array_end
 *   __fini_array_start
 *   __fini_array_end
 *   __data_end__
 *   __bss_start__
 *   __bss_end__
 *   __end__
 *   end
 *   __HeapLimit
 *   __StackLimit
 *   __StackTop
 *   __stack
 */
ENTRY(Reset_Handler)

SECTIONS
{
#if (MBED_APP_START == BOOT_LOADER_ADDR_SELECT)
    .boot :
    {
        KEEP(*(.boot_loader)) 
    } > BOOT_LOADER 
#endif

    .text :
    {

        Image$$VECTORS$$Base = .;
        * (RESET)

        KEEP(*(.isr_vector))
        *(SVC_TABLE)
        *(.text*)

        KEEP(*(.init))
        KEEP(*(.fini))

        /* .ctors */
        *crtbegin.o(.ctors)
        *crtbegin?.o(.ctors)
        *(EXCLUDE_FILE(*crtend?.o *crtend.o) .ctors)
        *(SORT(.ctors.*))
        *(.ctors)

        /* .dtors */
        *crtbegin.o(.dtors)
        *crtbegin?.o(.dtors)
        *(EXCLUDE_FILE(*crtend?.o *crtend.o) .dtors)
        *(SORT(.dtors.*))
        *(.dtors)
        Image$$VECTORS$$Limit = .;

        Image$$RO_DATA$$Base = .;
        *(.rodata*)
        Image$$RO_DATA$$Limit = .;

        KEEP(*(.eh_frame*))

        __etext = .;
    } > ROM

    .ARM.extab : 
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > ROM

    __exidx_start = .;
    .ARM.exidx :
    {
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
    } > ROM
    __exidx_end = .;


    .copy.table :
    {
        . = ALIGN(8);
        __copy_table_start__ = .;
        LONG (LOADADDR(.data))
        LONG (ADDR(.data))
        LONG (SIZEOF(.data))
        LONG (LOADADDR(.nc_data))
        LONG (ADDR(.nc_data))
        LONG (SIZEOF(.nc_data))
        LONG (LOADADDR(.hyper_data))
        LONG (ADDR(.hyper_data))
        LONG (SIZEOF(.hyper_data))
        LONG (LOADADDR(.ram_code))
        LONG (ADDR(.ram_code))
        LONG (SIZEOF(.ram_code))
        __copy_table_end__ = .;
    } > ROM

    .zero.table :
    {
        . = ALIGN(8);
        __zero_table_start__ = .;
        LONG (ADDR(.bss))
        LONG (SIZEOF(.bss))
        LONG (ADDR(.nc_bss))
        LONG (SIZEOF(.nc_bss))
        LONG (ADDR(.hyper_bss))
        LONG (SIZEOF(.hyper_bss))
        __zero_table_end__ = .;
    } > ROM

    .ram_code : ALIGN( 0x8 ) {
        *(RAM_CODE)
        *(RAM_CONST)
        . = ALIGN( 0x8 );
    } > RAM AT > ROM
    Load$$SEC_RAM_CODE$$Base    = LOADADDR(.ram_code);
    Image$$SEC_RAM_CODE$$Base   = ADDR(.ram_code);
    Load$$SEC_RAM_CODE$$Length  = SIZEOF(.ram_code);

    .ttb :
    {
        Image$$TTB$$ZI$$Base = .;
        . += 0x00004000;
        Image$$TTB$$ZI$$Limit = .;
    } > L_TTB

    .nv_data (NOLOAD) :
    {
        *(NV_DATA)
    } > RAM_NV

    .data :
    {
        Image$$RW_DATA$$Base = .;
        __data_start__ = .;
        *(vtable)
        *(.data*)
        Image$$RW_DATA$$Limit = .;

        . = ALIGN(8);
        /* preinit data */
        PROVIDE (__preinit_array_start = .);
        KEEP(*(.preinit_array))
        PROVIDE (__preinit_array_end = .);

        . = ALIGN(8);
        /* init data */
        PROVIDE (__init_array_start = .);
        KEEP(*(SORT(.init_array.*)))
        KEEP(*(.init_array))
        PROVIDE (__init_array_end = .);


        . = ALIGN(8);
        /* finit data */
        PROVIDE (__fini_array_start = .);
        KEEP(*(SORT(.fini_array.*)))
        KEEP(*(.fini_array))
        PROVIDE (__fini_array_end = .);

        . = ALIGN(8);
        /* All data end */
        __data_end__ = .;

    } > RAM AT > ROM

    .bss ALIGN(0x10):
    {
        Image$$RW_IRAM1$$Base = .;
        __bss_start__ = .;
        *(.bss*)
        *(COMMON)
        __bss_end__ = .;
        Image$$RW_IRAM1$$Limit = .;
    } > RAM

    .heap :
    {
        __end__ = .;
        end = __end__;
        *(.heap*)
    } > RAM

    /* .stack_dummy section doesn't contains any symbols. It is only
     * used for linker to calculate size of stack sections, and assign
     * values to stack symbols later */
    .stack_dummy (COPY):
    {
        *(.stack*)
    } > RAM

    /* Set stack top to end of RAM, and stack limit move down by
     * size of stack_dummy section */
    __StackTop = ORIGIN(RAM) + LENGTH(RAM);
    _estack = __StackTop;
    __StackLimit = __StackTop - SIZEOF(.stack_dummy);
    __HeapLimit = __StackLimit;
    PROVIDE(__stack = __StackTop);

    /* Check if data + heap + stack exceeds RAM limit */
    ASSERT(__StackLimit >= __HeapLimit, "region RAM overflowed with stack")

    .nc_data :
    {
        Image$$RW_DATA_NC$$Base = .;
        *(NC_DATA)

        . = ALIGN(8);
        Image$$RW_DATA_NC$$Limit = .;
    } > RAM_NC AT > ROM

    .nc_bss (NOLOAD) :
    {
        Image$$ZI_DATA_NC$$Base = .;
        *(NC_BSS)

        . = ALIGN(8);
        Image$$ZI_DATA_NC$$Limit = .;
    } > RAM_NC
}
