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
* Copyright (C) 2018 Renesas Electronics Corporation. All rights reserved.
*******************************************************************************/ 
#ifndef PORT5_IOBITMASK_H
#define PORT5_IOBITMASK_H


/* ==== Mask values for IO registers ==== */

#define PORT5_PDR_PDR0                                                         (0x0003u)
#define PORT5_PDR_PDR0_SHIFT                                                   (0u)
#define PORT5_PDR_PDR1                                                         (0x000Cu)
#define PORT5_PDR_PDR1_SHIFT                                                   (2u)
#define PORT5_PDR_PDR2                                                         (0x0030u)
#define PORT5_PDR_PDR2_SHIFT                                                   (4u)
#define PORT5_PDR_PDR3                                                         (0x00C0u)
#define PORT5_PDR_PDR3_SHIFT                                                   (6u)
#define PORT5_PDR_PDR4                                                         (0x0300u)
#define PORT5_PDR_PDR4_SHIFT                                                   (8u)
#define PORT5_PDR_PDR5                                                         (0x0C00u)
#define PORT5_PDR_PDR5_SHIFT                                                   (10u)
#define PORT5_PDR_PDR6                                                         (0x3000u)
#define PORT5_PDR_PDR6_SHIFT                                                   (12u)
#define PORT5_PDR_PDR7                                                         (0xC000u)
#define PORT5_PDR_PDR7_SHIFT                                                   (14u)
#define PORT5_PODR_PODR0                                                       (0x01u)
#define PORT5_PODR_PODR0_SHIFT                                                 (0u)
#define PORT5_PODR_PODR1                                                       (0x02u)
#define PORT5_PODR_PODR1_SHIFT                                                 (1u)
#define PORT5_PODR_PODR2                                                       (0x04u)
#define PORT5_PODR_PODR2_SHIFT                                                 (2u)
#define PORT5_PODR_PODR3                                                       (0x08u)
#define PORT5_PODR_PODR3_SHIFT                                                 (3u)
#define PORT5_PODR_PODR4                                                       (0x10u)
#define PORT5_PODR_PODR4_SHIFT                                                 (4u)
#define PORT5_PODR_PODR5                                                       (0x20u)
#define PORT5_PODR_PODR5_SHIFT                                                 (5u)
#define PORT5_PODR_PODR6                                                       (0x40u)
#define PORT5_PODR_PODR6_SHIFT                                                 (6u)
#define PORT5_PODR_PODR7                                                       (0x80u)
#define PORT5_PODR_PODR7_SHIFT                                                 (7u)
#define PORT5_PIDR_PIDR0                                                       (0x01u)
#define PORT5_PIDR_PIDR0_SHIFT                                                 (0u)
#define PORT5_PIDR_PIDR1                                                       (0x02u)
#define PORT5_PIDR_PIDR1_SHIFT                                                 (1u)
#define PORT5_PIDR_PIDR2                                                       (0x04u)
#define PORT5_PIDR_PIDR2_SHIFT                                                 (2u)
#define PORT5_PIDR_PIDR3                                                       (0x08u)
#define PORT5_PIDR_PIDR3_SHIFT                                                 (3u)
#define PORT5_PIDR_PIDR4                                                       (0x10u)
#define PORT5_PIDR_PIDR4_SHIFT                                                 (4u)
#define PORT5_PIDR_PIDR5                                                       (0x20u)
#define PORT5_PIDR_PIDR5_SHIFT                                                 (5u)
#define PORT5_PIDR_PIDR6                                                       (0x40u)
#define PORT5_PIDR_PIDR6_SHIFT                                                 (6u)
#define PORT5_PIDR_PIDR7                                                       (0x80u)
#define PORT5_PIDR_PIDR7_SHIFT                                                 (7u)
#define PORT5_PMR_PMR0                                                         (0x01u)
#define PORT5_PMR_PMR0_SHIFT                                                   (0u)
#define PORT5_PMR_PMR1                                                         (0x02u)
#define PORT5_PMR_PMR1_SHIFT                                                   (1u)
#define PORT5_PMR_PMR2                                                         (0x04u)
#define PORT5_PMR_PMR2_SHIFT                                                   (2u)
#define PORT5_PMR_PMR3                                                         (0x08u)
#define PORT5_PMR_PMR3_SHIFT                                                   (3u)
#define PORT5_PMR_PMR4                                                         (0x10u)
#define PORT5_PMR_PMR4_SHIFT                                                   (4u)
#define PORT5_PMR_PMR5                                                         (0x20u)
#define PORT5_PMR_PMR5_SHIFT                                                   (5u)
#define PORT5_PMR_PMR6                                                         (0x40u)
#define PORT5_PMR_PMR6_SHIFT                                                   (6u)
#define PORT5_PMR_PMR7                                                         (0x80u)
#define PORT5_PMR_PMR7_SHIFT                                                   (7u)
#define PORT5_DSCR_DSCR0                                                       (0x0003u)
#define PORT5_DSCR_DSCR0_SHIFT                                                 (0u)
#define PORT5_DSCR_DSCR1                                                       (0x000Cu)
#define PORT5_DSCR_DSCR1_SHIFT                                                 (2u)
#define PORT5_DSCR_DSCR2                                                       (0x0030u)
#define PORT5_DSCR_DSCR2_SHIFT                                                 (4u)
#define PORT5_DSCR_DSCR3                                                       (0x00C0u)
#define PORT5_DSCR_DSCR3_SHIFT                                                 (6u)
#define PORT5_DSCR_DSCR4                                                       (0x0300u)
#define PORT5_DSCR_DSCR4_SHIFT                                                 (8u)
#define PORT5_DSCR_DSCR5                                                       (0x0C00u)
#define PORT5_DSCR_DSCR5_SHIFT                                                 (10u)
#define PORT5_DSCR_DSCR6                                                       (0x3000u)
#define PORT5_DSCR_DSCR6_SHIFT                                                 (12u)
#define PORT5_DSCR_DSCR7                                                       (0xC000u)
#define PORT5_DSCR_DSCR7_SHIFT                                                 (14u)

#endif
