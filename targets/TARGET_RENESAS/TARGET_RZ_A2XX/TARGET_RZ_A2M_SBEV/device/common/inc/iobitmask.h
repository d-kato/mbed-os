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
#ifndef __RZA2M___IOBITMASK_HEADER__
#define __RZA2M___IOBITMASK_HEADER__


#define IOREG_DIRECT_REG_ACCESS     (0xFFFFFFFFuL)
#include "iobitmasks/adc_iobitmask.h"
#include "iobitmasks/bsc_iobitmask.h"
#include "iobitmasks/ceu_iobitmask.h"
#include "iobitmasks/cpg_iobitmask.h"
#include "iobitmasks/csi2link_iobitmask.h"
#include "iobitmasks/dmac0_iobitmask.h"
#include "iobitmasks/dmac1_iobitmask.h"
#include "iobitmasks/drpk_iobitmask.h"
#include "iobitmasks/drw_iobitmask.h"
#include "iobitmasks/eccram0_iobitmask.h"
#include "iobitmasks/eccram1_iobitmask.h"
#include "iobitmasks/eccram2_iobitmask.h"
#include "iobitmasks/edmac0_iobitmask.h"
#include "iobitmasks/edmac1_iobitmask.h"
#include "iobitmasks/eptpc0_iobitmask.h"
#include "iobitmasks/eptpc1_iobitmask.h"
#include "iobitmasks/eptpc_iobitmask.h"
#include "iobitmasks/etherc0_iobitmask.h"
#include "iobitmasks/etherc1_iobitmask.h"
#include "iobitmasks/gpio_iobitmask.h"
#include "iobitmasks/gpt32e0_iobitmask.h"
#include "iobitmasks/gpt32e1_iobitmask.h"
#include "iobitmasks/gpt32e2_iobitmask.h"
#include "iobitmasks/gpt32e3_iobitmask.h"
#include "iobitmasks/gpt32e4_iobitmask.h"
#include "iobitmasks/gpt32e5_iobitmask.h"
#include "iobitmasks/gpt32e6_iobitmask.h"
#include "iobitmasks/gpt32e7_iobitmask.h"
#include "iobitmasks/gpt_iobitmask.h"
#include "iobitmasks/hyper_iobitmask.h"
#include "iobitmasks/imr2_iobitmask.h"
#include "iobitmasks/intc_iobitmask.h"
#include "iobitmasks/irda_iobitmask.h"
#include "iobitmasks/jcu_iobitmask.h"
#include "iobitmasks/lvds_iobitmask.h"
#include "iobitmasks/mtu0_iobitmask.h"
#include "iobitmasks/mtu1_iobitmask.h"
#include "iobitmasks/mtu2_iobitmask.h"
#include "iobitmasks/mtu3_iobitmask.h"
#include "iobitmasks/mtu4_iobitmask.h"
#include "iobitmasks/mtu5_iobitmask.h"
#include "iobitmasks/mtu6_iobitmask.h"
#include "iobitmasks/mtu7_iobitmask.h"
#include "iobitmasks/mtu8_iobitmask.h"
#include "iobitmasks/mtu_iobitmask.h"
#include "iobitmasks/nandc_iobitmask.h"
#include "iobitmasks/octa_iobitmask.h"
#include "iobitmasks/ostm0_iobitmask.h"
#include "iobitmasks/ostm1_iobitmask.h"
#include "iobitmasks/ostm2_iobitmask.h"
#include "iobitmasks/pl310_iobitmask.h"
#include "iobitmasks/pmg_iobitmask.h"
#include "iobitmasks/poe3_iobitmask.h"
#include "iobitmasks/poeg_iobitmask.h"
#include "iobitmasks/port0_iobitmask.h"
#include "iobitmasks/port1_iobitmask.h"
#include "iobitmasks/port2_iobitmask.h"
#include "iobitmasks/port3_iobitmask.h"
#include "iobitmasks/port4_iobitmask.h"
#include "iobitmasks/port5_iobitmask.h"
#include "iobitmasks/port6_iobitmask.h"
#include "iobitmasks/port7_iobitmask.h"
#include "iobitmasks/port8_iobitmask.h"
#include "iobitmasks/port9_iobitmask.h"
#include "iobitmasks/porta_iobitmask.h"
#include "iobitmasks/portb_iobitmask.h"
#include "iobitmasks/portc_iobitmask.h"
#include "iobitmasks/portd_iobitmask.h"
#include "iobitmasks/porte_iobitmask.h"
#include "iobitmasks/portf_iobitmask.h"
#include "iobitmasks/portg_iobitmask.h"
#include "iobitmasks/porth_iobitmask.h"
#include "iobitmasks/portj_iobitmask.h"
#include "iobitmasks/portk_iobitmask.h"
#include "iobitmasks/portl_iobitmask.h"
#include "iobitmasks/portm_iobitmask.h"
#include "iobitmasks/prr_iobitmask.h"
#include "iobitmasks/ptpedmac_iobitmask.h"
#include "iobitmasks/rcanfd_iobitmask.h"
#include "iobitmasks/rcan_iobitmask.h"
#include "iobitmasks/riic30_iobitmask.h"
#include "iobitmasks/riic31_iobitmask.h"
#include "iobitmasks/riic32_iobitmask.h"
#include "iobitmasks/riic33_iobitmask.h"
#include "iobitmasks/rspi0_iobitmask.h"
#include "iobitmasks/rspi1_iobitmask.h"
#include "iobitmasks/rspi2_iobitmask.h"
#include "iobitmasks/rtc0_iobitmask.h"
#include "iobitmasks/rtc1_iobitmask.h"
#include "iobitmasks/rtc_bcnt0_iobitmask.h"
#include "iobitmasks/rtc_bcnt1_iobitmask.h"
#include "iobitmasks/scifa0_iobitmask.h"
#include "iobitmasks/scifa1_iobitmask.h"
#include "iobitmasks/scifa2_iobitmask.h"
#include "iobitmasks/scifa3_iobitmask.h"
#include "iobitmasks/scifa4_iobitmask.h"
#include "iobitmasks/scim0_iobitmask.h"
#include "iobitmasks/scim1_iobitmask.h"
#include "iobitmasks/spdif_iobitmask.h"
#include "iobitmasks/spibsc_iobitmask.h"
#include "iobitmasks/sprite_iobitmask.h"
#include "iobitmasks/ssif0_iobitmask.h"
#include "iobitmasks/ssif1_iobitmask.h"
#include "iobitmasks/ssif2_iobitmask.h"
#include "iobitmasks/ssif3_iobitmask.h"
#include "iobitmasks/usb00_iobitmask.h"
#include "iobitmasks/usb01_iobitmask.h"
#include "iobitmasks/usb10_iobitmask.h"
#include "iobitmasks/usb11_iobitmask.h"
#include "iobitmasks/vdc6_iobitmask.h"
#include "iobitmasks/vin_iobitmask.h"
#include "iobitmasks/wdt_iobitmask.h"

#endif
