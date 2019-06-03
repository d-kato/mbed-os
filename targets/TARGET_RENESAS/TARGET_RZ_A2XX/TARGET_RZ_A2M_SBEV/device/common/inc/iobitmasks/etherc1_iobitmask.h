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
#ifndef ETHERC1_IOBITMASK_H
#define ETHERC1_IOBITMASK_H


/* ==== Mask values for IO registers ==== */

#define ETHERC1_ECMR_PRM                                                       (0x00000001u)
#define ETHERC1_ECMR_PRM_SHIFT                                                 (0u)
#define ETHERC1_ECMR_DM                                                        (0x00000002u)
#define ETHERC1_ECMR_DM_SHIFT                                                  (1u)
#define ETHERC1_ECMR_RTM                                                       (0x00000004u)
#define ETHERC1_ECMR_RTM_SHIFT                                                 (2u)
#define ETHERC1_ECMR_ILB                                                       (0x00000008u)
#define ETHERC1_ECMR_ILB_SHIFT                                                 (3u)
#define ETHERC1_ECMR_TE                                                        (0x00000020u)
#define ETHERC1_ECMR_TE_SHIFT                                                  (5u)
#define ETHERC1_ECMR_RE                                                        (0x00000040u)
#define ETHERC1_ECMR_RE_SHIFT                                                  (6u)
#define ETHERC1_ECMR_MPDE                                                      (0x00000200u)
#define ETHERC1_ECMR_MPDE_SHIFT                                                (9u)
#define ETHERC1_ECMR_PRCEF                                                     (0x00001000u)
#define ETHERC1_ECMR_PRCEF_SHIFT                                               (12u)
#define ETHERC1_ECMR_TXF                                                       (0x00010000u)
#define ETHERC1_ECMR_TXF_SHIFT                                                 (16u)
#define ETHERC1_ECMR_RXF                                                       (0x00020000u)
#define ETHERC1_ECMR_RXF_SHIFT                                                 (17u)
#define ETHERC1_ECMR_PFR                                                       (0x00040000u)
#define ETHERC1_ECMR_PFR_SHIFT                                                 (18u)
#define ETHERC1_ECMR_ZPF                                                       (0x00080000u)
#define ETHERC1_ECMR_ZPF_SHIFT                                                 (19u)
#define ETHERC1_ECMR_TPC                                                       (0x00100000u)
#define ETHERC1_ECMR_TPC_SHIFT                                                 (20u)
#define ETHERC1_RFLR_RFL                                                       (0x00000FFFu)
#define ETHERC1_RFLR_RFL_SHIFT                                                 (0u)
#define ETHERC1_ECSR_ICD                                                       (0x00000001u)
#define ETHERC1_ECSR_ICD_SHIFT                                                 (0u)
#define ETHERC1_ECSR_MPD                                                       (0x00000002u)
#define ETHERC1_ECSR_MPD_SHIFT                                                 (1u)
#define ETHERC1_ECSR_LCHNG                                                     (0x00000004u)
#define ETHERC1_ECSR_LCHNG_SHIFT                                               (2u)
#define ETHERC1_ECSR_PSRTO                                                     (0x00000010u)
#define ETHERC1_ECSR_PSRTO_SHIFT                                               (4u)
#define ETHERC1_ECSR_BFR                                                       (0x00000020u)
#define ETHERC1_ECSR_BFR_SHIFT                                                 (5u)
#define ETHERC1_ECSIPR_ICDIP                                                   (0x00000001u)
#define ETHERC1_ECSIPR_ICDIP_SHIFT                                             (0u)
#define ETHERC1_ECSIPR_MPDIP                                                   (0x00000002u)
#define ETHERC1_ECSIPR_MPDIP_SHIFT                                             (1u)
#define ETHERC1_ECSIPR_LCHNGIP                                                 (0x00000004u)
#define ETHERC1_ECSIPR_LCHNGIP_SHIFT                                           (2u)
#define ETHERC1_ECSIPR_PSRTOIP                                                 (0x00000010u)
#define ETHERC1_ECSIPR_PSRTOIP_SHIFT                                           (4u)
#define ETHERC1_ECSIPR_BFSIPR                                                  (0x00000020u)
#define ETHERC1_ECSIPR_BFSIPR_SHIFT                                            (5u)
#define ETHERC1_PIR_MDC                                                        (0x00000001u)
#define ETHERC1_PIR_MDC_SHIFT                                                  (0u)
#define ETHERC1_PIR_MMD                                                        (0x00000002u)
#define ETHERC1_PIR_MMD_SHIFT                                                  (1u)
#define ETHERC1_PIR_MDO                                                        (0x00000004u)
#define ETHERC1_PIR_MDO_SHIFT                                                  (2u)
#define ETHERC1_PIR_MDI                                                        (0x00000008u)
#define ETHERC1_PIR_MDI_SHIFT                                                  (3u)
#define ETHERC1_PSR_LMON                                                       (0x00000001u)
#define ETHERC1_PSR_LMON_SHIFT                                                 (0u)
#define ETHERC1_RDMLR_RMD                                                      (0x000FFFFFu)
#define ETHERC1_RDMLR_RMD_SHIFT                                                (0u)
#define ETHERC1_IPGR_IPG                                                       (0x0000001Fu)
#define ETHERC1_IPGR_IPG_SHIFT                                                 (0u)
#define ETHERC1_APR_AP                                                         (0x0000FFFFu)
#define ETHERC1_APR_AP_SHIFT                                                   (0u)
#define ETHERC1_MPR_MP                                                         (0x0000FFFFu)
#define ETHERC1_MPR_MP_SHIFT                                                   (0u)
#define ETHERC1_RFCF_RPAUSE                                                    (0x000000FFu)
#define ETHERC1_RFCF_RPAUSE_SHIFT                                              (0u)
#define ETHERC1_TPAUSER_TPAUSE                                                 (0x0000FFFFu)
#define ETHERC1_TPAUSER_TPAUSE_SHIFT                                           (0u)
#define ETHERC1_TPAUSECR_TXP                                                   (0x000000FFu)
#define ETHERC1_TPAUSECR_TXP_SHIFT                                             (0u)
#define ETHERC1_BCFRR_BCF                                                      (0x0000FFFFu)
#define ETHERC1_BCFRR_BCF_SHIFT                                                (0u)
#define ETHERC1_MAHR_MAHR                                                      (0xFFFFFFFFu)
#define ETHERC1_MAHR_MAHR_SHIFT                                                (0u)
#define ETHERC1_MALR_MALR                                                      (0x0000FFFFu)
#define ETHERC1_MALR_MALR_SHIFT                                                (0u)
#define ETHERC1_TROCR_TROCR                                                    (0xFFFFFFFFu)
#define ETHERC1_TROCR_TROCR_SHIFT                                              (0u)
#define ETHERC1_CDCR_CDCR                                                      (0xFFFFFFFFu)
#define ETHERC1_CDCR_CDCR_SHIFT                                                (0u)
#define ETHERC1_LCCR_LCCR                                                      (0xFFFFFFFFu)
#define ETHERC1_LCCR_LCCR_SHIFT                                                (0u)
#define ETHERC1_CNDCR_CNDCR                                                    (0xFFFFFFFFu)
#define ETHERC1_CNDCR_CNDCR_SHIFT                                              (0u)
#define ETHERC1_CEFCR_CEFCR                                                    (0xFFFFFFFFu)
#define ETHERC1_CEFCR_CEFCR_SHIFT                                              (0u)
#define ETHERC1_FRECR_FRECR                                                    (0xFFFFFFFFu)
#define ETHERC1_FRECR_FRECR_SHIFT                                              (0u)
#define ETHERC1_TSFRCR_TSFRCR                                                  (0xFFFFFFFFu)
#define ETHERC1_TSFRCR_TSFRCR_SHIFT                                            (0u)
#define ETHERC1_TLFRCR_TLFRCR                                                  (0xFFFFFFFFu)
#define ETHERC1_TLFRCR_TLFRCR_SHIFT                                            (0u)
#define ETHERC1_RFCR_RFCR                                                      (0xFFFFFFFFu)
#define ETHERC1_RFCR_RFCR_SHIFT                                                (0u)
#define ETHERC1_MAFCR_MAFCR                                                    (0xFFFFFFFFu)
#define ETHERC1_MAFCR_MAFCR_SHIFT                                              (0u)

#endif
