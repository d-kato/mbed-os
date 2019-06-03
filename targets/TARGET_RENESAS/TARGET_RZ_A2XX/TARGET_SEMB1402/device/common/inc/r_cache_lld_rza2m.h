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
* File Name   : r_cache_l1_rza2_low.c
* $Rev: 288 $
* $Date:: 2018-04-05 18:16:53 +0900#$
* Description : Cortex-A9 Cache driver
*******************************************************************************/
#ifndef R_CAHCE_L1_RZA2_LOW_H
#define R_CACHE_L1_RZA2_LOW_H

/******************************************************************************
Includes   <System Includes> , "Project Includes"
******************************************************************************/
#include <stdint.h>

/******************************************************************************
Macro definitions
******************************************************************************/
#define R_CACHE_L1_OP_D_INV_ALL         (0)
#define R_CACHE_L1_OP_D_CLEAN_ALL       (1)
#define R_CACHE_L1_OP_D_CLEAN_INV_ALL   (2)

#define CA9_CACHE_LINE_SIZE           (0x20u)
#define CA9_CACHE_LINE_MASK           (0xFFFFFFE0u)

#define PL310_ALLWAYBITS_8              (0x00FFu)

#define PL310_CACHE_LINE_SIZE           (0x20u)
#define PL310_CACHE_LINE_MASK           (0xFFFFFFE0u)

#define PL310_ALLINT                    (0x1FFu)


/******************************************************************************
Functions Prototypes
******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

extern void r_cache_l1_cache_init(void);
extern void r_cache_l1_i_inv_all(void);
extern void r_cache_l1_d_cache_operation(uint32_t operation);
extern void r_cache_l1_d_inv_mva(uint32_t line_addr);
extern void r_cache_l1_d_clean_mva(uint32_t line_addr);
extern void r_cache_l1_d_clean_inv_mva(uint32_t line_addr);
extern void r_cache_l1_i_enable(void);
extern void r_cache_l1_i_disable(void);
extern void r_cache_l1_d_enable(void);
extern void r_cache_l1_d_disable(void);
extern void r_cache_l1_btac_enable(void);
extern void r_cache_l1_btac_disable(void);
extern void r_cache_l1_btac_inv(void);
extern void r_cache_l1_prefetch_enable(void);
extern void r_cache_l1_prefetch_disable(void);
extern void r_cache_l2_cache_init(void);
extern void r_cache_l2_cache_enable(void);
extern void r_cache_l2_cache_disable(void);
extern void r_cache_l2_prefetch_enable(void);
extern void r_cache_l2_prefetch_disable(void);
extern void r_cache_l2_inv_all(void);
extern void r_cache_l2_clean_all(void);
extern void r_cache_l2_clean_inv_all(void);
extern void r_cache_l2_sync(void);
extern void r_cache_l2_wait_sync(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif/* R_CAHCE_L1_RZA2_LOW_H */

/* End of File */
