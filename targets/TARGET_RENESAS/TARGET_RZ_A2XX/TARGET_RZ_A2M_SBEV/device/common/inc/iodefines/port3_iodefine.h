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
#ifndef PORT3_IODEFINE_H
#define PORT3_IODEFINE_H

struct st_port3
{
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PDR0:2;
            unsigned short PDR1:2;
            unsigned short PDR2:2;
            unsigned short PDR3:2;
            unsigned short PDR4:2;
            unsigned short PDR5:2;
            unsigned short :4;
        } BIT;
    } PDR;
    char           wk0[59];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PODR0:1;
            unsigned char PODR1:1;
            unsigned char PODR2:1;
            unsigned char PODR3:1;
            unsigned char PODR4:1;
            unsigned char PODR5:1;
            unsigned char :2;
        } BIT;
    } PODR;
    char           wk1[31];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PIDR0:1;
            unsigned char PIDR1:1;
            unsigned char PIDR2:1;
            unsigned char PIDR3:1;
            unsigned char PIDR4:1;
            unsigned char PIDR5:1;
            unsigned char :2;
        } BIT;
    } PIDR;
    char           wk2[31];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PMR0:1;
            unsigned char PMR1:1;
            unsigned char PMR2:1;
            unsigned char PMR3:1;
            unsigned char PMR4:1;
            unsigned char PMR5:1;
            unsigned char :2;
        } BIT;
    } PMR;
    char           wk3[194];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short DSCR0:2;
            unsigned short DSCR1:2;
            unsigned short DSCR2:2;
            unsigned short DSCR3:2;
            unsigned short DSCR4:2;
            unsigned short DSCR5:2;
            unsigned short :4;
        } BIT;
    } DSCR;
};

#define PORT3     (*(volatile struct st_port3     *)0xFCFFE006)

#endif
