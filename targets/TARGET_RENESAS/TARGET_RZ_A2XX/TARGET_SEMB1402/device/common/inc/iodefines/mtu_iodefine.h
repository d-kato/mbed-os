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
#ifndef MTU_IODEFINE_H
#define MTU_IODEFINE_H

struct st_mtu
{
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char OE3B:1;
            unsigned char OE4A:1;
            unsigned char OE4B:1;
            unsigned char OE3D:1;
            unsigned char OE4C:1;
            unsigned char OE4D:1;
            unsigned char :2;
        } BIT;
    } TOERA;
    char           wk0[1];
    char           wk1[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char UF:1;
            unsigned char VF:1;
            unsigned char WF:1;
            unsigned char FB:1;
            unsigned char P:1;
            unsigned char N:1;
            unsigned char BDC:1;
            unsigned char :1;
        } BIT;
    } TGCRA;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char OLSP:1;
            unsigned char OLSN:1;
            unsigned char TOCS:1;
            unsigned char TOCL:1;
            unsigned char :2;
            unsigned char PSYE:1;
            unsigned char :1;
        } BIT;
    } TOCR1A;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char OLS1P:1;
            unsigned char OLS1N:1;
            unsigned char OLS2P:1;
            unsigned char OLS2N:1;
            unsigned char OLS3P:1;
            unsigned char OLS3N:1;
            unsigned char BF:2;
        } BIT;
    } TOCR2A;
    char           wk2[4];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TCDRA:16;
        } BIT;
    } TCDRA;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TDDRA:16;
        } BIT;
    } TDDRA;
    char           wk3[8];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TCNTSA:16;
        } BIT;
    } TCNTSA;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TCBRA:16;
        } BIT;
    } TCBRA;
    char           wk4[12];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char T4VCOR:3;
            unsigned char T4VEN:1;
            unsigned char T3ACOR:3;
            unsigned char T3AEN:1;
        } BIT;
    } TITCR1A;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char T4VCNT:3;
            unsigned char :1;
            unsigned char T3ACNT:3;
            unsigned char :1;
        } BIT;
    } TITCNT1A;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char BTE:2;
            unsigned char :6;
        } BIT;
    } TBTERA;
    char           wk5[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TDER:1;
            unsigned char :7;
        } BIT;
    } TDERA;
    char           wk6[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char OLS1P:1;
            unsigned char OLS1N:1;
            unsigned char OLS2P:1;
            unsigned char OLS2N:1;
            unsigned char OLS3P:1;
            unsigned char OLS3N:1;
            unsigned char :2;
        } BIT;
    } TOLBRA;
    char           wk7[3];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TITM:1;
            unsigned char :7;
        } BIT;
    } TITMRA;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TRG4COR:3;
            unsigned char :5;
        } BIT;
    } TITCR2A;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TRG4CNT:3;
            unsigned char :5;
        } BIT;
    } TITCNT2A;
    char           wk8[35];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char WRE:1;
            unsigned char SCC:1;
            unsigned char :5;
            unsigned char CCE:1;
        } BIT;
    } TWCRA;
    char           wk9[15];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char DRS:1;
            unsigned char :7;
        } BIT;
    } TMDR2A;
    char           wk10[15];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char CST0:1;
            unsigned char CST1:1;
            unsigned char CST2:1;
            unsigned char CST8:1;
            unsigned char :2;
            unsigned char CST3:1;
            unsigned char CST4:1;
        } BIT;
    } TSTRA;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char SYNC0:1;
            unsigned char SYNC1:1;
            unsigned char SYNC2:1;
            unsigned char :3;
            unsigned char SYNC3:1;
            unsigned char SYNC4:1;
        } BIT;
    } TSYRA;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char SCH7:1;
            unsigned char SCH6:1;
            unsigned char :1;
            unsigned char SCH4:1;
            unsigned char SCH3:1;
            unsigned char SCH2:1;
            unsigned char SCH1:1;
            unsigned char SCH0:1;
        } BIT;
    } TCSYSTR;
    char           wk11[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char RWE:1;
            unsigned char :7;
        } BIT;
    } TRWERA;
    char           wk12[1925];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char OE6B:1;
            unsigned char OE7A:1;
            unsigned char OE7B:1;
            unsigned char OE6D:1;
            unsigned char OE7C:1;
            unsigned char OE7D:1;
            unsigned char :2;
        } BIT;
    } TOERB;
    char           wk13[1];
    char           wk14[1];
    char           wk15[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char OLSP:1;
            unsigned char OLSN:1;
            unsigned char TOCS:1;
            unsigned char TOCL:1;
            unsigned char :2;
            unsigned char PSYE:1;
            unsigned char :1;
        } BIT;
    } TOCR1B;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char OLS1P:1;
            unsigned char OLS1N:1;
            unsigned char OLS2P:1;
            unsigned char OLS2N:1;
            unsigned char OLS3P:1;
            unsigned char OLS3N:1;
            unsigned char BF:2;
        } BIT;
    } TOCR2B;
    char           wk16[4];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TCDRB:16;
        } BIT;
    } TCDRB;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TDDRB:16;
        } BIT;
    } TDDRB;
    char           wk17[8];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TCNTSB:16;
        } BIT;
    } TCNTSB;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TCBRB:16;
        } BIT;
    } TCBRB;
    char           wk18[12];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char T7VCOR:3;
            unsigned char T7VEN:1;
            unsigned char T6ACOR:3;
            unsigned char T6AEN:1;
        } BIT;
    } TITCR1B;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char T7VCNT:3;
            unsigned char :1;
            unsigned char T6ACNT:3;
            unsigned char :1;
        } BIT;
    } TITCNT1B;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char BTE:2;
            unsigned char :6;
        } BIT;
    } TBTERB;
    char           wk19[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TDER:1;
            unsigned char :7;
        } BIT;
    } TDERB;
    char           wk20[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char OLS1P:1;
            unsigned char OLS1N:1;
            unsigned char OLS2P:1;
            unsigned char OLS2N:1;
            unsigned char OLS3P:1;
            unsigned char OLS3N:1;
            unsigned char :2;
        } BIT;
    } TOLBRB;
    char           wk21[3];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TITM:1;
            unsigned char :7;
        } BIT;
    } TITMRB;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TRG7COR:3;
            unsigned char :5;
        } BIT;
    } TITCR2B;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TRG7CNT:3;
            unsigned char :5;
        } BIT;
    } TITCNT2B;
    char           wk22[35];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char WRE:1;
            unsigned char SCC:1;
            unsigned char :5;
            unsigned char CCE:1;
        } BIT;
    } TWCRB;
    char           wk23[15];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char DRS:1;
            unsigned char :7;
        } BIT;
    } TMDR2B;
    char           wk24[15];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char :6;
            unsigned char CST6:1;
            unsigned char CST7:1;
        } BIT;
    } TSTRB;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char :6;
            unsigned char SYNC6:1;
            unsigned char SYNC7:1;
        } BIT;
    } TSYRB;
    char           wk25[2];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char RWE:1;
            unsigned char :7;
        } BIT;
    } TRWERB;
};

#define MTU       (*(volatile struct st_mtu       *)0xE804120A)

#endif
