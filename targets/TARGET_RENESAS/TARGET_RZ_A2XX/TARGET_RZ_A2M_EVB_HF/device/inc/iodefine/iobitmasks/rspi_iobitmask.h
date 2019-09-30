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
/*******************************************************************************
* Rev: 2.00
* Description : IO bitmask header
*******************************************************************************/

#ifndef RSPI_IOBITMASK_H
#define RSPI_IOBITMASK_H


/* ==== Mask values for IO registers ==== */

#define RSPI_SPCR_MODFEN                                                       (0x04u)
#define RSPI_SPCR_MODFEN_SHIFT                                                 (2u)
#define RSPI_SPCR_MSTR                                                         (0x08u)
#define RSPI_SPCR_MSTR_SHIFT                                                   (3u)
#define RSPI_SPCR_SPEIE                                                        (0x10u)
#define RSPI_SPCR_SPEIE_SHIFT                                                  (4u)
#define RSPI_SPCR_SPTIE                                                        (0x20u)
#define RSPI_SPCR_SPTIE_SHIFT                                                  (5u)
#define RSPI_SPCR_SPE                                                          (0x40u)
#define RSPI_SPCR_SPE_SHIFT                                                    (6u)
#define RSPI_SPCR_SPRIE                                                        (0x80u)
#define RSPI_SPCR_SPRIE_SHIFT                                                  (7u)
#define RSPI_SSLP_SSL0P                                                        (0x01u)
#define RSPI_SSLP_SSL0P_SHIFT                                                  (0u)
#define RSPI_SPPCR_SPLP                                                        (0x01u)
#define RSPI_SPPCR_SPLP_SHIFT                                                  (0u)
#define RSPI_SPPCR_MOIFV                                                       (0x10u)
#define RSPI_SPPCR_MOIFV_SHIFT                                                 (4u)
#define RSPI_SPPCR_MOIFE                                                       (0x20u)
#define RSPI_SPPCR_MOIFE_SHIFT                                                 (5u)
#define RSPI_SPSR_OVRF                                                         (0x01u)
#define RSPI_SPSR_OVRF_SHIFT                                                   (0u)
#define RSPI_SPSR_MODF                                                         (0x04u)
#define RSPI_SPSR_MODF_SHIFT                                                   (2u)
#define RSPI_SPSR_SPTEF                                                        (0x20u)
#define RSPI_SPSR_SPTEF_SHIFT                                                  (5u)
#define RSPI_SPSR_TEND                                                         (0x40u)
#define RSPI_SPSR_TEND_SHIFT                                                   (6u)
#define RSPI_SPSR_SPRF                                                         (0x80u)
#define RSPI_SPSR_SPRF_SHIFT                                                   (7u)
#define RSPI_SPDR_SPD0                                                         (0x00000001u)
#define RSPI_SPDR_SPD0_SHIFT                                                   (0u)
#define RSPI_SPDR_SPD1                                                         (0x00000002u)
#define RSPI_SPDR_SPD1_SHIFT                                                   (1u)
#define RSPI_SPDR_SPD2                                                         (0x00000004u)
#define RSPI_SPDR_SPD2_SHIFT                                                   (2u)
#define RSPI_SPDR_SPD3                                                         (0x00000008u)
#define RSPI_SPDR_SPD3_SHIFT                                                   (3u)
#define RSPI_SPDR_SPD4                                                         (0x00000010u)
#define RSPI_SPDR_SPD4_SHIFT                                                   (4u)
#define RSPI_SPDR_SPD5                                                         (0x00000020u)
#define RSPI_SPDR_SPD5_SHIFT                                                   (5u)
#define RSPI_SPDR_SPD6                                                         (0x00000040u)
#define RSPI_SPDR_SPD6_SHIFT                                                   (6u)
#define RSPI_SPDR_SPD7                                                         (0x00000080u)
#define RSPI_SPDR_SPD7_SHIFT                                                   (7u)
#define RSPI_SPDR_SPD8                                                         (0x00000100u)
#define RSPI_SPDR_SPD8_SHIFT                                                   (8u)
#define RSPI_SPDR_SPD9                                                         (0x00000200u)
#define RSPI_SPDR_SPD9_SHIFT                                                   (9u)
#define RSPI_SPDR_SPD10                                                        (0x00000400u)
#define RSPI_SPDR_SPD10_SHIFT                                                  (10u)
#define RSPI_SPDR_SPD11                                                        (0x00000800u)
#define RSPI_SPDR_SPD11_SHIFT                                                  (11u)
#define RSPI_SPDR_SPD12                                                        (0x00001000u)
#define RSPI_SPDR_SPD12_SHIFT                                                  (12u)
#define RSPI_SPDR_SPD13                                                        (0x00002000u)
#define RSPI_SPDR_SPD13_SHIFT                                                  (13u)
#define RSPI_SPDR_SPD14                                                        (0x00004000u)
#define RSPI_SPDR_SPD14_SHIFT                                                  (14u)
#define RSPI_SPDR_SPD15                                                        (0x00008000u)
#define RSPI_SPDR_SPD15_SHIFT                                                  (15u)
#define RSPI_SPDR_SPD16                                                        (0x00010000u)
#define RSPI_SPDR_SPD16_SHIFT                                                  (16u)
#define RSPI_SPDR_SPD17                                                        (0x00020000u)
#define RSPI_SPDR_SPD17_SHIFT                                                  (17u)
#define RSPI_SPDR_SPD18                                                        (0x00040000u)
#define RSPI_SPDR_SPD18_SHIFT                                                  (18u)
#define RSPI_SPDR_SPD19                                                        (0x00080000u)
#define RSPI_SPDR_SPD19_SHIFT                                                  (19u)
#define RSPI_SPDR_SPD20                                                        (0x00100000u)
#define RSPI_SPDR_SPD20_SHIFT                                                  (20u)
#define RSPI_SPDR_SPD21                                                        (0x00200000u)
#define RSPI_SPDR_SPD21_SHIFT                                                  (21u)
#define RSPI_SPDR_SPD22                                                        (0x00400000u)
#define RSPI_SPDR_SPD22_SHIFT                                                  (22u)
#define RSPI_SPDR_SPD23                                                        (0x00800000u)
#define RSPI_SPDR_SPD23_SHIFT                                                  (23u)
#define RSPI_SPDR_SPD24                                                        (0x01000000u)
#define RSPI_SPDR_SPD24_SHIFT                                                  (24u)
#define RSPI_SPDR_SPD25                                                        (0x02000000u)
#define RSPI_SPDR_SPD25_SHIFT                                                  (25u)
#define RSPI_SPDR_SPD26                                                        (0x04000000u)
#define RSPI_SPDR_SPD26_SHIFT                                                  (26u)
#define RSPI_SPDR_SPD27                                                        (0x08000000u)
#define RSPI_SPDR_SPD27_SHIFT                                                  (27u)
#define RSPI_SPDR_SPD28                                                        (0x10000000u)
#define RSPI_SPDR_SPD28_SHIFT                                                  (28u)
#define RSPI_SPDR_SPD29                                                        (0x20000000u)
#define RSPI_SPDR_SPD29_SHIFT                                                  (29u)
#define RSPI_SPDR_SPD30                                                        (0x40000000u)
#define RSPI_SPDR_SPD30_SHIFT                                                  (30u)
#define RSPI_SPDR_SPD31                                                        (0x80000000u)
#define RSPI_SPDR_SPD31_SHIFT                                                  (31u)
#define RSPI_SPSCR_SPSLN0                                                      (0x01u)
#define RSPI_SPSCR_SPSLN0_SHIFT                                                (0u)
#define RSPI_SPSCR_SPSLN1                                                      (0x02u)
#define RSPI_SPSCR_SPSLN1_SHIFT                                                (1u)
#define RSPI_SPSSR_SPCP0                                                       (0x01u)
#define RSPI_SPSSR_SPCP0_SHIFT                                                 (0u)
#define RSPI_SPSSR_SPCP1                                                       (0x02u)
#define RSPI_SPSSR_SPCP1_SHIFT                                                 (1u)
#define RSPI_SPBR_SPR0                                                         (0x01u)
#define RSPI_SPBR_SPR0_SHIFT                                                   (0u)
#define RSPI_SPBR_SPR1                                                         (0x02u)
#define RSPI_SPBR_SPR1_SHIFT                                                   (1u)
#define RSPI_SPBR_SPR2                                                         (0x04u)
#define RSPI_SPBR_SPR2_SHIFT                                                   (2u)
#define RSPI_SPBR_SPR3                                                         (0x08u)
#define RSPI_SPBR_SPR3_SHIFT                                                   (3u)
#define RSPI_SPBR_SPR4                                                         (0x10u)
#define RSPI_SPBR_SPR4_SHIFT                                                   (4u)
#define RSPI_SPBR_SPR5                                                         (0x20u)
#define RSPI_SPBR_SPR5_SHIFT                                                   (5u)
#define RSPI_SPBR_SPR6                                                         (0x40u)
#define RSPI_SPBR_SPR6_SHIFT                                                   (6u)
#define RSPI_SPBR_SPR7                                                         (0x80u)
#define RSPI_SPBR_SPR7_SHIFT                                                   (7u)
#define RSPI_SPDCR_SPLW0                                                       (0x20u)
#define RSPI_SPDCR_SPLW0_SHIFT                                                 (5u)
#define RSPI_SPDCR_SPLW1                                                       (0x40u)
#define RSPI_SPDCR_SPLW1_SHIFT                                                 (6u)
#define RSPI_SPDCR_TXDMY                                                       (0x80u)
#define RSPI_SPDCR_TXDMY_SHIFT                                                 (7u)
#define RSPI_SPCKD_SCKDL0                                                      (0x01u)
#define RSPI_SPCKD_SCKDL0_SHIFT                                                (0u)
#define RSPI_SPCKD_SCKDL1                                                      (0x02u)
#define RSPI_SPCKD_SCKDL1_SHIFT                                                (1u)
#define RSPI_SPCKD_SCKDL2                                                      (0x04u)
#define RSPI_SPCKD_SCKDL2_SHIFT                                                (2u)
#define RSPI_SSLND_SLNDL0                                                      (0x01u)
#define RSPI_SSLND_SLNDL0_SHIFT                                                (0u)
#define RSPI_SSLND_SLNDL1                                                      (0x02u)
#define RSPI_SSLND_SLNDL1_SHIFT                                                (1u)
#define RSPI_SSLND_SLNDL2                                                      (0x04u)
#define RSPI_SSLND_SLNDL2_SHIFT                                                (2u)
#define RSPI_SPND_SPNDL0                                                       (0x01u)
#define RSPI_SPND_SPNDL0_SHIFT                                                 (0u)
#define RSPI_SPND_SPNDL1                                                       (0x02u)
#define RSPI_SPND_SPNDL1_SHIFT                                                 (1u)
#define RSPI_SPND_SPNDL2                                                       (0x04u)
#define RSPI_SPND_SPNDL2_SHIFT                                                 (2u)
#define RSPI_SPCMD0_CPHA                                                       (0x0001u)
#define RSPI_SPCMD0_CPHA_SHIFT                                                 (0u)
#define RSPI_SPCMD0_CPOL                                                       (0x0002u)
#define RSPI_SPCMD0_CPOL_SHIFT                                                 (1u)
#define RSPI_SPCMD0_BRDV0                                                      (0x0004u)
#define RSPI_SPCMD0_BRDV0_SHIFT                                                (2u)
#define RSPI_SPCMD0_BRDV1                                                      (0x0008u)
#define RSPI_SPCMD0_BRDV1_SHIFT                                                (3u)
#define RSPI_SPCMD0_SSLKP                                                      (0x0080u)
#define RSPI_SPCMD0_SSLKP_SHIFT                                                (7u)
#define RSPI_SPCMD0_SPB0                                                       (0x0100u)
#define RSPI_SPCMD0_SPB0_SHIFT                                                 (8u)
#define RSPI_SPCMD0_SPB1                                                       (0x0200u)
#define RSPI_SPCMD0_SPB1_SHIFT                                                 (9u)
#define RSPI_SPCMD0_SPB2                                                       (0x0400u)
#define RSPI_SPCMD0_SPB2_SHIFT                                                 (10u)
#define RSPI_SPCMD0_SPB3                                                       (0x0800u)
#define RSPI_SPCMD0_SPB3_SHIFT                                                 (11u)
#define RSPI_SPCMD0_LSBF                                                       (0x1000u)
#define RSPI_SPCMD0_LSBF_SHIFT                                                 (12u)
#define RSPI_SPCMD0_SPNDEN                                                     (0x2000u)
#define RSPI_SPCMD0_SPNDEN_SHIFT                                               (13u)
#define RSPI_SPCMD0_SLNDEN                                                     (0x4000u)
#define RSPI_SPCMD0_SLNDEN_SHIFT                                               (14u)
#define RSPI_SPCMD0_SCKDEN                                                     (0x8000u)
#define RSPI_SPCMD0_SCKDEN_SHIFT                                               (15u)
#define RSPI_SPCMD1_CPHA                                                       (0x0001u)
#define RSPI_SPCMD1_CPHA_SHIFT                                                 (0u)
#define RSPI_SPCMD1_CPOL                                                       (0x0002u)
#define RSPI_SPCMD1_CPOL_SHIFT                                                 (1u)
#define RSPI_SPCMD1_BRDV0                                                      (0x0004u)
#define RSPI_SPCMD1_BRDV0_SHIFT                                                (2u)
#define RSPI_SPCMD1_BRDV1                                                      (0x0008u)
#define RSPI_SPCMD1_BRDV1_SHIFT                                                (3u)
#define RSPI_SPCMD1_SSLKP                                                      (0x0080u)
#define RSPI_SPCMD1_SSLKP_SHIFT                                                (7u)
#define RSPI_SPCMD1_SPB0                                                       (0x0100u)
#define RSPI_SPCMD1_SPB0_SHIFT                                                 (8u)
#define RSPI_SPCMD1_SPB1                                                       (0x0200u)
#define RSPI_SPCMD1_SPB1_SHIFT                                                 (9u)
#define RSPI_SPCMD1_SPB2                                                       (0x0400u)
#define RSPI_SPCMD1_SPB2_SHIFT                                                 (10u)
#define RSPI_SPCMD1_SPB3                                                       (0x0800u)
#define RSPI_SPCMD1_SPB3_SHIFT                                                 (11u)
#define RSPI_SPCMD1_LSBF                                                       (0x1000u)
#define RSPI_SPCMD1_LSBF_SHIFT                                                 (12u)
#define RSPI_SPCMD1_SPNDEN                                                     (0x2000u)
#define RSPI_SPCMD1_SPNDEN_SHIFT                                               (13u)
#define RSPI_SPCMD1_SLNDEN                                                     (0x4000u)
#define RSPI_SPCMD1_SLNDEN_SHIFT                                               (14u)
#define RSPI_SPCMD1_SCKDEN                                                     (0x8000u)
#define RSPI_SPCMD1_SCKDEN_SHIFT                                               (15u)
#define RSPI_SPCMD2_CPHA                                                       (0x0001u)
#define RSPI_SPCMD2_CPHA_SHIFT                                                 (0u)
#define RSPI_SPCMD2_CPOL                                                       (0x0002u)
#define RSPI_SPCMD2_CPOL_SHIFT                                                 (1u)
#define RSPI_SPCMD2_BRDV0                                                      (0x0004u)
#define RSPI_SPCMD2_BRDV0_SHIFT                                                (2u)
#define RSPI_SPCMD2_BRDV1                                                      (0x0008u)
#define RSPI_SPCMD2_BRDV1_SHIFT                                                (3u)
#define RSPI_SPCMD2_SSLKP                                                      (0x0080u)
#define RSPI_SPCMD2_SSLKP_SHIFT                                                (7u)
#define RSPI_SPCMD2_SPB0                                                       (0x0100u)
#define RSPI_SPCMD2_SPB0_SHIFT                                                 (8u)
#define RSPI_SPCMD2_SPB1                                                       (0x0200u)
#define RSPI_SPCMD2_SPB1_SHIFT                                                 (9u)
#define RSPI_SPCMD2_SPB2                                                       (0x0400u)
#define RSPI_SPCMD2_SPB2_SHIFT                                                 (10u)
#define RSPI_SPCMD2_SPB3                                                       (0x0800u)
#define RSPI_SPCMD2_SPB3_SHIFT                                                 (11u)
#define RSPI_SPCMD2_LSBF                                                       (0x1000u)
#define RSPI_SPCMD2_LSBF_SHIFT                                                 (12u)
#define RSPI_SPCMD2_SPNDEN                                                     (0x2000u)
#define RSPI_SPCMD2_SPNDEN_SHIFT                                               (13u)
#define RSPI_SPCMD2_SLNDEN                                                     (0x4000u)
#define RSPI_SPCMD2_SLNDEN_SHIFT                                               (14u)
#define RSPI_SPCMD2_SCKDEN                                                     (0x8000u)
#define RSPI_SPCMD2_SCKDEN_SHIFT                                               (15u)
#define RSPI_SPCMD3_CPHA                                                       (0x0001u)
#define RSPI_SPCMD3_CPHA_SHIFT                                                 (0u)
#define RSPI_SPCMD3_CPOL                                                       (0x0002u)
#define RSPI_SPCMD3_CPOL_SHIFT                                                 (1u)
#define RSPI_SPCMD3_BRDV0                                                      (0x0004u)
#define RSPI_SPCMD3_BRDV0_SHIFT                                                (2u)
#define RSPI_SPCMD3_BRDV1                                                      (0x0008u)
#define RSPI_SPCMD3_BRDV1_SHIFT                                                (3u)
#define RSPI_SPCMD3_SSLKP                                                      (0x0080u)
#define RSPI_SPCMD3_SSLKP_SHIFT                                                (7u)
#define RSPI_SPCMD3_SPB0                                                       (0x0100u)
#define RSPI_SPCMD3_SPB0_SHIFT                                                 (8u)
#define RSPI_SPCMD3_SPB1                                                       (0x0200u)
#define RSPI_SPCMD3_SPB1_SHIFT                                                 (9u)
#define RSPI_SPCMD3_SPB2                                                       (0x0400u)
#define RSPI_SPCMD3_SPB2_SHIFT                                                 (10u)
#define RSPI_SPCMD3_SPB3                                                       (0x0800u)
#define RSPI_SPCMD3_SPB3_SHIFT                                                 (11u)
#define RSPI_SPCMD3_LSBF                                                       (0x1000u)
#define RSPI_SPCMD3_LSBF_SHIFT                                                 (12u)
#define RSPI_SPCMD3_SPNDEN                                                     (0x2000u)
#define RSPI_SPCMD3_SPNDEN_SHIFT                                               (13u)
#define RSPI_SPCMD3_SLNDEN                                                     (0x4000u)
#define RSPI_SPCMD3_SLNDEN_SHIFT                                               (14u)
#define RSPI_SPCMD3_SCKDEN                                                     (0x8000u)
#define RSPI_SPCMD3_SCKDEN_SHIFT                                               (15u)
#define RSPI_SPBFCR_RXTRG                                                      (0x07u)
#define RSPI_SPBFCR_RXTRG_SHIFT                                                (0u)
#define RSPI_SPBFCR_TXTRG                                                      (0x30u)
#define RSPI_SPBFCR_TXTRG_SHIFT                                                (4u)
#define RSPI_SPBFCR_RXRST                                                      (0x40u)
#define RSPI_SPBFCR_RXRST_SHIFT                                                (6u)
#define RSPI_SPBFCR_TXRST                                                      (0x80u)
#define RSPI_SPBFCR_TXRST_SHIFT                                                (7u)
#define RSPI_SPBFDR_R                                                          (0x003Fu)
#define RSPI_SPBFDR_R_SHIFT                                                    (0u)
#define RSPI_SPBFDR_T                                                          (0x0F00u)
#define RSPI_SPBFDR_T_SHIFT                                                    (8u)

#endif
