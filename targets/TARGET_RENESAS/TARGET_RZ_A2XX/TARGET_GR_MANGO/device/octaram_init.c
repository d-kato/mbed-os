/*******************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only
* intended for use with Renesas products. No other uses are authorized. This
* software is owned by Renesas Electronics Corporation and is protected under
* all applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT
* LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
* AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.
* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS
* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE
* FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR
* ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE
* BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software
* and to discontinue the availability of this software. By using this software,
* you agree to the additional terms and conditions found by accessing the
* following link:
* http://www.renesas.com/disclaimer
* Copyright (C) 2019 Renesas Electronics Corporation. All rights reserved.
*******************************************************************************/
/*******************************************************************************
* File Name   : octaram_init.c
*******************************************************************************/


/******************************************************************************
Includes   <System Includes> , "Project Includes"
******************************************************************************/
#include "r_typedefs.h"
#include "iodefine.h"
#include "mbed_drv_cfg.h"

/******************************************************************************
* Function Name: OctaRAM_Init
* Description  :
* Arguments    : none
* Return Value : none
******************************************************************************/
void OctaRAM_Init(void)
{
    CPG.SCLKSEL.BIT.OCTCR = 2;           // Octa clock G

    OCTA.DSR1.BIT.DV1TYP = 1;            // TYPE=RAM
    OCTA.DSR1.BIT.DV1SZ  = OCTARAM_SIZE; // RAM size

    OCTA.CDSR.BIT.DV1TTYP = 2;           // Device1 =DOPI mode

    OCTA.MDLR.BIT.DV1WDL = 8;            // Device1 Write DUMMY = 8
    OCTA.MDLR.BIT.DV1RDL = 8;            // Device1 Read DUMMY = 8

    OCTA.MDTR.BIT.DQSERAM = 6;           // OM_DQS enable counter

    OCTA.DRCSTR.BIT.DVRDHI1  = 5;        // Device1 select signal High timing setting = 6.5 clock cycles
    OCTA.DRCSTR.BIT.DVRDCMD1 = 2;        // Device1 Command execution interval = 7 clock cycles

    OCTA.MRWCR1.BIT.D1MWCMD1 = 0x20;     // write command
    OCTA.MRWCR1.BIT.D1MRCMD1 = 0xA0;     // read command

    OCTA.MRWCSR.BIT.MWO1  = 1;           // Device1 write order setting = Write order is byte1, byte0, byte3, byte2
    OCTA.MRWCSR.BIT.MWCL1 = 2;           // Device1 write command length setting = 2
    OCTA.MRWCSR.BIT.MWAL1 = 4;           // Device1 write address length setting = 4
}

/* End of File */
