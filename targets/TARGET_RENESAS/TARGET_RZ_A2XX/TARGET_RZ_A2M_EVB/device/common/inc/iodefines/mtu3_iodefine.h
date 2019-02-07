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
#ifndef MTU3_IODEFINE_H
#define MTU3_IODEFINE_H

struct st_mtu3
{
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TPSC:3;
            unsigned char CKEG:2;
            unsigned char CCLR:3;
        } BIT;
    } TCR;
    char           wk0[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char MD:4;
            unsigned char BFA:1;
            unsigned char BFB:1;
            unsigned char :2;
        } BIT;
    } TMDR1;
    char           wk1[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char IOA:4;
            unsigned char IOB:4;
        } BIT;
    } TIORH;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char IOC:4;
            unsigned char IOD:4;
        } BIT;
    } TIORL;
    char           wk2[2];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TGIEA:1;
            unsigned char TGIEB:1;
            unsigned char TGIEC:1;
            unsigned char TGIED:1;
            unsigned char TCIEV:1;
            unsigned char :2;
            unsigned char TTGE:1;
        } BIT;
    } TIER;
    char           wk3[7];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TCNT:16;
        } BIT;
    } TCNT;
    char           wk4[6];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TGRA:16;
        } BIT;
    } TGRA;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TGRB:16;
        } BIT;
    } TGRB;
    char           wk5[8];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TGRC:16;
        } BIT;
    } TGRC;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TGRD:16;
        } BIT;
    } TGRD;
    char           wk6[4];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char :1;
            unsigned char :1;
            unsigned char :1;
            unsigned char :1;
            unsigned char :1;
            unsigned char :2;
            unsigned char TCFD:1;
        } BIT;
    } TSR;
    char           wk7[11];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TTSA:1;
            unsigned char TTSB:1;
            unsigned char :6;
        } BIT;
    } TBTM;
    char           wk8[19];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TPSC2:3;
            unsigned char :5;
        } BIT;
    } TCR2;
    char           wk9[37];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TGRE:16;
        } BIT;
    } TGRE;
    char           wk10[31];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char NFAEN:1;
            unsigned char NFBEN:1;
            unsigned char NFCEN:1;
            unsigned char NFDEN:1;
            unsigned char NFCS:2;
            unsigned char :2;
        } BIT;
    } NFCR3;
};

#define MTU3      (*(volatile struct st_mtu3      *)0xE8041200)

#endif
