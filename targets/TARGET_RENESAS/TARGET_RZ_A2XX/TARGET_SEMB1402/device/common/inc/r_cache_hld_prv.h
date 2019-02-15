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
* File Name    : r_cache_l1_rza2_api.h
* $Rev: 288 $
* $Date:: 2018-04-05 18:16:53 +0900#$
* Version      : 1.0
* Description  : Definition of the Cortex-A9 Cache API function.
*******************************************************************************/
#ifndef R_CACHE_L1_RZA2_API_H
#define R_CACHE_L1_RZA2_API_H

/*******************************************************************************
Includes <System Includes> , "Project Includes"
*******************************************************************************/
#include <stdint.h>

/******************************************************************************
Typedef definitions
******************************************************************************/
typedef enum cache_err
{
    CACHE_SUCCESS,
    CACHE_ERROR,
} cache_err_t;

/******************************************************************************
Functions Prototypes
******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

extern void R_CACHE_L1_Init(void);
extern void R_CACHE_L1_I_InvalidAll(void);
extern void R_CACHE_L1_D_InvalidAll(void);
extern void R_CACHE_L1_D_CleanAll(void);
extern void R_CACHE_L1_D_CleanInvalidAll(void);
extern cache_err_t R_CACHE_L1_D_InvalidLine(void* line_addr, uint32_t size);
extern cache_err_t R_CACHE_L1_D_CleanLine(void* line_addr, uint32_t size);
extern cache_err_t R_CACHE_L1_D_CleanInvalidLine(void* line_addr, uint32_t size);
extern void R_CACHE_L1_I_Enable(void);
extern void R_CACHE_L1_I_Disable(void);
extern void R_CACHE_L1_D_Enable(void);
extern void R_CACHE_L1_D_Disable(void);
extern void R_CACHE_L1_BtacEnable(void);
extern void R_CACHE_L1_BtacDisable(void);
extern void R_CACHE_L1_BtacInvalidate(void);
extern void R_CACHE_L1_PrefetchEnable(void);
extern void R_CACHE_L1_PrefetchDisable(void);
extern void R_CACHE_L2_Init(void);
extern void R_CACHE_L2_CacheEnable(void);
extern void R_CACHE_L2_CacheDisable(void);
extern void R_CACHE_L2_PrefetchEnable(void);
extern void R_CACHE_L2_PrefetchDisable(void);
extern void R_CACHE_L2_InvalidAll(void);
extern void R_CACHE_L2_CleanAll(void);
extern void R_CACHE_L2_CleanInvalidAll(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif/*R_CACHE_L1_RZA2_API_H*/
/* End of File */
