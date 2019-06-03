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
#ifndef ECCRAM0_IODEFINE_H
#define ECCRAM0_IODEFINE_H

struct st_eccram0
{
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :1;
            unsigned long ECER1F:1;
            unsigned long ECER2F:1;
            unsigned long EC1EDIC:1;
            unsigned long EC2EDIC:1;
            unsigned long EC1ECP:1;
            unsigned long ECERVF:1;
            unsigned long :2;
            unsigned long ECER1C:1;
            unsigned long ECER2C:1;
            unsigned long ECOVFF:1;
            unsigned long :2;
            unsigned long EMCA:2;
            unsigned long ECSEDF0:1;
            unsigned long ECDEDF0:1;
            unsigned long ECSEDF1:1;
            unsigned long ECDEDF1:1;
            unsigned long ECSEDF2:1;
            unsigned long ECDEDF2:1;
            unsigned long ECSEDF3:1;
            unsigned long ECDEDF3:1;
            unsigned long ECSEDF4:1;
            unsigned long ECDEDF4:1;
            unsigned long ECSEDF5:1;
            unsigned long ECDEDF5:1;
            unsigned long ECSEDF6:1;
            unsigned long ECDEDF6:1;
            unsigned long ECSEDF7:1;
            unsigned long ECDEDF7:1;
        } BIT;
    } KRAMCTL_0;
    char           wk0[12];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD0_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD1_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD2_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD3_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD4_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD5_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD6_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD7_0;
    char           wk1[16];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :1;
            unsigned long ECER1F:1;
            unsigned long ECER2F:1;
            unsigned long EC1EDIC:1;
            unsigned long EC2EDIC:1;
            unsigned long EC1ECP:1;
            unsigned long ECERVF:1;
            unsigned long :2;
            unsigned long ECER1C:1;
            unsigned long ECER2C:1;
            unsigned long ECOVFF:1;
            unsigned long :2;
            unsigned long EMCA:2;
            unsigned long ECSEDF0:1;
            unsigned long ECDEDF0:1;
            unsigned long ECSEDF1:1;
            unsigned long ECDEDF1:1;
            unsigned long ECSEDF2:1;
            unsigned long ECDEDF2:1;
            unsigned long ECSEDF3:1;
            unsigned long ECDEDF3:1;
            unsigned long ECSEDF4:1;
            unsigned long ECDEDF4:1;
            unsigned long ECSEDF5:1;
            unsigned long ECDEDF5:1;
            unsigned long ECSEDF6:1;
            unsigned long ECDEDF6:1;
            unsigned long ECSEDF7:1;
            unsigned long ECDEDF7:1;
        } BIT;
    } KRAMCTL_1;
    char           wk2[12];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD0_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD1_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD2_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD3_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD4_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD5_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD6_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD7_1;
    char           wk3[16];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :1;
            unsigned long ECER1F:1;
            unsigned long ECER2F:1;
            unsigned long EC1EDIC:1;
            unsigned long EC2EDIC:1;
            unsigned long EC1ECP:1;
            unsigned long ECERVF:1;
            unsigned long :2;
            unsigned long ECER1C:1;
            unsigned long ECER2C:1;
            unsigned long ECOVFF:1;
            unsigned long :2;
            unsigned long EMCA:2;
            unsigned long ECSEDF0:1;
            unsigned long ECDEDF0:1;
            unsigned long ECSEDF1:1;
            unsigned long ECDEDF1:1;
            unsigned long ECSEDF2:1;
            unsigned long ECDEDF2:1;
            unsigned long ECSEDF3:1;
            unsigned long ECDEDF3:1;
            unsigned long ECSEDF4:1;
            unsigned long ECDEDF4:1;
            unsigned long ECSEDF5:1;
            unsigned long ECDEDF5:1;
            unsigned long ECSEDF6:1;
            unsigned long ECDEDF6:1;
            unsigned long ECSEDF7:1;
            unsigned long ECDEDF7:1;
        } BIT;
    } KRAMCTL_2;
    char           wk4[12];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD0_2;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD1_2;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD2_2;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD3_2;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD4_2;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD5_2;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD6_2;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD7_2;
    char           wk5[16];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :1;
            unsigned long ECER1F:1;
            unsigned long ECER2F:1;
            unsigned long EC1EDIC:1;
            unsigned long EC2EDIC:1;
            unsigned long EC1ECP:1;
            unsigned long ECERVF:1;
            unsigned long :2;
            unsigned long ECER1C:1;
            unsigned long ECER2C:1;
            unsigned long ECOVFF:1;
            unsigned long :2;
            unsigned long EMCA:2;
            unsigned long ECSEDF0:1;
            unsigned long ECDEDF0:1;
            unsigned long ECSEDF1:1;
            unsigned long ECDEDF1:1;
            unsigned long ECSEDF2:1;
            unsigned long ECDEDF2:1;
            unsigned long ECSEDF3:1;
            unsigned long ECDEDF3:1;
            unsigned long ECSEDF4:1;
            unsigned long ECDEDF4:1;
            unsigned long ECSEDF5:1;
            unsigned long ECDEDF5:1;
            unsigned long ECSEDF6:1;
            unsigned long ECDEDF6:1;
            unsigned long ECSEDF7:1;
            unsigned long ECDEDF7:1;
        } BIT;
    } KRAMCTL_3;
    char           wk6[12];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD0_3;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD1_3;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD2_3;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD3_3;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD4_3;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD5_3;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD6_3;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ECEAD0:32;
        } BIT;
    } KRAMEAD7_3;
};

#define ECCRAM0   (*(volatile struct st_eccram0   *)0xE820D000)

#endif
