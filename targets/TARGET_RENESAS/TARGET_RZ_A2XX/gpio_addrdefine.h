#ifndef __GPIO_ADDRDEFINE__
#define __GPIO_ADDRDEFINE__

#define PORTm_base (0xFCFFE000uL)

#define PDR(g)     (volatile unsigned short *)(PORTm_base + 0x0000 + ((g)*2))
#define PODR(g)    (volatile unsigned  char *)(PORTm_base + 0x0040 + ((g)*1))
#define PIDR(g)    (volatile unsigned  char *)(PORTm_base + 0x0060 + ((g)*1))
#define PMR(g)     (volatile unsigned  char *)(PORTm_base + 0x0080 + ((g)*1))
#define DSCR(g)    (volatile unsigned short *)(PORTm_base + 0x0140 + ((g)*2))
#define PFS(g,n)   (volatile unsigned  char *)(PORTm_base + 0x0200 + ((g)*8) + n)

#endif/*__GPIO_ADDRDEFINE__*/

