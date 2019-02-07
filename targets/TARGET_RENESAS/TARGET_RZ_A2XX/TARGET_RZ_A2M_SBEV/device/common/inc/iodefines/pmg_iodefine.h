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
#ifndef PMG_IODEFINE_H
#define PMG_IODEFINE_H

struct st_pmg
{
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char RRAMKP0:1;
            unsigned char RRAMKP1:1;
            unsigned char RRAMKP2:1;
            unsigned char RRAMKP3:1;
            unsigned char CKS:3;
            unsigned char :1;
        } BIT;
    } RRAMKP;
    char           wk0[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char :6;
            unsigned char RAMBOOT:1;
            unsigned char EBUSKEEPE:1;
        } BIT;
    } DSCTR;
    char           wk1[1];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short dstbcl0:1;
            unsigned short dstbcl1:1;
            unsigned short dstbcl2:1;
            unsigned short dstbcl3:1;
            unsigned short dstbcl4:1;
            unsigned short dstbcl5:1;
            unsigned short RTCAR0:1;
            unsigned short RTCAR1:1;
            unsigned short NMI:1;
            unsigned short dstbcl6:1;
            unsigned short dstbcl7:1;
            unsigned short dstbcl8:1;
            unsigned short dstbcl9:1;
            unsigned short dstbcl10:1;
            unsigned short dstbcl11:1;
            unsigned short :1;
        } BIT;
    } DSSSR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short dstbcl0E:1;
            unsigned short dstbcl1E:1;
            unsigned short dstbcl2E:1;
            unsigned short dstbcl3E:1;
            unsigned short dstbcl4E:1;
            unsigned short dstbcl5E:1;
            unsigned short :2;
            unsigned short NMIE:1;
            unsigned short dstbcl6E:1;
            unsigned short dstbcl7E:1;
            unsigned short dstbcl8E:1;
            unsigned short dstbcl9E:1;
            unsigned short dstbcl10E:1;
            unsigned short dstbcl11E:1;
            unsigned short :1;
        } BIT;
    } DSESR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short dstbcl0F:1;
            unsigned short dstbcl1F:1;
            unsigned short dstbcl2F:1;
            unsigned short dstbcl3F:1;
            unsigned short dstbcl4F:1;
            unsigned short dstbcl5F:1;
            unsigned short RTCAR0F:1;
            unsigned short RTCAR1F:1;
            unsigned short NMIF:1;
            unsigned short dstbcl6F:1;
            unsigned short dstbcl7F:1;
            unsigned short dstbcl8F:1;
            unsigned short dstbcl9F:1;
            unsigned short dstbcl10F:1;
            unsigned short dstbcl11F:1;
            unsigned short IOKEEP:1;
        } BIT;
    } DSFR;
    char           wk2[2];
    char           wk3[1];
    char           wk4[1];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short DSCNT:8;
            unsigned short :6;
            unsigned short :1;
            unsigned short :1;
        } BIT;
    } DSCNT;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char GAIN0:1;
            unsigned char GAIN1:1;
            unsigned char :6;
        } BIT;
    } XTALCTR;
    char           wk5[15];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char USBDSCE0:1;
            unsigned char USBDSCE1:1;
            unsigned char USBDSCE2:1;
            unsigned char USBDSCE3:1;
            unsigned char :4;
        } BIT;
    } USBDSSSR;
    char           wk6[3];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char USBDSF0:1;
            unsigned char USBDSF1:1;
            unsigned char USBDSF2:1;
            unsigned char USBDSF3:1;
            unsigned char :4;
        } BIT;
    } USBDSFR;
    char           wk7[11];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short ECCEN0:1;
            unsigned short ECCEN1:1;
            unsigned short ECCEN2:1;
            unsigned short :13;
        } BIT;
    } ECCRAM;
    char           wk8[2];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short EC7TERVE:1;
            unsigned short :15;
        } BIT;
    } ECCERRCTL;
    char           wk9[10];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short RTC0XT:1;
            unsigned short RTC1XT:1;
            unsigned short :14;
        } BIT;
    } RTCXTALSEL;
};

#define PMG       (*(volatile struct st_pmg       *)0xFCFFC000)

#endif
