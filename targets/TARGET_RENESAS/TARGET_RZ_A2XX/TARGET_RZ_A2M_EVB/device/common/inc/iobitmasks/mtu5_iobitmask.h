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
#ifndef MTU5_IOBITMASK_H
#define MTU5_IOBITMASK_H


/* ==== Mask values for IO registers ==== */

#define MTU5_NFCR5_NFUEN                                                       (0x01u)
#define MTU5_NFCR5_NFUEN_SHIFT                                                 (0u)
#define MTU5_NFCR5_NFVEN                                                       (0x02u)
#define MTU5_NFCR5_NFVEN_SHIFT                                                 (1u)
#define MTU5_NFCR5_NFWEN                                                       (0x04u)
#define MTU5_NFCR5_NFWEN_SHIFT                                                 (2u)
#define MTU5_NFCR5_NFCS                                                        (0x30u)
#define MTU5_NFCR5_NFCS_SHIFT                                                  (4u)
#define MTU5_TCNTU_TCNTU                                                       (0xFFFFu)
#define MTU5_TCNTU_TCNTU_SHIFT                                                 (0u)
#define MTU5_TGRU_TGRU                                                         (0xFFFFu)
#define MTU5_TGRU_TGRU_SHIFT                                                   (0u)
#define MTU5_TCRU_TPSC                                                         (0x03u)
#define MTU5_TCRU_TPSC_SHIFT                                                   (0u)
#define MTU5_TCR2U_TPSC2                                                       (0x07u)
#define MTU5_TCR2U_TPSC2_SHIFT                                                 (0u)
#define MTU5_TCR2U_CKEG                                                        (0x18u)
#define MTU5_TCR2U_CKEG_SHIFT                                                  (3u)
#define MTU5_TIORU_IOC                                                         (0x1Fu)
#define MTU5_TIORU_IOC_SHIFT                                                   (0u)
#define MTU5_TCNTV_TCNTV                                                       (0xFFFFu)
#define MTU5_TCNTV_TCNTV_SHIFT                                                 (0u)
#define MTU5_TGRV_TGRV                                                         (0xFFFFu)
#define MTU5_TGRV_TGRV_SHIFT                                                   (0u)
#define MTU5_TCRV_TPSC                                                         (0x03u)
#define MTU5_TCRV_TPSC_SHIFT                                                   (0u)
#define MTU5_TCR2V_TPSC2                                                       (0x07u)
#define MTU5_TCR2V_TPSC2_SHIFT                                                 (0u)
#define MTU5_TCR2V_CKEG                                                        (0x18u)
#define MTU5_TCR2V_CKEG_SHIFT                                                  (3u)
#define MTU5_TIORV_IOC                                                         (0x1Fu)
#define MTU5_TIORV_IOC_SHIFT                                                   (0u)
#define MTU5_TCNTW_TCNTW                                                       (0xFFFFu)
#define MTU5_TCNTW_TCNTW_SHIFT                                                 (0u)
#define MTU5_TGRW_TGRW                                                         (0xFFFFu)
#define MTU5_TGRW_TGRW_SHIFT                                                   (0u)
#define MTU5_TCRW_TPSC                                                         (0x03u)
#define MTU5_TCRW_TPSC_SHIFT                                                   (0u)
#define MTU5_TCR2W_TPSC2                                                       (0x07u)
#define MTU5_TCR2W_TPSC2_SHIFT                                                 (0u)
#define MTU5_TCR2W_CKEG                                                        (0x18u)
#define MTU5_TCR2W_CKEG_SHIFT                                                  (3u)
#define MTU5_TIORW_IOC                                                         (0x1Fu)
#define MTU5_TIORW_IOC_SHIFT                                                   (0u)
#define MTU5_TIER_TGIE5W                                                       (0x01u)
#define MTU5_TIER_TGIE5W_SHIFT                                                 (0u)
#define MTU5_TIER_TGIE5V                                                       (0x02u)
#define MTU5_TIER_TGIE5V_SHIFT                                                 (1u)
#define MTU5_TIER_TGIE5U                                                       (0x04u)
#define MTU5_TIER_TGIE5U_SHIFT                                                 (2u)
#define MTU5_TSTR_CSTW5                                                        (0x01u)
#define MTU5_TSTR_CSTW5_SHIFT                                                  (0u)
#define MTU5_TSTR_CSTV5                                                        (0x02u)
#define MTU5_TSTR_CSTV5_SHIFT                                                  (1u)
#define MTU5_TSTR_CSTU5                                                        (0x04u)
#define MTU5_TSTR_CSTU5_SHIFT                                                  (2u)
#define MTU5_TCNTCMPCLR_CMPCLR5W                                               (0x01u)
#define MTU5_TCNTCMPCLR_CMPCLR5W_SHIFT                                         (0u)
#define MTU5_TCNTCMPCLR_CMPCLR5V                                               (0x02u)
#define MTU5_TCNTCMPCLR_CMPCLR5V_SHIFT                                         (1u)
#define MTU5_TCNTCMPCLR_CMPCLR5U                                               (0x04u)
#define MTU5_TCNTCMPCLR_CMPCLR5U_SHIFT                                         (2u)

#endif
