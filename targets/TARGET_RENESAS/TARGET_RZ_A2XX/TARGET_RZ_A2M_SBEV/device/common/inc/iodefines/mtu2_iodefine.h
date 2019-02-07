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
#ifndef MTU2_IODEFINE_H
#define MTU2_IODEFINE_H

struct st_mtu2
{
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
    } NFCR2;
    char           wk0[365];
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
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char MD:4;
            unsigned char :4;
        } BIT;
    } TMDR1;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char IOA:4;
            unsigned char IOB:4;
        } BIT;
    } TIOR;
    char           wk1[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TGIEA:1;
            unsigned char TGIEB:1;
            unsigned char :2;
            unsigned char TCIEV:1;
            unsigned char TCIEU:1;
            unsigned char :1;
            unsigned char TTGE:1;
        } BIT;
    } TIER;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char :1;
            unsigned char :1;
            unsigned char :2;
            unsigned char :1;
            unsigned char :1;
            unsigned char :1;
            unsigned char TCFD:1;
        } BIT;
    } TSR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TCNT:16;
        } BIT;
    } TCNT;
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
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char TPSC2:3;
            unsigned char PCB:2;
            unsigned char :3;
        } BIT;
    } TCR2;
};

#define MTU2      (*(volatile struct st_mtu2      *)0xE8041292)

#endif
