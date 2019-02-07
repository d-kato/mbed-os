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
#ifndef EPTPC_IODEFINE_H
#define EPTPC_IODEFINE_H

struct st_eptpc
{
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long RESET:1;
            unsigned long :31;
        } BIT;
    } PTRSTR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SCLKDIV:3;
            unsigned long :5;
            unsigned long SCLKSEL:3;
            unsigned long :21;
        } BIT;
    } STCSELR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long BYPASS0:1;
            unsigned long :15;
            unsigned long BYPASS1:1;
            unsigned long :15;
        } BIT;
    } BYPASS;
    char           wk0[2804];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ST:1;
            unsigned long SY0:1;
            unsigned long SY1:1;
            unsigned long PRC:1;
            unsigned long :12;
            unsigned long CYC0:1;
            unsigned long CYC1:1;
            unsigned long CYC2:1;
            unsigned long CYC3:1;
            unsigned long CYC4:1;
            unsigned long CYC5:1;
            unsigned long :10;
        } BIT;
    } MIESR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ST:1;
            unsigned long SY0:1;
            unsigned long SY1:1;
            unsigned long PR:1;
            unsigned long :12;
            unsigned long CYC0:1;
            unsigned long CYC1:1;
            unsigned long CYC2:1;
            unsigned long CYC3:1;
            unsigned long CYC4:1;
            unsigned long CYC5:1;
            unsigned long :10;
        } BIT;
    } MIEIPR;
    char           wk1[8];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CYCP0:1;
            unsigned long CYCP1:1;
            unsigned long CYCP2:1;
            unsigned long CYCP3:1;
            unsigned long CYCP4:1;
            unsigned long CYCP5:1;
            unsigned long :2;
            unsigned long CYCN0:1;
            unsigned long CYCN1:1;
            unsigned long CYCN2:1;
            unsigned long CYCN3:1;
            unsigned long CYCN4:1;
            unsigned long CYCN5:1;
            unsigned long :2;
            unsigned long PLSP:1;
            unsigned long :7;
            unsigned long PLSN:1;
            unsigned long :7;
        } BIT;
    } ELIPPR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CYCP0:1;
            unsigned long CYCP1:1;
            unsigned long CYCP2:1;
            unsigned long CYCP3:1;
            unsigned long CYCP4:1;
            unsigned long CYCP5:1;
            unsigned long :2;
            unsigned long CYCN0:1;
            unsigned long CYCN1:1;
            unsigned long CYCN2:1;
            unsigned long CYCN3:1;
            unsigned long CYCN4:1;
            unsigned long CYCN5:1;
            unsigned long :2;
            unsigned long PLSP:1;
            unsigned long :7;
            unsigned long PLSN:1;
            unsigned long :7;
        } BIT;
    } ELIPACR;
    char           wk2[40];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYNC:1;
            unsigned long SYNCOUT:1;
            unsigned long :1;
            unsigned long SYNTOUT:1;
            unsigned long W10S:1;
            unsigned long :27;
        } BIT;
    } STSR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYNC:1;
            unsigned long SYNCOUT:1;
            unsigned long :1;
            unsigned long SYNTOUT:1;
            unsigned long W10S:1;
            unsigned long :27;
        } BIT;
    } STIPR;
    char           wk3[8];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long STCF:2;
            unsigned long :30;
        } BIT;
    } STCFR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long WINT:8;
            unsigned long :5;
            unsigned long CMOD:1;
            unsigned long :1;
            unsigned long W10S:1;
            unsigned long SYTH:4;
            unsigned long DVTH:4;
            unsigned long :4;
            unsigned long ALEN0:1;
            unsigned long ALEN1:1;
            unsigned long :2;
        } BIT;
    } STMR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYNTOR:32;
        } BIT;
    } SYNTOR;
    char           wk4[4];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long IPTSEL0:1;
            unsigned long IPTSEL1:1;
            unsigned long IPTSEL2:1;
            unsigned long IPTSEL3:1;
            unsigned long IPTSEL4:1;
            unsigned long IPTSEL5:1;
            unsigned long :26;
        } BIT;
    } IPTSELR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MINTEN0:1;
            unsigned long MINTEN1:1;
            unsigned long MINTEN2:1;
            unsigned long MINTEN3:1;
            unsigned long MINTEN4:1;
            unsigned long MINTEN5:1;
            unsigned long :26;
        } BIT;
    } MITSELR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ELTDIS0:1;
            unsigned long ELTDIS1:1;
            unsigned long ELTDIS2:1;
            unsigned long ELTDIS3:1;
            unsigned long ELTDIS4:1;
            unsigned long ELTDIS5:1;
            unsigned long :26;
        } BIT;
    } ELTSELR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYSEL:1;
            unsigned long :31;
        } BIT;
    } STCHSELR;
    char           wk5[16];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long STR:1;
            unsigned long :31;
        } BIT;
    } SYNSTARTR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long LOAD:1;
            unsigned long :31;
        } BIT;
    } LCIVLDR;
    char           wk6[8];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYNTDARU:32;
        } BIT;
    } SYNTDARU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYNTDARL:32;
        } BIT;
    } SYNTDARL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYNTDBRU:32;
        } BIT;
    } SYNTDBRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SYNTDBRL:32;
        } BIT;
    } SYNTDBRL;
    char           wk7[16];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long LCIVRU:16;
            unsigned long :16;
        } BIT;
    } LCIVRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long LCIVRM:16;
            unsigned long :16;
        } BIT;
    } LCIVRM;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long LCIVRL:16;
            unsigned long :16;
        } BIT;
    } LCIVRL;
    char           wk8[104];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long GW10:1;
            unsigned long :31;
        } BIT;
    } GETW10R;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PLIMITRU:31;
            unsigned long :1;
        } BIT;
    } PLIMITRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PLIMITRM:32;
        } BIT;
    } PLIMITRM;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PLIMITRL:32;
        } BIT;
    } PLIMITRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MLIMITRU:31;
            unsigned long :1;
        } BIT;
    } MLIMITRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MLIMITRM:32;
        } BIT;
    } MLIMITRM;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MLIMITRL:32;
        } BIT;
    } MLIMITRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long INFO:1;
            unsigned long :31;
        } BIT;
    } GETINFOR;
    char           wk9[44];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long LCCVRU:16;
            unsigned long :16;
        } BIT;
    } LCCVRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long LCCVRM:32;
        } BIT;
    } LCCVRM;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long LCCVRL:32;
        } BIT;
    } LCCVRL;
    char           wk10[148];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PW10VRU:32;
        } BIT;
    } PW10VRU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PW10VRM:32;
        } BIT;
    } PW10VRM;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PW10VRL:32;
        } BIT;
    } PW10VRL;
    char           wk11[180];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MW10RU:32;
        } BIT;
    } MW10RU;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MW10RM:32;
        } BIT;
    } MW10RM;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MW10RL:32;
        } BIT;
    } MW10RL;
    char           wk12[36];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRU0:32;
        } BIT;
    } TMSTTRU0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRL0:32;
        } BIT;
    } TMSTTRL0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMCYCR0:32;
        } BIT;
    } TMCYCR0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMPLSR0:29;
            unsigned long :3;
        } BIT;
    } TMPLSR0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRU1:32;
        } BIT;
    } TMSTTRU1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRL1:32;
        } BIT;
    } TMSTTRL1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMCYCR1:32;
        } BIT;
    } TMCYCR1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMPLSR1:29;
            unsigned long :3;
        } BIT;
    } TMPLSR1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRU2:32;
        } BIT;
    } TMSTTRU2;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRL2:32;
        } BIT;
    } TMSTTRL2;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMCYCR2:32;
        } BIT;
    } TMCYCR2;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMPLSR2:29;
            unsigned long :3;
        } BIT;
    } TMPLSR2;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRU3:32;
        } BIT;
    } TMSTTRU3;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRL3:32;
        } BIT;
    } TMSTTRL3;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMCYCR3:32;
        } BIT;
    } TMCYCR3;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMPLSR3:29;
            unsigned long :3;
        } BIT;
    } TMPLSR3;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRU4:32;
        } BIT;
    } TMSTTRU4;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRL4:32;
        } BIT;
    } TMSTTRL4;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMCYCR4:32;
        } BIT;
    } TMCYCR4;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMPLSR4:29;
            unsigned long :3;
        } BIT;
    } TMPLSR4;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRU5:32;
        } BIT;
    } TMSTTRU5;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMSTTRL5:32;
        } BIT;
    } TMSTTRL5;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMCYCR5:32;
        } BIT;
    } TMCYCR5;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TMPLSR5:29;
            unsigned long :3;
        } BIT;
    } TMPLSR5;
    char           wk13[28];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long EN0:1;
            unsigned long EN1:1;
            unsigned long EN2:1;
            unsigned long EN3:1;
            unsigned long EN4:1;
            unsigned long EN5:1;
            unsigned long :22;
            unsigned long URE0:1;
            unsigned long URE1:1;
            unsigned long :2;
        } BIT;
    } TMSTARTR;
    char           wk14[128];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long OVRE0:1;
            unsigned long OVRE1:1;
            unsigned long OVRE2:1;
            unsigned long OVRE3:1;
            unsigned long :4;
            unsigned long MACE:1;
            unsigned long :19;
            unsigned long URE0:1;
            unsigned long URE1:1;
            unsigned long :2;
        } BIT;
    } PRSR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long OVRE0:1;
            unsigned long OVRE1:1;
            unsigned long OVRE2:1;
            unsigned long OVRE3:1;
            unsigned long :4;
            unsigned long MACE:1;
            unsigned long :19;
            unsigned long URE0:1;
            unsigned long URE1:1;
            unsigned long :2;
        } BIT;
    } PRIPR;
    char           wk15[8];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PRMACRU0:24;
            unsigned long :8;
        } BIT;
    } PRMACRU0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PRMACRL0:24;
            unsigned long :8;
        } BIT;
    } PRMACRL0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PRMACRU1:24;
            unsigned long :8;
        } BIT;
    } PRMACRU1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PRMACRL1:24;
            unsigned long :8;
        } BIT;
    } PRMACRL1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TDIS:2;
            unsigned long :30;
        } BIT;
    } TRNDISR;
    char           wk16[12];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long MOD:1;
            unsigned long :7;
            unsigned long FWD0:1;
            unsigned long FWD1:1;
            unsigned long :22;
        } BIT;
    } TRNMR;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long THVAL:11;
            unsigned long :21;
        } BIT;
    } TRNCTTDR;
};

#define EPTPC     (*(volatile struct st_eptpc     *)0xE8204500)

#endif
