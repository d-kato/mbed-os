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
#ifndef MTU4_IOBITMASK_H
#define MTU4_IOBITMASK_H


/* ==== Mask values for IO registers ==== */

#define MTU4_TCR_TPSC                                                          (0x07u)
#define MTU4_TCR_TPSC_SHIFT                                                    (0u)
#define MTU4_TCR_CKEG                                                          (0x18u)
#define MTU4_TCR_CKEG_SHIFT                                                    (3u)
#define MTU4_TCR_CCLR                                                          (0xE0u)
#define MTU4_TCR_CCLR_SHIFT                                                    (5u)
#define MTU4_TMDR1_MD                                                          (0x0Fu)
#define MTU4_TMDR1_MD_SHIFT                                                    (0u)
#define MTU4_TMDR1_BFA                                                         (0x10u)
#define MTU4_TMDR1_BFA_SHIFT                                                   (4u)
#define MTU4_TMDR1_BFB                                                         (0x20u)
#define MTU4_TMDR1_BFB_SHIFT                                                   (5u)
#define MTU4_TIORH_IOA                                                         (0x0Fu)
#define MTU4_TIORH_IOA_SHIFT                                                   (0u)
#define MTU4_TIORH_IOB                                                         (0xF0u)
#define MTU4_TIORH_IOB_SHIFT                                                   (4u)
#define MTU4_TIORL_IOC                                                         (0x0Fu)
#define MTU4_TIORL_IOC_SHIFT                                                   (0u)
#define MTU4_TIORL_IOD                                                         (0xF0u)
#define MTU4_TIORL_IOD_SHIFT                                                   (4u)
#define MTU4_TIER_TGIEA                                                        (0x01u)
#define MTU4_TIER_TGIEA_SHIFT                                                  (0u)
#define MTU4_TIER_TGIEB                                                        (0x02u)
#define MTU4_TIER_TGIEB_SHIFT                                                  (1u)
#define MTU4_TIER_TGIEC                                                        (0x04u)
#define MTU4_TIER_TGIEC_SHIFT                                                  (2u)
#define MTU4_TIER_TGIED                                                        (0x08u)
#define MTU4_TIER_TGIED_SHIFT                                                  (3u)
#define MTU4_TIER_TCIEV                                                        (0x10u)
#define MTU4_TIER_TCIEV_SHIFT                                                  (4u)
#define MTU4_TIER_TTGE2                                                        (0x40u)
#define MTU4_TIER_TTGE2_SHIFT                                                  (6u)
#define MTU4_TIER_TTGE                                                         (0x80u)
#define MTU4_TIER_TTGE_SHIFT                                                   (7u)
#define MTU4_TCNT_TCNT                                                         (0xFFFFu)
#define MTU4_TCNT_TCNT_SHIFT                                                   (0u)
#define MTU4_TGRA_TGRA                                                         (0xFFFFu)
#define MTU4_TGRA_TGRA_SHIFT                                                   (0u)
#define MTU4_TGRB_TGRB                                                         (0xFFFFu)
#define MTU4_TGRB_TGRB_SHIFT                                                   (0u)
#define MTU4_TGRC_TGRC                                                         (0xFFFFu)
#define MTU4_TGRC_TGRC_SHIFT                                                   (0u)
#define MTU4_TGRD_TGRD                                                         (0xFFFFu)
#define MTU4_TGRD_TGRD_SHIFT                                                   (0u)
#define MTU4_TSR_TCFD                                                          (0x80u)
#define MTU4_TSR_TCFD_SHIFT                                                    (7u)
#define MTU4_TBTM_TTSA                                                         (0x01u)
#define MTU4_TBTM_TTSA_SHIFT                                                   (0u)
#define MTU4_TBTM_TTSB                                                         (0x02u)
#define MTU4_TBTM_TTSB_SHIFT                                                   (1u)
#define MTU4_TADCR_ITB4VE                                                      (0x0001u)
#define MTU4_TADCR_ITB4VE_SHIFT                                                (0u)
#define MTU4_TADCR_ITB3AE                                                      (0x0002u)
#define MTU4_TADCR_ITB3AE_SHIFT                                                (1u)
#define MTU4_TADCR_ITA4VE                                                      (0x0004u)
#define MTU4_TADCR_ITA4VE_SHIFT                                                (2u)
#define MTU4_TADCR_ITA3AE                                                      (0x0008u)
#define MTU4_TADCR_ITA3AE_SHIFT                                                (3u)
#define MTU4_TADCR_DT4BE                                                       (0x0010u)
#define MTU4_TADCR_DT4BE_SHIFT                                                 (4u)
#define MTU4_TADCR_UT4BE                                                       (0x0020u)
#define MTU4_TADCR_UT4BE_SHIFT                                                 (5u)
#define MTU4_TADCR_DT4AE                                                       (0x0040u)
#define MTU4_TADCR_DT4AE_SHIFT                                                 (6u)
#define MTU4_TADCR_UT4AE                                                       (0x0080u)
#define MTU4_TADCR_UT4AE_SHIFT                                                 (7u)
#define MTU4_TADCR_BF                                                          (0xC000u)
#define MTU4_TADCR_BF_SHIFT                                                    (14u)
#define MTU4_TADCORA_TADCORA                                                   (0xFFFFu)
#define MTU4_TADCORA_TADCORA_SHIFT                                             (0u)
#define MTU4_TADCORB_TADCORB                                                   (0xFFFFu)
#define MTU4_TADCORB_TADCORB_SHIFT                                             (0u)
#define MTU4_TADCOBRA_TADCOBRA                                                 (0xFFFFu)
#define MTU4_TADCOBRA_TADCOBRA_SHIFT                                           (0u)
#define MTU4_TADCOBRB_TADCOBRB                                                 (0xFFFFu)
#define MTU4_TADCOBRB_TADCOBRB_SHIFT                                           (0u)
#define MTU4_TCR2_TPSC2                                                        (0x07u)
#define MTU4_TCR2_TPSC2_SHIFT                                                  (0u)
#define MTU4_TGRE_TGRE                                                         (0xFFFFu)
#define MTU4_TGRE_TGRE_SHIFT                                                   (0u)
#define MTU4_TGRF_TGRF                                                         (0xFFFFu)
#define MTU4_TGRF_TGRF_SHIFT                                                   (0u)
#define MTU4_NFCR4_NFAEN                                                       (0x01u)
#define MTU4_NFCR4_NFAEN_SHIFT                                                 (0u)
#define MTU4_NFCR4_NFBEN                                                       (0x02u)
#define MTU4_NFCR4_NFBEN_SHIFT                                                 (1u)
#define MTU4_NFCR4_NFCEN                                                       (0x04u)
#define MTU4_NFCR4_NFCEN_SHIFT                                                 (2u)
#define MTU4_NFCR4_NFDEN                                                       (0x08u)
#define MTU4_NFCR4_NFDEN_SHIFT                                                 (3u)
#define MTU4_NFCR4_NFCS                                                        (0x30u)
#define MTU4_NFCR4_NFCS_SHIFT                                                  (4u)

#endif
