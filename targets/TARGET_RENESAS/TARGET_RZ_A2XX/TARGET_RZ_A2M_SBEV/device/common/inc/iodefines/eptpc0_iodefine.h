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
#ifndef EPTPC0_IODEFINE_H
#define EPTPC0_IODEFINE_H

struct st_eptpc0
{
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long OFMUD:1;
            unsigned long INTCHG:1;
            unsigned long MPDUD:1;
            unsigned long :1;
            unsigned long DRPTO:1;
            unsigned long INTDEV:1;
            unsigned long DRQOVR:1;
            unsigned long :5;
            unsigned long RECLP:1;
            unsigned long :1;
            unsigned long INFABT:1;
            unsigned long :1;
            unsigned long RESDN:1;
            unsigned long GENDN:1;
            unsigned long :14;
        } BIT;
    } SYSR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long OFMUD:1;
            unsigned long INTCHG:1;
            unsigned long MPDUD:1;
            unsigned long :1;
            unsigned long DRPTO:1;
            unsigned long INTDEV:1;
            unsigned long DRQOVR:1;
            unsigned long :5;
            unsigned long RECLP:1;
            unsigned long :1;
            unsigned long INFABT:1;
            unsigned long :1;
            unsigned long RESDN:1;
            unsigned long GENDN:1;
            unsigned long :14;
        } BIT;
    } SYIPR;
    char           wk0[8];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYMACRU:24;
            unsigned long :8;
        } BIT;
    } SYMACRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYMACRL:24;
            unsigned long :8;
        } BIT;
    } SYMACRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CTL:8;
            unsigned long :24;
        } BIT;
    } SYLLCCTLR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYIPADDRR:32;
        } BIT;
    } SYIPADDRR;
    char           wk1[32];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long VER:4;
            unsigned long TRSP:4;
            unsigned long :24;
        } BIT;
    } SYSPVRR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long DNUM:8;
            unsigned long :24;
        } BIT;
    } SYDOMR;
    char           wk2[8];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long FLAG0:1;
            unsigned long FLAG1:1;
            unsigned long FLAG2:1;
            unsigned long FLAG3:1;
            unsigned long FLAG4:1;
            unsigned long FLAG5:1;
            unsigned long :2;
            unsigned long FLAG8:1;
            unsigned long :1;
            unsigned long FLAG10:1;
            unsigned long :2;
            unsigned long FLAG13:1;
            unsigned long FLAG14:1;
            unsigned long :17;
        } BIT;
    } ANFR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :10;
            unsigned long FLAG10:1;
            unsigned long :2;
            unsigned long FLAG13:1;
            unsigned long FLAG14:1;
            unsigned long :17;
        } BIT;
    } SYNFR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :10;
            unsigned long FLAG10:1;
            unsigned long :2;
            unsigned long FLAG13:1;
            unsigned long FLAG14:1;
            unsigned long :17;
        } BIT;
    } DYRQFR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :8;
            unsigned long FLAG8:1;
            unsigned long FLAG9:1;
            unsigned long FLAG10:1;
            unsigned long :2;
            unsigned long FLAG13:1;
            unsigned long FLAG14:1;
            unsigned long :17;
        } BIT;
    } DYRPFR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYCIDRL:32;
        } BIT;
    } SYCIDRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYCIDRU:32;
        } BIT;
    } SYCIDRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PNUM:16;
            unsigned long :16;
        } BIT;
    } SYPNUMR;
    char           wk3[20];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long BMUP:1;
            unsigned long STUP:1;
            unsigned long ANUP:1;
            unsigned long :29;
        } BIT;
    } SYRVLDR;
    char           wk4[12];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ANCE:2;
            unsigned long :2;
            unsigned long SYNC:3;
            unsigned long :1;
            unsigned long FUP:3;
            unsigned long :1;
            unsigned long DRQ:3;
            unsigned long :1;
            unsigned long DRP:3;
            unsigned long :1;
            unsigned long PDRQ:3;
            unsigned long :1;
            unsigned long PDRP:3;
            unsigned long :1;
            unsigned long PDFUP:3;
            unsigned long :1;
        } BIT;
    } SYRFL1R;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MAN:2;
            unsigned long :2;
            unsigned long SIG:2;
            unsigned long :22;
            unsigned long ILL:2;
            unsigned long :2;
        } BIT;
    } SYRFL2R;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ANCE:1;
            unsigned long :3;
            unsigned long SYNC:1;
            unsigned long :3;
            unsigned long DRQ:1;
            unsigned long :3;
            unsigned long PDRQ:1;
            unsigned long :19;
        } BIT;
    } SYTRENR;
    char           wk5[4];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MTCIDL:32;
        } BIT;
    } MTCIDL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MTCIDU:32;
        } BIT;
    } MTCIDU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PNUM:16;
            unsigned long :16;
        } BIT;
    } MTPID;
    char           wk6[20];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ANCE:8;
            unsigned long SYNC:8;
            unsigned long DREQ:8;
            unsigned long :8;
        } BIT;
    } SYTLIR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ANCE:8;
            unsigned long SYNC:8;
            unsigned long DRESP:8;
            unsigned long :8;
        } BIT;
    } SYRLIR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long OFMRL:32;
        } BIT;
    } OFMRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long OFMRU:32;
        } BIT;
    } OFMRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MPDRU:32;
        } BIT;
    } MPDRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MPDRL:32;
        } BIT;
    } MPDRL;
    char           wk7[8];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long GMPR2:8;
            unsigned long :8;
            unsigned long GMPR1:8;
            unsigned long :8;
        } BIT;
    } GMPR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long GMCQR:32;
        } BIT;
    } GMCQR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long GMIDRU:32;
        } BIT;
    } GMIDRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long GMIDRL:32;
        } BIT;
    } GMIDRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TSRC:8;
            unsigned long :8;
            unsigned long CUTO:16;
        } BIT;
    } CUOTSR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SRMV:16;
            unsigned long :16;
        } BIT;
    } SRR;
    char           wk8[8];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PPMACRU:24;
            unsigned long :8;
        } BIT;
    } PPMACRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PPMACRL:24;
            unsigned long :8;
        } BIT;
    } PPMACRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PDMACRU:24;
            unsigned long :8;
        } BIT;
    } PDMACRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PDMACRL:24;
            unsigned long :8;
        } BIT;
    } PDMACRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TYPE:16;
            unsigned long :16;
        } BIT;
    } PETYPER;
    char           wk9[12];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PPIPR:32;
        } BIT;
    } PPIPR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PDIPR:32;
        } BIT;
    } PDIPR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long EVTO:8;
            unsigned long :24;
        } BIT;
    } PETOSR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long GETO:8;
            unsigned long :24;
        } BIT;
    } PGTOSR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PRTL:8;
            unsigned long :24;
        } BIT;
    } PPTTLR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PDTL:8;
            unsigned long :24;
        } BIT;
    } PDTTLR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long EVUPT:16;
            unsigned long :16;
        } BIT;
    } PEUDPR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long GEUPT:16;
            unsigned long :16;
        } BIT;
    } PGUDPR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SEL:1;
            unsigned long PRT:1;
            unsigned long ENB:1;
            unsigned long :13;
            unsigned long EXTPRM:1;
            unsigned long :15;
        } BIT;
    } FFLTR;
    char           wk10[28];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long FMAC0RU:24;
            unsigned long :8;
        } BIT;
    } FMAC0RU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long FMAC0RL:24;
            unsigned long :8;
        } BIT;
    } FMAC0RL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long FMAC1RU:24;
            unsigned long :8;
        } BIT;
    } FMAC1RU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long FMAC1RL:24;
            unsigned long :8;
        } BIT;
    } FMAC1RL;
    char           wk11[80];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long DASYMRU:16;
            unsigned long :16;
        } BIT;
    } DASYMRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long DASYMRL:32;
        } BIT;
    } DASYMRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long EGP:16;
            unsigned long INGP:16;
        } BIT;
    } TSLATR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TCYC:8;
            unsigned long :4;
            unsigned long SBDIS:1;
            unsigned long :3;
            unsigned long FILDIS:1;
            unsigned long :3;
            unsigned long TCMOD:1;
            unsigned long :11;
        } BIT;
    } SYCONFR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long FORM0:1;
            unsigned long FORM1:1;
            unsigned long :30;
        } BIT;
    } SYFORMR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long RSTOUTR:32;
        } BIT;
    } RSTOUTR;
};

#define EPTPC0    (*(volatile struct st_eptpc0    *)0xE8205800)
#define EPTPC1    (*(volatile struct st_eptpc0    *)0xE8205C00)

#endif
