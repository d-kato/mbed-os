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
#ifndef MTU2_IOBITMASK_H
#define MTU2_IOBITMASK_H


/* ==== Mask values for IO registers ==== */

#define MTU2_NFCR2_NFAEN                                                       (0x01u)
#define MTU2_NFCR2_NFAEN_SHIFT                                                 (0u)
#define MTU2_NFCR2_NFBEN                                                       (0x02u)
#define MTU2_NFCR2_NFBEN_SHIFT                                                 (1u)
#define MTU2_NFCR2_NFCEN                                                       (0x04u)
#define MTU2_NFCR2_NFCEN_SHIFT                                                 (2u)
#define MTU2_NFCR2_NFDEN                                                       (0x08u)
#define MTU2_NFCR2_NFDEN_SHIFT                                                 (3u)
#define MTU2_NFCR2_NFCS                                                        (0x30u)
#define MTU2_NFCR2_NFCS_SHIFT                                                  (4u)
#define MTU2_TCR_TPSC                                                          (0x07u)
#define MTU2_TCR_TPSC_SHIFT                                                    (0u)
#define MTU2_TCR_CKEG                                                          (0x18u)
#define MTU2_TCR_CKEG_SHIFT                                                    (3u)
#define MTU2_TCR_CCLR                                                          (0xE0u)
#define MTU2_TCR_CCLR_SHIFT                                                    (5u)
#define MTU2_TMDR1_MD                                                          (0x0Fu)
#define MTU2_TMDR1_MD_SHIFT                                                    (0u)
#define MTU2_TIOR_IOA                                                          (0x0Fu)
#define MTU2_TIOR_IOA_SHIFT                                                    (0u)
#define MTU2_TIOR_IOB                                                          (0xF0u)
#define MTU2_TIOR_IOB_SHIFT                                                    (4u)
#define MTU2_TIER_TGIEA                                                        (0x01u)
#define MTU2_TIER_TGIEA_SHIFT                                                  (0u)
#define MTU2_TIER_TGIEB                                                        (0x02u)
#define MTU2_TIER_TGIEB_SHIFT                                                  (1u)
#define MTU2_TIER_TCIEV                                                        (0x10u)
#define MTU2_TIER_TCIEV_SHIFT                                                  (4u)
#define MTU2_TIER_TCIEU                                                        (0x20u)
#define MTU2_TIER_TCIEU_SHIFT                                                  (5u)
#define MTU2_TIER_TTGE                                                         (0x80u)
#define MTU2_TIER_TTGE_SHIFT                                                   (7u)
#define MTU2_TSR_TCFD                                                          (0x80u)
#define MTU2_TSR_TCFD_SHIFT                                                    (7u)
#define MTU2_TCNT_TCNT                                                         (0xFFFFu)
#define MTU2_TCNT_TCNT_SHIFT                                                   (0u)
#define MTU2_TGRA_TGRA                                                         (0xFFFFu)
#define MTU2_TGRA_TGRA_SHIFT                                                   (0u)
#define MTU2_TGRB_TGRB                                                         (0xFFFFu)
#define MTU2_TGRB_TGRB_SHIFT                                                   (0u)
#define MTU2_TCR2_TPSC2                                                        (0x07u)
#define MTU2_TCR2_TPSC2_SHIFT                                                  (0u)
#define MTU2_TCR2_PCB                                                          (0x18u)
#define MTU2_TCR2_PCB_SHIFT                                                    (3u)

#endif
