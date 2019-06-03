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
#ifndef RIIC33_IOBITMASK_H
#define RIIC33_IOBITMASK_H


/* ==== Mask values for IO registers ==== */

#define RIIC33_ICCR1_SDAI                                                      (0x00000001u)
#define RIIC33_ICCR1_SDAI_SHIFT                                                (0u)
#define RIIC33_ICCR1_SCLI                                                      (0x00000002u)
#define RIIC33_ICCR1_SCLI_SHIFT                                                (1u)
#define RIIC33_ICCR1_SDAO                                                      (0x00000004u)
#define RIIC33_ICCR1_SDAO_SHIFT                                                (2u)
#define RIIC33_ICCR1_SCLO                                                      (0x00000008u)
#define RIIC33_ICCR1_SCLO_SHIFT                                                (3u)
#define RIIC33_ICCR1_SOWP                                                      (0x00000010u)
#define RIIC33_ICCR1_SOWP_SHIFT                                                (4u)
#define RIIC33_ICCR1_CLO                                                       (0x00000020u)
#define RIIC33_ICCR1_CLO_SHIFT                                                 (5u)
#define RIIC33_ICCR1_IICRST                                                    (0x00000040u)
#define RIIC33_ICCR1_IICRST_SHIFT                                              (6u)
#define RIIC33_ICCR1_ICE                                                       (0x00000080u)
#define RIIC33_ICCR1_ICE_SHIFT                                                 (7u)
#define RIIC33_ICCR2_ST                                                        (0x00000002u)
#define RIIC33_ICCR2_ST_SHIFT                                                  (1u)
#define RIIC33_ICCR2_RS                                                        (0x00000004u)
#define RIIC33_ICCR2_RS_SHIFT                                                  (2u)
#define RIIC33_ICCR2_SP                                                        (0x00000008u)
#define RIIC33_ICCR2_SP_SHIFT                                                  (3u)
#define RIIC33_ICCR2_TRS                                                       (0x00000020u)
#define RIIC33_ICCR2_TRS_SHIFT                                                 (5u)
#define RIIC33_ICCR2_MST                                                       (0x00000040u)
#define RIIC33_ICCR2_MST_SHIFT                                                 (6u)
#define RIIC33_ICCR2_BBSY                                                      (0x00000080u)
#define RIIC33_ICCR2_BBSY_SHIFT                                                (7u)
#define RIIC33_ICMR1_BC                                                        (0x00000007u)
#define RIIC33_ICMR1_BC_SHIFT                                                  (0u)
#define RIIC33_ICMR1_BCWP                                                      (0x00000008u)
#define RIIC33_ICMR1_BCWP_SHIFT                                                (3u)
#define RIIC33_ICMR1_CKS                                                       (0x00000070u)
#define RIIC33_ICMR1_CKS_SHIFT                                                 (4u)
#define RIIC33_ICMR1_MTWP                                                      (0x00000080u)
#define RIIC33_ICMR1_MTWP_SHIFT                                                (7u)
#define RIIC33_ICMR2_TMOS                                                      (0x00000001u)
#define RIIC33_ICMR2_TMOS_SHIFT                                                (0u)
#define RIIC33_ICMR2_TMOL                                                      (0x00000002u)
#define RIIC33_ICMR2_TMOL_SHIFT                                                (1u)
#define RIIC33_ICMR2_TMOH                                                      (0x00000004u)
#define RIIC33_ICMR2_TMOH_SHIFT                                                (2u)
#define RIIC33_ICMR2_SDDL                                                      (0x00000070u)
#define RIIC33_ICMR2_SDDL_SHIFT                                                (4u)
#define RIIC33_ICMR2_DLCS                                                      (0x00000080u)
#define RIIC33_ICMR2_DLCS_SHIFT                                                (7u)
#define RIIC33_ICMR3_NF                                                        (0x00000003u)
#define RIIC33_ICMR3_NF_SHIFT                                                  (0u)
#define RIIC33_ICMR3_ACKBR                                                     (0x00000004u)
#define RIIC33_ICMR3_ACKBR_SHIFT                                               (2u)
#define RIIC33_ICMR3_ACKBT                                                     (0x00000008u)
#define RIIC33_ICMR3_ACKBT_SHIFT                                               (3u)
#define RIIC33_ICMR3_ACKWP                                                     (0x00000010u)
#define RIIC33_ICMR3_ACKWP_SHIFT                                               (4u)
#define RIIC33_ICMR3_RDRFS                                                     (0x00000020u)
#define RIIC33_ICMR3_RDRFS_SHIFT                                               (5u)
#define RIIC33_ICMR3_WAIT                                                      (0x00000040u)
#define RIIC33_ICMR3_WAIT_SHIFT                                                (6u)
#define RIIC33_ICMR3_SMBE                                                      (0x00000080u)
#define RIIC33_ICMR3_SMBE_SHIFT                                                (7u)
#define RIIC33_ICFER_TMOE                                                      (0x00000001u)
#define RIIC33_ICFER_TMOE_SHIFT                                                (0u)
#define RIIC33_ICFER_MALE                                                      (0x00000002u)
#define RIIC33_ICFER_MALE_SHIFT                                                (1u)
#define RIIC33_ICFER_NALE                                                      (0x00000004u)
#define RIIC33_ICFER_NALE_SHIFT                                                (2u)
#define RIIC33_ICFER_SALE                                                      (0x00000008u)
#define RIIC33_ICFER_SALE_SHIFT                                                (3u)
#define RIIC33_ICFER_NACKE                                                     (0x00000010u)
#define RIIC33_ICFER_NACKE_SHIFT                                               (4u)
#define RIIC33_ICFER_NFE                                                       (0x00000020u)
#define RIIC33_ICFER_NFE_SHIFT                                                 (5u)
#define RIIC33_ICFER_SCLE                                                      (0x00000040u)
#define RIIC33_ICFER_SCLE_SHIFT                                                (6u)
#define RIIC33_ICFER_FMPE                                                      (0x00000080u)
#define RIIC33_ICFER_FMPE_SHIFT                                                (7u)
#define RIIC33_ICSER_SAR0                                                      (0x00000001u)
#define RIIC33_ICSER_SAR0_SHIFT                                                (0u)
#define RIIC33_ICSER_SAR1                                                      (0x00000002u)
#define RIIC33_ICSER_SAR1_SHIFT                                                (1u)
#define RIIC33_ICSER_SAR2                                                      (0x00000004u)
#define RIIC33_ICSER_SAR2_SHIFT                                                (2u)
#define RIIC33_ICSER_GCE                                                       (0x00000008u)
#define RIIC33_ICSER_GCE_SHIFT                                                 (3u)
#define RIIC33_ICSER_DIDE                                                      (0x00000020u)
#define RIIC33_ICSER_DIDE_SHIFT                                                (5u)
#define RIIC33_ICSER_HOAE                                                      (0x00000080u)
#define RIIC33_ICSER_HOAE_SHIFT                                                (7u)
#define RIIC33_ICIER_TMOIE                                                     (0x00000001u)
#define RIIC33_ICIER_TMOIE_SHIFT                                               (0u)
#define RIIC33_ICIER_ALIE                                                      (0x00000002u)
#define RIIC33_ICIER_ALIE_SHIFT                                                (1u)
#define RIIC33_ICIER_STIE                                                      (0x00000004u)
#define RIIC33_ICIER_STIE_SHIFT                                                (2u)
#define RIIC33_ICIER_SPIE                                                      (0x00000008u)
#define RIIC33_ICIER_SPIE_SHIFT                                                (3u)
#define RIIC33_ICIER_NAKIE                                                     (0x00000010u)
#define RIIC33_ICIER_NAKIE_SHIFT                                               (4u)
#define RIIC33_ICIER_RIE                                                       (0x00000020u)
#define RIIC33_ICIER_RIE_SHIFT                                                 (5u)
#define RIIC33_ICIER_TEIE                                                      (0x00000040u)
#define RIIC33_ICIER_TEIE_SHIFT                                                (6u)
#define RIIC33_ICIER_TIE                                                       (0x00000080u)
#define RIIC33_ICIER_TIE_SHIFT                                                 (7u)
#define RIIC33_ICSR1_AAS0                                                      (0x00000001u)
#define RIIC33_ICSR1_AAS0_SHIFT                                                (0u)
#define RIIC33_ICSR1_AAS1                                                      (0x00000002u)
#define RIIC33_ICSR1_AAS1_SHIFT                                                (1u)
#define RIIC33_ICSR1_AAS2                                                      (0x00000004u)
#define RIIC33_ICSR1_AAS2_SHIFT                                                (2u)
#define RIIC33_ICSR1_GCA                                                       (0x00000008u)
#define RIIC33_ICSR1_GCA_SHIFT                                                 (3u)
#define RIIC33_ICSR1_DID                                                       (0x00000020u)
#define RIIC33_ICSR1_DID_SHIFT                                                 (5u)
#define RIIC33_ICSR1_HOA                                                       (0x00000080u)
#define RIIC33_ICSR1_HOA_SHIFT                                                 (7u)
#define RIIC33_ICSR2_TMOF                                                      (0x00000001u)
#define RIIC33_ICSR2_TMOF_SHIFT                                                (0u)
#define RIIC33_ICSR2_AL                                                        (0x00000002u)
#define RIIC33_ICSR2_AL_SHIFT                                                  (1u)
#define RIIC33_ICSR2_START                                                     (0x00000004u)
#define RIIC33_ICSR2_START_SHIFT                                               (2u)
#define RIIC33_ICSR2_STOP                                                      (0x00000008u)
#define RIIC33_ICSR2_STOP_SHIFT                                                (3u)
#define RIIC33_ICSR2_NACKF                                                     (0x00000010u)
#define RIIC33_ICSR2_NACKF_SHIFT                                               (4u)
#define RIIC33_ICSR2_RDRF                                                      (0x00000020u)
#define RIIC33_ICSR2_RDRF_SHIFT                                                (5u)
#define RIIC33_ICSR2_TEND                                                      (0x00000040u)
#define RIIC33_ICSR2_TEND_SHIFT                                                (6u)
#define RIIC33_ICSR2_TDRE                                                      (0x00000080u)
#define RIIC33_ICSR2_TDRE_SHIFT                                                (7u)
#define RIIC33_ICSAR0_SVA0                                                     (0x00000001u)
#define RIIC33_ICSAR0_SVA0_SHIFT                                               (0u)
#define RIIC33_ICSAR0_SVA                                                      (0x000003FCu)
#define RIIC33_ICSAR0_SVA_SHIFT                                                (1u)
#define RIIC33_ICSAR0_FS0                                                      (0x00008000u)
#define RIIC33_ICSAR0_FS0_SHIFT                                                (15u)
#define RIIC33_ICSAR1_SVA0                                                     (0x00000001u)
#define RIIC33_ICSAR1_SVA0_SHIFT                                               (0u)
#define RIIC33_ICSAR1_SVA                                                      (0x000003FCu)
#define RIIC33_ICSAR1_SVA_SHIFT                                                (1u)
#define RIIC33_ICSAR1_FS1                                                      (0x00008000u)
#define RIIC33_ICSAR1_FS1_SHIFT                                                (15u)
#define RIIC33_ICSAR2_SVA0                                                     (0x00000001u)
#define RIIC33_ICSAR2_SVA0_SHIFT                                               (0u)
#define RIIC33_ICSAR2_SVA                                                      (0x000003FCu)
#define RIIC33_ICSAR2_SVA_SHIFT                                                (1u)
#define RIIC33_ICSAR2_FS2                                                      (0x00008000u)
#define RIIC33_ICSAR2_FS2_SHIFT                                                (15u)
#define RIIC33_ICBRL_BRL                                                       (0x0000001Fu)
#define RIIC33_ICBRL_BRL_SHIFT                                                 (0u)
#define RIIC33_ICBRH_BRH                                                       (0x0000001Fu)
#define RIIC33_ICBRH_BRH_SHIFT                                                 (0u)
#define RIIC33_ICDRT_DRT                                                       (0x000000FFu)
#define RIIC33_ICDRT_DRT_SHIFT                                                 (0u)
#define RIIC33_ICDRR_DRR                                                       (0x000000FFu)
#define RIIC33_ICDRR_DRR_SHIFT                                                 (0u)

#endif
