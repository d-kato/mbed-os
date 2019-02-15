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
#ifndef EDMAC1_IOBITMASK_H
#define EDMAC1_IOBITMASK_H


/* ==== Mask values for IO registers ==== */

#define EDMAC1_EDMR_SWR                                                        (0x00000001u)
#define EDMAC1_EDMR_SWR_SHIFT                                                  (0u)
#define EDMAC1_EDMR_DL                                                         (0x00000030u)
#define EDMAC1_EDMR_DL_SHIFT                                                   (4u)
#define EDMAC1_EDMR_DE                                                         (0x00000040u)
#define EDMAC1_EDMR_DE_SHIFT                                                   (6u)
#define EDMAC1_EDTRR_TR                                                        (0x00000001u)
#define EDMAC1_EDTRR_TR_SHIFT                                                  (0u)
#define EDMAC1_EDRRR_RR                                                        (0x00000001u)
#define EDMAC1_EDRRR_RR_SHIFT                                                  (0u)
#define EDMAC1_TDLAR_TDLAR                                                     (0xFFFFFFFFu)
#define EDMAC1_TDLAR_TDLAR_SHIFT                                               (0u)
#define EDMAC1_RDLAR_RDLAR                                                     (0xFFFFFFFFu)
#define EDMAC1_RDLAR_RDLAR_SHIFT                                               (0u)
#define EDMAC1_EESR_CERF                                                       (0x00000001u)
#define EDMAC1_EESR_CERF_SHIFT                                                 (0u)
#define EDMAC1_EESR_PRE                                                        (0x00000002u)
#define EDMAC1_EESR_PRE_SHIFT                                                  (1u)
#define EDMAC1_EESR_RTSF                                                       (0x00000004u)
#define EDMAC1_EESR_RTSF_SHIFT                                                 (2u)
#define EDMAC1_EESR_RTLF                                                       (0x00000008u)
#define EDMAC1_EESR_RTLF_SHIFT                                                 (3u)
#define EDMAC1_EESR_RRF                                                        (0x00000010u)
#define EDMAC1_EESR_RRF_SHIFT                                                  (4u)
#define EDMAC1_EESR_RMAF                                                       (0x00000080u)
#define EDMAC1_EESR_RMAF_SHIFT                                                 (7u)
#define EDMAC1_EESR_TRO                                                        (0x00000100u)
#define EDMAC1_EESR_TRO_SHIFT                                                  (8u)
#define EDMAC1_EESR_CD                                                         (0x00000200u)
#define EDMAC1_EESR_CD_SHIFT                                                   (9u)
#define EDMAC1_EESR_DLC                                                        (0x00000400u)
#define EDMAC1_EESR_DLC_SHIFT                                                  (10u)
#define EDMAC1_EESR_CND                                                        (0x00000800u)
#define EDMAC1_EESR_CND_SHIFT                                                  (11u)
#define EDMAC1_EESR_RFOF                                                       (0x00010000u)
#define EDMAC1_EESR_RFOF_SHIFT                                                 (16u)
#define EDMAC1_EESR_RDE                                                        (0x00020000u)
#define EDMAC1_EESR_RDE_SHIFT                                                  (17u)
#define EDMAC1_EESR_FR                                                         (0x00040000u)
#define EDMAC1_EESR_FR_SHIFT                                                   (18u)
#define EDMAC1_EESR_TFUF                                                       (0x00080000u)
#define EDMAC1_EESR_TFUF_SHIFT                                                 (19u)
#define EDMAC1_EESR_TDE                                                        (0x00100000u)
#define EDMAC1_EESR_TDE_SHIFT                                                  (20u)
#define EDMAC1_EESR_TC                                                         (0x00200000u)
#define EDMAC1_EESR_TC_SHIFT                                                   (21u)
#define EDMAC1_EESR_ECI                                                        (0x00400000u)
#define EDMAC1_EESR_ECI_SHIFT                                                  (22u)
#define EDMAC1_EESR_ADE                                                        (0x00800000u)
#define EDMAC1_EESR_ADE_SHIFT                                                  (23u)
#define EDMAC1_EESR_RFCOF                                                      (0x01000000u)
#define EDMAC1_EESR_RFCOF_SHIFT                                                (24u)
#define EDMAC1_EESR_RABT                                                       (0x02000000u)
#define EDMAC1_EESR_RABT_SHIFT                                                 (25u)
#define EDMAC1_EESR_TABT                                                       (0x04000000u)
#define EDMAC1_EESR_TABT_SHIFT                                                 (26u)
#define EDMAC1_EESR_TWB                                                        (0x40000000u)
#define EDMAC1_EESR_TWB_SHIFT                                                  (30u)
#define EDMAC1_EESIPR_CERFIP                                                   (0x00000001u)
#define EDMAC1_EESIPR_CERFIP_SHIFT                                             (0u)
#define EDMAC1_EESIPR_PREIP                                                    (0x00000002u)
#define EDMAC1_EESIPR_PREIP_SHIFT                                              (1u)
#define EDMAC1_EESIPR_RTSFIP                                                   (0x00000004u)
#define EDMAC1_EESIPR_RTSFIP_SHIFT                                             (2u)
#define EDMAC1_EESIPR_RTLFIP                                                   (0x00000008u)
#define EDMAC1_EESIPR_RTLFIP_SHIFT                                             (3u)
#define EDMAC1_EESIPR_RRFIP                                                    (0x00000010u)
#define EDMAC1_EESIPR_RRFIP_SHIFT                                              (4u)
#define EDMAC1_EESIPR_RMAFIP                                                   (0x00000080u)
#define EDMAC1_EESIPR_RMAFIP_SHIFT                                             (7u)
#define EDMAC1_EESIPR_TROIP                                                    (0x00000100u)
#define EDMAC1_EESIPR_TROIP_SHIFT                                              (8u)
#define EDMAC1_EESIPR_CDIP                                                     (0x00000200u)
#define EDMAC1_EESIPR_CDIP_SHIFT                                               (9u)
#define EDMAC1_EESIPR_DLCIP                                                    (0x00000400u)
#define EDMAC1_EESIPR_DLCIP_SHIFT                                              (10u)
#define EDMAC1_EESIPR_CNDIP                                                    (0x00000800u)
#define EDMAC1_EESIPR_CNDIP_SHIFT                                              (11u)
#define EDMAC1_EESIPR_RFOFIP                                                   (0x00010000u)
#define EDMAC1_EESIPR_RFOFIP_SHIFT                                             (16u)
#define EDMAC1_EESIPR_RDEIP                                                    (0x00020000u)
#define EDMAC1_EESIPR_RDEIP_SHIFT                                              (17u)
#define EDMAC1_EESIPR_FRIP                                                     (0x00040000u)
#define EDMAC1_EESIPR_FRIP_SHIFT                                               (18u)
#define EDMAC1_EESIPR_TFUFIP                                                   (0x00080000u)
#define EDMAC1_EESIPR_TFUFIP_SHIFT                                             (19u)
#define EDMAC1_EESIPR_TDEIP                                                    (0x00100000u)
#define EDMAC1_EESIPR_TDEIP_SHIFT                                              (20u)
#define EDMAC1_EESIPR_TCIP                                                     (0x00200000u)
#define EDMAC1_EESIPR_TCIP_SHIFT                                               (21u)
#define EDMAC1_EESIPR_ECIIP                                                    (0x00400000u)
#define EDMAC1_EESIPR_ECIIP_SHIFT                                              (22u)
#define EDMAC1_EESIPR_ADEIP                                                    (0x00800000u)
#define EDMAC1_EESIPR_ADEIP_SHIFT                                              (23u)
#define EDMAC1_EESIPR_RFCOFIP                                                  (0x01000000u)
#define EDMAC1_EESIPR_RFCOFIP_SHIFT                                            (24u)
#define EDMAC1_EESIPR_RABTIP                                                   (0x02000000u)
#define EDMAC1_EESIPR_RABTIP_SHIFT                                             (25u)
#define EDMAC1_EESIPR_TABTIP                                                   (0x04000000u)
#define EDMAC1_EESIPR_TABTIP_SHIFT                                             (26u)
#define EDMAC1_EESIPR_TWBIP                                                    (0x40000000u)
#define EDMAC1_EESIPR_TWBIP_SHIFT                                              (30u)
#define EDMAC1_TRSCER_RRFCE                                                    (0x00000010u)
#define EDMAC1_TRSCER_RRFCE_SHIFT                                              (4u)
#define EDMAC1_TRSCER_RMAFCE                                                   (0x00000080u)
#define EDMAC1_TRSCER_RMAFCE_SHIFT                                             (7u)
#define EDMAC1_RMFCR_MFC                                                       (0x0000FFFFu)
#define EDMAC1_RMFCR_MFC_SHIFT                                                 (0u)
#define EDMAC1_TFTR_TFT                                                        (0x000007FFu)
#define EDMAC1_TFTR_TFT_SHIFT                                                  (0u)
#define EDMAC1_FDR_RFD                                                         (0x0000001Fu)
#define EDMAC1_FDR_RFD_SHIFT                                                   (0u)
#define EDMAC1_FDR_TFD                                                         (0x00001F00u)
#define EDMAC1_FDR_TFD_SHIFT                                                   (8u)
#define EDMAC1_RMCR_RNR                                                        (0x00000001u)
#define EDMAC1_RMCR_RNR_SHIFT                                                  (0u)
#define EDMAC1_TFUCR_UNDER                                                     (0x0000FFFFu)
#define EDMAC1_TFUCR_UNDER_SHIFT                                               (0u)
#define EDMAC1_RFOCR_OVER                                                      (0x0000FFFFu)
#define EDMAC1_RFOCR_OVER_SHIFT                                                (0u)
#define EDMAC1_IOSR_ELB                                                        (0x00000001u)
#define EDMAC1_IOSR_ELB_SHIFT                                                  (0u)
#define EDMAC1_FCFTR_RFDO                                                      (0x00000007u)
#define EDMAC1_FCFTR_RFDO_SHIFT                                                (0u)
#define EDMAC1_FCFTR_RFFO                                                      (0x00070000u)
#define EDMAC1_FCFTR_RFFO_SHIFT                                                (16u)
#define EDMAC1_RPADIR_PADR                                                     (0x0000003Fu)
#define EDMAC1_RPADIR_PADR_SHIFT                                               (0u)
#define EDMAC1_RPADIR_PADS                                                     (0x00030000u)
#define EDMAC1_RPADIR_PADS_SHIFT                                               (16u)
#define EDMAC1_TRIMD_TIS                                                       (0x00000001u)
#define EDMAC1_TRIMD_TIS_SHIFT                                                 (0u)
#define EDMAC1_TRIMD_TIM                                                       (0x00000010u)
#define EDMAC1_TRIMD_TIM_SHIFT                                                 (4u)
#define EDMAC1_RBWAR_RBWAR                                                     (0xFFFFFFFFu)
#define EDMAC1_RBWAR_RBWAR_SHIFT                                               (0u)
#define EDMAC1_RDFAR_RDFAR                                                     (0xFFFFFFFFu)
#define EDMAC1_RDFAR_RDFAR_SHIFT                                               (0u)
#define EDMAC1_TBRAR_TBRAR                                                     (0xFFFFFFFFu)
#define EDMAC1_TBRAR_TBRAR_SHIFT                                               (0u)
#define EDMAC1_TDFAR_TDFAR                                                     (0xFFFFFFFFu)
#define EDMAC1_TDFAR_TDFAR_SHIFT                                               (0u)

#endif
