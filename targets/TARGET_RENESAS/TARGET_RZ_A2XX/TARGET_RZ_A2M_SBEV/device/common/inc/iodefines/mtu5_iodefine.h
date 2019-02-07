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
#ifndef MTU5_IODEFINE_H
#define MTU5_IODEFINE_H

struct st_mtu5
{
    char           wk0[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char NFUEN:1;
            unsigned char NFVEN:1;
            unsigned char NFWEN:1;
            unsigned char :1;
            unsigned char NFCS:2;
            unsigned char :2;
        } BIT;
    } NFCR5;
    char           wk1[490];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TCNTU:16;
        } BIT;
    } TCNTU;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TGRU:16;
        } BIT;
    } TGRU;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TPSC:2;
            unsigned char :6;
        } BIT;
    } TCRU;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TPSC2:3;
            unsigned char CKEG:2;
            unsigned char :3;
        } BIT;
    } TCR2U;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char IOC:5;
            unsigned char :3;
        } BIT;
    } TIORU;
    char           wk2[9];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TCNTV:16;
        } BIT;
    } TCNTV;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TGRV:16;
        } BIT;
    } TGRV;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TPSC:2;
            unsigned char :6;
        } BIT;
    } TCRV;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TPSC2:3;
            unsigned char CKEG:2;
            unsigned char :3;
        } BIT;
    } TCR2V;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char IOC:5;
            unsigned char :3;
        } BIT;
    } TIORV;
    char           wk3[9];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TCNTW:16;
        } BIT;
    } TCNTW;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TGRW:16;
        } BIT;
    } TGRW;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TPSC:2;
            unsigned char :6;
        } BIT;
    } TCRW;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TPSC2:3;
            unsigned char CKEG:2;
            unsigned char :3;
        } BIT;
    } TCR2W;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char IOC:5;
            unsigned char :3;
        } BIT;
    } TIORW;
    char           wk4[9];
    char           wk5[1];
    char           wk6[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TGIE5W:1;
            unsigned char TGIE5V:1;
            unsigned char TGIE5U:1;
            unsigned char :5;
        } BIT;
    } TIER;
    char           wk7[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char CSTW5:1;
            unsigned char CSTV5:1;
            unsigned char CSTU5:1;
            unsigned char :5;
        } BIT;
    } TSTR;
    char           wk8[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char CMPCLR5W:1;
            unsigned char CMPCLR5V:1;
            unsigned char CMPCLR5U:1;
            unsigned char :5;
        } BIT;
    } TCNTCMPCLR;
};

#define MTU5      (*(volatile struct st_mtu5      *)0xE8041A94)

#endif
