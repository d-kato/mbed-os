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
#ifndef MTU0_IOBITMASK_H
#define MTU0_IOBITMASK_H


/* ==== Mask values for IO registers ==== */

#define MTU0_NFCR0_NFAEN                                                       (0x01u)
#define MTU0_NFCR0_NFAEN_SHIFT                                                 (0u)
#define MTU0_NFCR0_NFBEN                                                       (0x02u)
#define MTU0_NFCR0_NFBEN_SHIFT                                                 (1u)
#define MTU0_NFCR0_NFCEN                                                       (0x04u)
#define MTU0_NFCR0_NFCEN_SHIFT                                                 (2u)
#define MTU0_NFCR0_NFDEN                                                       (0x08u)
#define MTU0_NFCR0_NFDEN_SHIFT                                                 (3u)
#define MTU0_NFCR0_NFCS                                                        (0x30u)
#define MTU0_NFCR0_NFCS_SHIFT                                                  (4u)
#define MTU0_NFCRC_NFCAEN                                                      (0x01u)
#define MTU0_NFCRC_NFCAEN_SHIFT                                                (0u)
#define MTU0_NFCRC_NFCBEN                                                      (0x02u)
#define MTU0_NFCRC_NFCBEN_SHIFT                                                (1u)
#define MTU0_NFCRC_NFCCEN                                                      (0x04u)
#define MTU0_NFCRC_NFCCEN_SHIFT                                                (2u)
#define MTU0_NFCRC_NFCDEN                                                      (0x08u)
#define MTU0_NFCRC_NFCDEN_SHIFT                                                (3u)
#define MTU0_NFCRC_NFCSC                                                       (0x30u)
#define MTU0_NFCRC_NFCSC_SHIFT                                                 (4u)
#define MTU0_TCR_TPSC                                                          (0x07u)
#define MTU0_TCR_TPSC_SHIFT                                                    (0u)
#define MTU0_TCR_CKEG                                                          (0x18u)
#define MTU0_TCR_CKEG_SHIFT                                                    (3u)
#define MTU0_TCR_CCLR                                                          (0xE0u)
#define MTU0_TCR_CCLR_SHIFT                                                    (5u)
#define MTU0_TMDR1_MD                                                          (0x0Fu)
#define MTU0_TMDR1_MD_SHIFT                                                    (0u)
#define MTU0_TMDR1_BFA                                                         (0x10u)
#define MTU0_TMDR1_BFA_SHIFT                                                   (4u)
#define MTU0_TMDR1_BFB                                                         (0x20u)
#define MTU0_TMDR1_BFB_SHIFT                                                   (5u)
#define MTU0_TMDR1_BFE                                                         (0x40u)
#define MTU0_TMDR1_BFE_SHIFT                                                   (6u)
#define MTU0_TIORH_IOA                                                         (0x0Fu)
#define MTU0_TIORH_IOA_SHIFT                                                   (0u)
#define MTU0_TIORH_IOB                                                         (0xF0u)
#define MTU0_TIORH_IOB_SHIFT                                                   (4u)
#define MTU0_TIORL_IOC                                                         (0x0Fu)
#define MTU0_TIORL_IOC_SHIFT                                                   (0u)
#define MTU0_TIORL_IOD                                                         (0xF0u)
#define MTU0_TIORL_IOD_SHIFT                                                   (4u)
#define MTU0_TIER_TGIEA                                                        (0x01u)
#define MTU0_TIER_TGIEA_SHIFT                                                  (0u)
#define MTU0_TIER_TGIEB                                                        (0x02u)
#define MTU0_TIER_TGIEB_SHIFT                                                  (1u)
#define MTU0_TIER_TGIEC                                                        (0x04u)
#define MTU0_TIER_TGIEC_SHIFT                                                  (2u)
#define MTU0_TIER_TGIED                                                        (0x08u)
#define MTU0_TIER_TGIED_SHIFT                                                  (3u)
#define MTU0_TIER_TCIEV                                                        (0x10u)
#define MTU0_TIER_TCIEV_SHIFT                                                  (4u)
#define MTU0_TIER_TTGE                                                         (0x80u)
#define MTU0_TIER_TTGE_SHIFT                                                   (7u)
#define MTU0_TCNT_TCNT                                                         (0xFFFFu)
#define MTU0_TCNT_TCNT_SHIFT                                                   (0u)
#define MTU0_TGRA_TGRA                                                         (0xFFFFu)
#define MTU0_TGRA_TGRA_SHIFT                                                   (0u)
#define MTU0_TGRB_TGRB                                                         (0xFFFFu)
#define MTU0_TGRB_TGRB_SHIFT                                                   (0u)
#define MTU0_TGRC_TGRC                                                         (0xFFFFu)
#define MTU0_TGRC_TGRC_SHIFT                                                   (0u)
#define MTU0_TGRD_TGRD                                                         (0xFFFFu)
#define MTU0_TGRD_TGRD_SHIFT                                                   (0u)
#define MTU0_TGRE_TGRE                                                         (0xFFFFu)
#define MTU0_TGRE_TGRE_SHIFT                                                   (0u)
#define MTU0_TGRF_TGRF                                                         (0xFFFFu)
#define MTU0_TGRF_TGRF_SHIFT                                                   (0u)
#define MTU0_TIER2_TGIEE                                                       (0x01u)
#define MTU0_TIER2_TGIEE_SHIFT                                                 (0u)
#define MTU0_TIER2_TGIEF                                                       (0x02u)
#define MTU0_TIER2_TGIEF_SHIFT                                                 (1u)
#define MTU0_TIER2_TTGE2                                                       (0x80u)
#define MTU0_TIER2_TTGE2_SHIFT                                                 (7u)
#define MTU0_TBTM_TTSA                                                         (0x01u)
#define MTU0_TBTM_TTSA_SHIFT                                                   (0u)
#define MTU0_TBTM_TTSB                                                         (0x02u)
#define MTU0_TBTM_TTSB_SHIFT                                                   (1u)
#define MTU0_TBTM_TTSE                                                         (0x04u)
#define MTU0_TBTM_TTSE_SHIFT                                                   (2u)
#define MTU0_TCR2_TPSC2                                                        (0x07u)
#define MTU0_TCR2_TPSC2_SHIFT                                                  (0u)

#endif
