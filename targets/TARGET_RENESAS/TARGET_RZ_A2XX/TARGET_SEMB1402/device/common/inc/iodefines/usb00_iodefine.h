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
#ifndef USB00_IODEFINE_H
#define USB00_IODEFINE_H

struct st_usb00
{
    unsigned long  HCREVISION;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CBSR:2;
            unsigned long PLE:1;
            unsigned long IE:1;
            unsigned long CLE:1;
            unsigned long BLE:1;
            unsigned long HCFS:2;
            unsigned long :1;
            unsigned long RWC:1;
            unsigned long :1;
            unsigned long :21;
        } BIT;
    } HCCONTROL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long HCR:1;
            unsigned long CLF:1;
            unsigned long BLF:1;
            unsigned long OCR:1;
            unsigned long :12;
            unsigned long SOC:2;
            unsigned long :14;
        } BIT;
    } HCCOMMANDSTATUS;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SO:1;
            unsigned long WDH:1;
            unsigned long SF:1;
            unsigned long RD:1;
            unsigned long UE:1;
            unsigned long FNO:1;
            unsigned long RHSC:1;
            unsigned long :23;
            unsigned long :1;
            unsigned long :1;
        } BIT;
    } HCINTERRUPTSTATUS;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SOE:1;
            unsigned long WDHE:1;
            unsigned long SFE:1;
            unsigned long RDE:1;
            unsigned long UEE:1;
            unsigned long FNOE:1;
            unsigned long RHSCE:1;
            unsigned long :23;
            unsigned long OCE:1;
            unsigned long MIE:1;
        } BIT;
    } HCINTERRUPTENABLE;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SOD:1;
            unsigned long WDHD:1;
            unsigned long SFD:1;
            unsigned long RDD:1;
            unsigned long UED:1;
            unsigned long FNOD:1;
            unsigned long RHSCD:1;
            unsigned long :23;
            unsigned long OCD:1;
            unsigned long MID:1;
        } BIT;
    } HCINTERRUPTDISABLE;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :8;
            unsigned long HcHCCA:24;
        } BIT;
    } HCHCCA;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :4;
            unsigned long PECD:28;
        } BIT;
    } HCPERIODCURRENTED;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :4;
            unsigned long CHED:28;
        } BIT;
    } HCCONTROLHEADED;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :4;
            unsigned long CCED:28;
        } BIT;
    } HCCONTROLCURRENTED;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :4;
            unsigned long BHED:28;
        } BIT;
    } HCBULKHEADED;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :4;
            unsigned long BCED:28;
        } BIT;
    } HCBULKCURRENTED;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :4;
            unsigned long DH:28;
        } BIT;
    } HCDONEHEAD;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long FI:14;
            unsigned long :2;
            unsigned long FSMPS:15;
            unsigned long FIT:1;
        } BIT;
    } HCFMINTERVAL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long FR:14;
            unsigned long :17;
            unsigned long FRT:1;
        } BIT;
    } HCFMREMAINING;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long FN:16;
            unsigned long :16;
        } BIT;
    } HCFMNUMBER;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PS:14;
            unsigned long :18;
        } BIT;
    } HCPERIODICSTART;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long LST:12;
            unsigned long :20;
        } BIT;
    } HCLSTHRESHOLD;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long NDP:8;
            unsigned long PSM:1;
            unsigned long NPS:1;
            unsigned long DT:1;
            unsigned long OCPM:1;
            unsigned long NOCP:1;
            unsigned long :11;
            unsigned long POTPGT:8;
        } BIT;
    } HCRHDESCRIPTORA;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :1;
            unsigned long DR:1;
            unsigned long :15;
            unsigned long PPCM:1;
            unsigned long :14;
        } BIT;
    } HCRHDESCRIPTORB;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long LPS:1;
            unsigned long OCI:1;
            unsigned long :13;
            unsigned long DRWE:1;
            unsigned long LPSC:1;
            unsigned long OCIC:1;
            unsigned long :13;
            unsigned long CRWE:1;
        } BIT;
    } HCRHSTATUS;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CCS:1;
            unsigned long PES:1;
            unsigned long PSS:1;
            unsigned long POCI:1;
            unsigned long PRS:1;
            unsigned long :3;
            unsigned long PPS:1;
            unsigned long LSDA:1;
            unsigned long :6;
            unsigned long CSC:1;
            unsigned long PESC:1;
            unsigned long PSSC:1;
            unsigned long OCIC:1;
            unsigned long PRSC:1;
            unsigned long :11;
        } BIT;
    } HCRHPORTSTATUS1;
    char           wk0[4];
    char           wk1[164];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CapabilityRegistersLength:8;
            unsigned long :8;
            unsigned long InterfaceVersionNumber:16;
        } BIT;
    } CAPL_VERSION;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long N_PORTS:4;
            unsigned long PPC:1;
            unsigned long :2;
            unsigned long PortRoutingRules:1;
            unsigned long N_PCC:4;
            unsigned long N_CC:4;
            unsigned long P_INDICATOR:1;
            unsigned long :3;
            unsigned long DebugPortNumber:4;
            unsigned long :8;
        } BIT;
    } HCSPARAMS;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long AddressingCapability:1;
            unsigned long ProgramableFrameListFlag:1;
            unsigned long AsynchronousScheduleParkCapability:1;
            unsigned long :1;
            unsigned long IsochronousSchedulingThreshold:4;
            unsigned long EECP:8;
            unsigned long HardwarePrefetch:1;
            unsigned long LinkPowerManagementCapability:1;
            unsigned long PerPortChangeEventCapability:1;
            unsigned long FramePeriodicListCapability:1;
            unsigned long :12;
        } BIT;
    } HCCPARAMS;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CompanionPortRoute:32;
        } BIT;
    } HCSP_PORTROUTE;
    char           wk2[16];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long RS:1;
            unsigned long HCRESET:1;
            unsigned long FrameListSize:2;
            unsigned long PeriodicScheduleEnable:1;
            unsigned long AsynchronousScheduleEnable:1;
            unsigned long InterruptonAsyncAdvanceDoorbell:1;
            unsigned long :1;
            unsigned long AsynchronousScheduleParkModeCount:2;
            unsigned long :1;
            unsigned long AsynchronousScheduleParkModeEnable:1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long PerPortChangeEventsEnable:1;
            unsigned long InterruptThresholdControl:8;
            unsigned long HostInitiatedResumeDuration:4;
            unsigned long :4;
        } BIT;
    } USBCMD;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long USBINT:1;
            unsigned long USBERRINT:1;
            unsigned long PortChangeDetect:1;
            unsigned long FrameListRollover:1;
            unsigned long HostSystemError:1;
            unsigned long InterruptonAsyncAdvance:1;
            unsigned long :6;
            unsigned long HCHalted:1;
            unsigned long Reclamation:1;
            unsigned long PeriodicScheduleStatus:1;
            unsigned long AsynchronousScheduleStatus:1;
            unsigned long Port1ChangeDetect:1;
            unsigned long :15;
        } BIT;
    } USBSTS;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long USBInterruptEnable:1;
            unsigned long USBErrorInterruptEnable:1;
            unsigned long PortChangeDetectEnable:1;
            unsigned long FrameListRolloverEnable:1;
            unsigned long HostSystemErrorEnable:1;
            unsigned long InterruptonAsyncAdvanceEnable:1;
            unsigned long :10;
            unsigned long Port1ChangeEventEnable:1;
            unsigned long :15;
        } BIT;
    } USBINTR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long FrameIndex:14;
            unsigned long :18;
        } BIT;
    } FRINDEX;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CTRLDSSEGMENT:32;
        } BIT;
    } CTRLDSSEGMENT;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :12;
            unsigned long BaseAddress:20;
        } BIT;
    } PERIODICLISTBASE;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :5;
            unsigned long LPL:27;
        } BIT;
    } ASYNCLISTADDR;
    char           wk3[36];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CF:1;
            unsigned long :31;
        } BIT;
    } CONFIGFLAG;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CurrentConnectStatus:1;
            unsigned long ConnectStatusChange:1;
            unsigned long PortEnabled_Disabled:1;
            unsigned long PortEnable_DisableChange:1;
            unsigned long OvercurrentActive:1;
            unsigned long OvercurrentChange:1;
            unsigned long ForcePortResume:1;
            unsigned long Suspend:1;
            unsigned long PortReset:1;
            unsigned long SuspendusingL1:1;
            unsigned long LineStatus:2;
            unsigned long PP:1;
            unsigned long PortOwner:1;
            unsigned long :2;
            unsigned long PortTestControl:4;
            unsigned long WKCNNT_E:1;
            unsigned long WKDSCNNT_E:1;
            unsigned long WKOC_E:1;
            unsigned long SuspendStatus:2;
            unsigned long DeviceAddress:7;
        } BIT;
    } PORTSC1;
    char           wk4[4];
    char           wk5[132];
    char           wk6[4];
    char           wk7[12];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long AHB_INTEN:1;
            unsigned long USBH_INTAEN:1;
            unsigned long USBH_INTBEN:1;
            unsigned long UCOM_INTEN:1;
            unsigned long WAKEON_INTEN:1;
            unsigned long :1;
            unsigned long :26;
        } BIT;
    } INT_ENABLE;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long AHB_INT:1;
            unsigned long USBH_INTA:1;
            unsigned long USBH_INTB:1;
            unsigned long UCOM_INT:1;
            unsigned long WAKEON_INT:1;
            unsigned long :1;
            unsigned long :26;
        } BIT;
    } INT_STATUS;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MAX_BURST_LEN:2;
            unsigned long :2;
            unsigned long ALIGN_ADDRESS:2;
            unsigned long :2;
            unsigned long PROT_MODE:1;
            unsigned long :3;
            unsigned long PROT_TYPE:4;
            unsigned long :16;
        } BIT;
    } AHB_BUS_CTR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long USBH_RST:1;
            unsigned long PLL_RST:1;
            unsigned long DIRPD:1;
            unsigned long :29;
        } BIT;
    } USBCTR;
    char           wk8[240];
    char           wk9[4];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :1;
            unsigned long :15;
            unsigned long :1;
            unsigned long :7;
            unsigned long :1;
            unsigned long :3;
            unsigned long PERI_CLK_MSK:1;
            unsigned long HOST_CLK_MSK:1;
            unsigned long :1;
            unsigned long NONUSE_CLK_MSK:1;
        } BIT;
    } REGEN_CG_CTRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long GLOBAL_SUSPENDM_P1:1;
            unsigned long :1;
            unsigned long :2;
            unsigned long :6;
            unsigned long :12;
            unsigned long :1;
            unsigned long WKCNNT_ENABLE:1;
            unsigned long :6;
            unsigned long SLEEPM_ENABLE:1;
            unsigned long SUSPENDM_ENABLE:1;
        } BIT;
    } SPD_CTRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TIMER_RESUME:16;
            unsigned long TIMER_CONNECT:16;
        } BIT;
    } SPD_RSM_TIMSET;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TIMER_OC:20;
            unsigned long TIMER_SLEEP:9;
            unsigned long :3;
        } BIT;
    } OC_SLP_TIMSET;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SBRN:8;
            unsigned long FLADJ:8;
            unsigned long PORTWAKECAP:16;
        } BIT;
    } SBRN_FLADJ_PW;
    char           wk10[4];
    char           wk11[4];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long HIRD_SEL_P1:1;
            unsigned long RETRY_ENABLE_NYET_P1:1;
            unsigned long SLEEP_INT_EN_P1:1;
            unsigned long REMOTEWAKE_EN_P1:1;
            unsigned long NYET_RETRY_CNT_P1:4;
            unsigned long :8;
            unsigned long :11;
            unsigned long :5;
        } BIT;
    } PORT_LPM_CTRL1;
    char           wk12[4];
    char           wk13[24];
    char           wk14[4];
    char           wk15[4];
    char           wk16[24];
    char           wk17[4];
    char           wk18[4];
    char           wk19[4];
    char           wk20[4];
    char           wk21[144];
    char           wk22[4];
    char           wk23[4];
    char           wk24[4];
    char           wk25[1012];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :30;
            unsigned long :1;
            unsigned long OTG_PERI:1;
        } BIT;
    } COMMCTRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long IDCHG_STA:1;
            unsigned long OCINT_STA:1;
            unsigned long VBSTACHG_STA:1;
            unsigned long VBSTAINT_STA:1;
            unsigned long PDDETCHG1_STA:1;
            unsigned long :1;
            unsigned long CHGDETCHG1_STA:1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :3;
            unsigned long DMMONCHG_STA:1;
            unsigned long DPMONCHG_STA:1;
            unsigned long :1;
            unsigned long :5;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :4;
        } BIT;
    } OBINTSTA;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long IDCHG_EN:1;
            unsigned long OCINT_EN:1;
            unsigned long VBSTACHG_EN:1;
            unsigned long VBSTAINT_EN:1;
            unsigned long PDDETCHG1_EN:1;
            unsigned long :1;
            unsigned long CHGDETCHG1_EN:1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :3;
            unsigned long DMMONCHG_EN:1;
            unsigned long DPMONCHG_EN:1;
            unsigned long :1;
            unsigned long :5;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :4;
        } BIT;
    } OBINTEN;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long VBOUT:1;
            unsigned long :3;
            unsigned long VGPUO:1;
            unsigned long :3;
            unsigned long :1;
            unsigned long :7;
            unsigned long :1;
            unsigned long :1;
            unsigned long :3;
            unsigned long VBLVL:1;
            unsigned long :7;
            unsigned long VBSTA:1;
            unsigned long :2;
        } BIT;
    } VBCTRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long IDMON:1;
            unsigned long :1;
            unsigned long DMMON:1;
            unsigned long DPMON:1;
            unsigned long :2;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :1;
            unsigned long :6;
            unsigned long DM_RPD:1;
            unsigned long DMRPD_EN:1;
            unsigned long DP_RPD:1;
            unsigned long DPRPD_EN:1;
            unsigned long DSDP:2;
            unsigned long :2;
            unsigned long :2;
            unsigned long :6;
        } BIT;
    } LINECTRL1;
    char           wk26[4];
    char           wk27[8];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long IDPSRCE:1;
            unsigned long IDMSINKE:1;
            unsigned long VDPSRCE:1;
            unsigned long IDPSINKE:1;
            unsigned long VDMSRCE:1;
            unsigned long DCPMODE:1;
            unsigned long :2;
            unsigned long CHGDETSTS:1;
            unsigned long PDDETSTS:1;
            unsigned long :14;
            unsigned long :1;
            unsigned long :1;
            unsigned long :6;
        } BIT;
    } BCCTRL1;
    char           wk28[4];
    char           wk29[8];
    char           wk30[4];
    char           wk31[12];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CC2_RA:1;
            unsigned long CC2_RD:1;
            unsigned long CC1_RA:1;
            unsigned long CC1_RD:1;
            unsigned long CC_LVL_STA:1;
            unsigned long CC_PERI_STA:1;
            unsigned long :1;
            unsigned long :16;
            unsigned long :1;
            unsigned long CC_LVL_EN:1;
            unsigned long CC_LVL:4;
            unsigned long CC_LVL_CLR:1;
            unsigned long :1;
            unsigned long CC_INT_SEL:1;
        } BIT;
    } CC_STATUS;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long UCKSEL:1;
            unsigned long :31;
        } BIT;
    } PHYCLK_CTRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long FIXPHY:1;
            unsigned long :31;
        } BIT;
    } PHYIF_CTRL;
};

#define USB00     (*(volatile struct st_usb00     *)0xE8218000)
#define USB10     (*(volatile struct st_usb00     *)0xE821A000)

#endif
