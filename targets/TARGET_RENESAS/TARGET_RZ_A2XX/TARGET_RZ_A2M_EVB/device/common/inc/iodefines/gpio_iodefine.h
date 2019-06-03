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
#ifndef GPIO_IODEFINE_H
#define GPIO_IODEFINE_H

struct st_gpio
{
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P00PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P01PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P02PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P03PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P04PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P05PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P06PFS;
    char           wk0[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P10PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P11PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P12PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P13PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P14PFS;
    char           wk1[3];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P20PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P21PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P22PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P23PFS;
    char           wk2[4];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P30PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P31PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P32PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P33PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P34PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P35PFS;
    char           wk3[2];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P40PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P41PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P42PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P43PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P44PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P45PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P46PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P47PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P50PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P51PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P52PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P53PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P54PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P55PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P56PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P57PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P60PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P61PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P62PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P63PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P64PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P65PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P66PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P67PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P70PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P71PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P72PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P73PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P74PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P75PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P76PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P77PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P80PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P81PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P82PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P83PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P84PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P85PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P86PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P87PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P90PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P91PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P92PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P93PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P94PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P95PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P96PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } P97PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PA0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PA1PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PA2PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PA3PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PA4PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PA5PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PA6PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PA7PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PB0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PB1PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PB2PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PB3PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PB4PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PB5PFS;
    char           wk4[2];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PC0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PC1PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PC2PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PC3PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PC4PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PC5PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PC6PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PC7PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PD0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PD1PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PD2PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PD3PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PD4PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PD5PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PD6PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PD7PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PE0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PE1PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PE2PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PE3PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PE4PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PE5PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PE6PFS;
    char           wk5[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PF0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PF1PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PF2PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PF3PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PF4PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PF5PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PF6PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PF7PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PG0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PG1PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PG2PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PG3PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PG4PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PG5PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PG6PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PG7PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PH0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PH1PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PH2PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PH3PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PH4PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PH5PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PH6PFS;
    char           wk6[1];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PJ0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PJ1PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PJ2PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PJ3PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PJ4PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PJ5PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PJ6PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PJ7PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PK0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PK1PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PK2PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PK3PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PK4PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PK5PFS;
    char           wk7[2];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PL0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PL1PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PL2PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PL3PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PL4PFS;
    char           wk8[3];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PM0PFS;
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PSEL:3;
            unsigned char :3;
            unsigned char ISEL:1;
            unsigned char :1;
        } BIT;
    } PM1PFS;
    char           wk9[85];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char :6;
            unsigned char PFSWE:1;
            unsigned char B0WI:1;
        } BIT;
    } PWPR;
    char           wk10[1312];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char PHYMODE0:1;
            unsigned char PHYMODE1:1;
            unsigned char :6;
        } BIT;
    } PFENET;
    char           wk11[223];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long POC0:1;
            unsigned long :1;
            unsigned long POC2:1;
            unsigned long POC3:1;
            unsigned long :4;
            unsigned long POCSEL0:1;
            unsigned long :1;
            unsigned long :22;
        } BIT;
    } PPOC;
    char           wk12[28];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SD0_CLK_DRV:2;
            unsigned long SD0_CMD_DRV:2;
            unsigned long SD0_DAT0_DRV:2;
            unsigned long SD0_DAT1_DRV:2;
            unsigned long SD0_DAT2_DRV:2;
            unsigned long SD0_DAT3_DRV:2;
            unsigned long SD0_CLK_TDSEL:2;
            unsigned long :2;
            unsigned long :3;
            unsigned long :3;
            unsigned long :3;
            unsigned long :3;
            unsigned long :3;
            unsigned long :1;
        } BIT;
    } PSDMMC0;
    char           wk13[12];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SD0_DAT4_DRV:2;
            unsigned long SD0_DAT5_DRV:2;
            unsigned long SD0_DAT6_DRV:2;
            unsigned long SD0_DAT7_DRV:2;
            unsigned long SD0_RSTN_DRV:2;
            unsigned long :6;
            unsigned long :3;
            unsigned long :3;
            unsigned long :3;
            unsigned long :3;
            unsigned long :3;
            unsigned long :1;
        } BIT;
    } PSDMMC1;
    char           wk14[12];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SD1_CLK_DRV:2;
            unsigned long SD1_CMD_DRV:2;
            unsigned long SD1_DAT0_DRV:2;
            unsigned long SD1_DAT1_DRV:2;
            unsigned long SD1_DAT2_DRV:2;
            unsigned long SD1_DAT3_DRV:2;
            unsigned long SD1_CLK_TDSEL:2;
            unsigned long :2;
            unsigned long :3;
            unsigned long :3;
            unsigned long :3;
            unsigned long :3;
            unsigned long :3;
            unsigned long :1;
        } BIT;
    } PSDMMC2;
    char           wk15[28];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long QSPI0_SPCLK_DRV:2;
            unsigned long QSPI0_IO0_DRV:2;
            unsigned long QSPI0_IO1_DRV:2;
            unsigned long QSPI0_IO2_DRV:2;
            unsigned long QSPI0_IO3_DRV:2;
            unsigned long QSPI0_SSL_DRV:2;
            unsigned long RPC_RESETN_DRV:2;
            unsigned long RPC_WPN_DRV:2;
            unsigned long QSPI1_SPCLK_DRV:2;
            unsigned long QSPI1_IO0_DRV:2;
            unsigned long QSPI1_IO1_DRV:2;
            unsigned long QSPI1_IO2_DRV:2;
            unsigned long QSPI1_IO3_DRV:2;
            unsigned long QSPI1_SSL_DRV:2;
            unsigned long :4;
        } BIT;
    } PSPIBSC;
    char           wk16[28];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long HOSEL:1;
            unsigned long :2;
            unsigned long :2;
            unsigned long :2;
            unsigned long :2;
            unsigned long :2;
            unsigned long :2;
            unsigned long :2;
            unsigned long :1;
            unsigned long :2;
            unsigned long :2;
            unsigned long :2;
            unsigned long :2;
            unsigned long :2;
            unsigned long :2;
            unsigned long :2;
            unsigned long :2;
        } BIT;
    } PHMOM0;
    char           wk17[28];
    char           wk18[4];
    char           wk19[28];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ET0_EXOUT_SEL:1;
            unsigned long ET1_EXOUT_SEL:1;
            unsigned long VBUS0_SEL:1;
            unsigned long VBUS1_SEL:1;
            unsigned long :28;
        } BIT;
    } PMODEPFS;
    char           wk20[12];
    union
    {
        unsigned char BYTE;
        struct
        {
            unsigned char CKIO_DRV1:1;
            unsigned char CKIO_DRV2:1;
            unsigned char :6;
        } BIT;
    } PCKIO;
};

#define GPIO      (*(volatile struct st_gpio      *)0xFCFFE200)

#endif
