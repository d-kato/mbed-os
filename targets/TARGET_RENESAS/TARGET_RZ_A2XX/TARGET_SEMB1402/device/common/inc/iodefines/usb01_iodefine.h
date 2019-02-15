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
#ifndef USB01_IODEFINE_H
#define USB01_IODEFINE_H

struct st_usb01
{
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short USBE:1;
            unsigned short :3;
            unsigned short DPRPU:1;
            unsigned short DRPD:1;
            unsigned short DCFM:1;
            unsigned short HSE:1;
            unsigned short CNEN:1;
            unsigned short :7;
        } BIT;
    } SYSCFG0;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short BWAIT:6;
            unsigned short :2;
            unsigned short :6;
            unsigned short :2;
        } BIT;
    } SYSCFG1;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short LNST:2;
            unsigned short :1;
            unsigned short :11;
            unsigned short :2;
        } BIT;
    } SYSSTS0;
    char           wk0[2];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short RHST:3;
            unsigned short :5;
            unsigned short WKUP:1;
            unsigned short :1;
            unsigned short :1;
            unsigned short :5;
        } BIT;
    } DVSTCTR0;
    char           wk1[2];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short UTST:4;
            unsigned short :12;
        } BIT;
    } TESTMODE;
    char           wk2[6];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned short L;
            unsigned short H;
        } WORD;
        struct
        {
            unsigned char LL;
            unsigned char LH;
            unsigned char HL;
            unsigned char HH;
        } BYTE;
        struct
        {
            unsigned long FIFOPORT:32;
        } BIT;
    } CFIFO;
    char           wk3[8];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short CURPIPE:4;
            unsigned short :1;
            unsigned short ISEL:1;
            unsigned short :2;
            unsigned short BIGEND:1;
            unsigned short :1;
            unsigned short MBW:2;
            unsigned short :2;
            unsigned short REW:1;
            unsigned short RCNT:1;
        } BIT;
    } CFIFOSEL;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short DTLN:12;
            unsigned short :1;
            unsigned short FRDY:1;
            unsigned short BCLR:1;
            unsigned short BVAL:1;
        } BIT;
    } CFIFOCTR;
    char           wk4[4];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short CURPIPE:4;
            unsigned short :4;
            unsigned short BIGEND:1;
            unsigned short :1;
            unsigned short MBW:2;
            unsigned short DREQE:1;
            unsigned short DCLRM:1;
            unsigned short REW:1;
            unsigned short RCNT:1;
        } BIT;
    } D0FIFOSEL;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short DTLN:12;
            unsigned short :1;
            unsigned short FRDY:1;
            unsigned short BCLR:1;
            unsigned short BVAL:1;
        } BIT;
    } D0FIFOCTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short CURPIPE:4;
            unsigned short :4;
            unsigned short BIGEND:1;
            unsigned short :1;
            unsigned short MBW:2;
            unsigned short DREQE:1;
            unsigned short DCLRM:1;
            unsigned short REW:1;
            unsigned short RCNT:1;
        } BIT;
    } D1FIFOSEL;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short DTLN:12;
            unsigned short :1;
            unsigned short FRDY:1;
            unsigned short BCLR:1;
            unsigned short BVAL:1;
        } BIT;
    } D1FIFOCTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short BRDYE:1;
            unsigned short NRDYE:1;
            unsigned short BEMPE:1;
            unsigned short CTRE:1;
            unsigned short DVSE:1;
            unsigned short SOFE:1;
            unsigned short RSME:1;
            unsigned short VBSE:1;
        } BIT;
    } INTENB0;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short dummy1 :1;
            unsigned short dummy2 :15;
        } BIT;
    } INTENB1;
    char           wk5[2];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PIPEBRDYE:16;
        } BIT;
    } BRDYENB;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PIPENRDYE:16;
        } BIT;
    } NRDYENB;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PIPEBEMPE:16;
        } BIT;
    } BEMPENB;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :2;
            unsigned short SOFM:2;
            unsigned short :1;
            unsigned short :1;
            unsigned short BRDYM:1;
            unsigned short :9;
        } BIT;
    } SOFCFG;
    char           wk6[2];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short CTSQ:3;
            unsigned short VALID:1;
            unsigned short DVSQ:3;
            unsigned short VBSTS:1;
            unsigned short BRDY:1;
            unsigned short NRDY:1;
            unsigned short BEMP:1;
            unsigned short CTRT:1;
            unsigned short DVST:1;
            unsigned short SOFR:1;
            unsigned short RESM:1;
            unsigned short VBINT:1;
        } BIT;
    } INTSTS0;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :1;
            unsigned short :15;
        } BIT;
    } INTSTS1;
    char           wk7[2];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PIPEBRDY:16;
        } BIT;
    } BRDYSTS;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PIPENRDY:16;
        } BIT;
    } NRDYSTS;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PIPEBEMP:16;
        } BIT;
    } BEMPSTS;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short FRNM:11;
            unsigned short :3;
            unsigned short CRCE:1;
            unsigned short OVRN:1;
        } BIT;
    } FRMNUM;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short UFRNM:3;
            unsigned short :13;
        } BIT;
    } UFRMNUM;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short USBADDR:7;
            unsigned short :9;
        } BIT;
    } USBADDR;
    char           wk8[2];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short bmRequestType:8;
            unsigned short bRequest:8;
        } BIT;
    } USBREQ;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short wValue:16;
        } BIT;
    } USBVAL;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short wIndex:16;
        } BIT;
    } USBINDX;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short wLength:16;
        } BIT;
    } USBLENG;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :7;
            unsigned short SHTNAK:1;
            unsigned short CNTMD:1;
            unsigned short :7;
        } BIT;
    } DCPCFG;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short MXPS:7;
            unsigned short :9;
        } BIT;
    } DCPMAXP;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short CCPL:1;
            unsigned short :2;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short :6;
            unsigned short BSTS:1;
        } BIT;
    } DCPCTR;
    char           wk9[2];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PIPESEL:4;
            unsigned short :12;
        } BIT;
    } PIPESEL;
    char           wk10[2];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short EPNUM:4;
            unsigned short DIR:1;
            unsigned short :2;
            unsigned short SHTNAK:1;
            unsigned short CNTMD:1;
            unsigned short DBLB:1;
            unsigned short BFRE:1;
            unsigned short :3;
            unsigned short TYPE:2;
        } BIT;
    } PIPECFG;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short BUFNMB:8;
            unsigned short :2;
            unsigned short BUFSIZE:5;
            unsigned short :1;
        } BIT;
    } PIPEBUF;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short MXPS:11;
            unsigned short :5;
        } BIT;
    } PIPEMAXP;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short IITV:3;
            unsigned short :9;
            unsigned short IFIS:1;
            unsigned short :3;
        } BIT;
    } PIPEPERI;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPE1CTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPE2CTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPE3CTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPE4CTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPE5CTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short :5;
            unsigned short BSTS:1;
        } BIT;
    } PIPE6CTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short :5;
            unsigned short BSTS:1;
        } BIT;
    } PIPE7CTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short :5;
            unsigned short BSTS:1;
        } BIT;
    } PIPE8CTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPE9CTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPEACTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPEBCTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPECCTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPEDCTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPEECTR;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short PID:2;
            unsigned short :3;
            unsigned short PBUSY:1;
            unsigned short SQMON:1;
            unsigned short SQSET:1;
            unsigned short SQCLR:1;
            unsigned short ACLRM:1;
            unsigned short ATREPM:1;
            unsigned short :3;
            unsigned short INBUFM:1;
            unsigned short BSTS:1;
        } BIT;
    } PIPEFCTR;
    char           wk11[2];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPE1TRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPE1TRN;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPE2TRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPE2TRN;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPE3TRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPE3TRN;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPE4TRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPE4TRN;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPE5TRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPE5TRN;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPEBTRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPEBTRN;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPECTRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPECTRN;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPEDTRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPEDTRN;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPEETRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPEETRN;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPEFTRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPEFTRN;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPE9TRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPE9TRN;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short TRCLR:1;
            unsigned short TRENB:1;
            unsigned short :6;
        } BIT;
    } PIPEATRE;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short TRNCNT:16;
        } BIT;
    } PIPEATRN;
    char           wk12[16];
    unsigned short DEVADD0;
    unsigned short DEVADD1;
    unsigned short DEVADD2;
    unsigned short DEVADD3;
    unsigned short DEVADD4;
    unsigned short DEVADD5;
    unsigned short DEVADD6;
    unsigned short DEVADD7;
    unsigned short DEVADD8;
    unsigned short DEVADD9;
    unsigned short DEVADDA;
    char           wk13[26];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :7;
            unsigned short HWUPM:1;
            unsigned short :8;
        } BIT;
    } LPCTRL;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :14;
            unsigned short SUSPM:1;
            unsigned short :1;
        } BIT;
    } LPSTS;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short :2;
            unsigned short :1;
            unsigned short :2;
            unsigned short :1;
            unsigned short SusMon:1;
            unsigned short :1;
        } BIT;
    } PHYFUNCTR;
    char           wk14[4];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :9;
            unsigned short DpPuDwn:1;
            unsigned short DmPuDwn:1;
            unsigned short :5;
        } BIT;
    } PHYOTGCTR;
    char           wk15[52];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short IDPSRCE:1;
            unsigned short IDMSINKE:1;
            unsigned short VDPSRCE:1;
            unsigned short IDPSINKE:1;
            unsigned short VDMSRCE:1;
            unsigned short :3;
            unsigned short CHGDETSTS:1;
            unsigned short PDDETSTS:1;
            unsigned short :6;
        } BIT;
    } BCCTRL;
    char           wk16[2];
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short L1RESPEN:1;
            unsigned short L1RESPMD:2;
            unsigned short L1NEGOMD:1;
            unsigned short DVSQ:4;
            unsigned short HIRDTHR:4;
            unsigned short :2;
            unsigned short L1EXTMD:1;
            unsigned short :1;
        } BIT;
    } PL1CTRL1;
    union
    {
        unsigned short WORD;
        struct
        {
            unsigned short :8;
            unsigned short HIRDMON:4;
            unsigned short RWEMON:1;
            unsigned short :3;
        } BIT;
    } PL1CTRL2;
    char           wk17[2];
    char           wk18[2];
    char           wk19[20];
    char           wk20[4];
    char           wk21[4];
    char           wk22[4];
    char           wk23[660];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SA_WD:32;
        } BIT;
    } N0SA_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long DA:32;
        } BIT;
    } N0DA_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TB:32;
        } BIT;
    } N0TB_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SA_WD:32;
        } BIT;
    } N1SA_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long DA:32;
        } BIT;
    } N1DA_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TB:32;
        } BIT;
    } N1TB_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CRSA:32;
        } BIT;
    } CRSA_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CRDA:32;
        } BIT;
    } CRDA_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CRTB:32;
        } BIT;
    } CRTB_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long EN:1;
            unsigned long RQST:1;
            unsigned long TACT:1;
            unsigned long SUS:1;
            unsigned long ER:1;
            unsigned long END:1;
            unsigned long TC:1;
            unsigned long SR:1;
            unsigned long DL:1;
            unsigned long DW:1;
            unsigned long DER:1;
            unsigned long MODE:1;
            unsigned long :4;
            unsigned long INTM:1;
            unsigned long DMARQM:1;
            unsigned long SWPRQ:1;
            unsigned long :5;
            unsigned long DNUM:8;
        } BIT;
    } CHSTAT_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SETEN:1;
            unsigned long CLREN:1;
            unsigned long STG:1;
            unsigned long SWRST:1;
            unsigned long CLRRQ:1;
            unsigned long CLREND:1;
            unsigned long CLRTC:1;
            unsigned long CLRDER:1;
            unsigned long SETSUS:1;
            unsigned long CLRSUS:1;
            unsigned long :2;
            unsigned long SETREN:1;
            unsigned long :1;
            unsigned long SETSSWPRQ:1;
            unsigned long :1;
            unsigned long SETINTM:1;
            unsigned long CLRINTM:1;
            unsigned long SETDMARQM:1;
            unsigned long CLRDMARQM:1;
            unsigned long :12;
        } BIT;
    } CHCTRL_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SEL:1;
            unsigned long :2;
            unsigned long REQD:1;
            unsigned long LOEN:1;
            unsigned long HIEN:1;
            unsigned long LVL:1;
            unsigned long :1;
            unsigned long AM:3;
            unsigned long DRRP:1;
            unsigned long SDS:4;
            unsigned long DDS:4;
            unsigned long SAD:1;
            unsigned long DAD:1;
            unsigned long TM:1;
            unsigned long WONLY:1;
            unsigned long DEM:1;
            unsigned long TCM:1;
            unsigned long DIM:1;
            unsigned long SBE:1;
            unsigned long RSEL:1;
            unsigned long RSW:1;
            unsigned long REN:1;
            unsigned long DMS:1;
        } BIT;
    } CHCFG_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ITVL:16;
            unsigned long :16;
        } BIT;
    } CHITVL_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SPR:4;
            unsigned long :4;
            unsigned long DPR:4;
            unsigned long :20;
        } BIT;
    } CHEXT_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long NXLA:32;
        } BIT;
    } NXLA_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CRLA:32;
        } BIT;
    } CRLA_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SA_WD:32;
        } BIT;
    } N0SA_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long DA:32;
        } BIT;
    } N0DA_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TB:32;
        } BIT;
    } N0TB_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SA_WD:32;
        } BIT;
    } N1SA_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long DA:32;
        } BIT;
    } N1DA_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TB:32;
        } BIT;
    } N1TB_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CRSA:32;
        } BIT;
    } CRSA_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CRDA:32;
        } BIT;
    } CRDA_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CRTB:32;
        } BIT;
    } CRTB_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long EN:1;
            unsigned long RQST:1;
            unsigned long TACT:1;
            unsigned long SUS:1;
            unsigned long ER:1;
            unsigned long END:1;
            unsigned long TC:1;
            unsigned long SR:1;
            unsigned long DL:1;
            unsigned long DW:1;
            unsigned long DER:1;
            unsigned long MODE:1;
            unsigned long :4;
            unsigned long INTM:1;
            unsigned long DMARQM:1;
            unsigned long SWPRQ:1;
            unsigned long :5;
            unsigned long DNUM:8;
        } BIT;
    } CHSTAT_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SETEN:1;
            unsigned long CLREN:1;
            unsigned long STG:1;
            unsigned long SWRST:1;
            unsigned long CLRRQ:1;
            unsigned long CLREND:1;
            unsigned long CLRTC:1;
            unsigned long CLRDER:1;
            unsigned long SETSUS:1;
            unsigned long CLRSUS:1;
            unsigned long :2;
            unsigned long SETREN:1;
            unsigned long :1;
            unsigned long SETSSWPRQ:1;
            unsigned long :1;
            unsigned long SETINTM:1;
            unsigned long CLRINTM:1;
            unsigned long SETDMARQM:1;
            unsigned long CLRDMARQM:1;
            unsigned long :12;
        } BIT;
    } CHCTRL_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SEL:1;
            unsigned long :2;
            unsigned long REQD:1;
            unsigned long LOEN:1;
            unsigned long HIEN:1;
            unsigned long LVL:1;
            unsigned long :1;
            unsigned long AM:3;
            unsigned long DRRP:1;
            unsigned long SDS:4;
            unsigned long DDS:4;
            unsigned long SAD:1;
            unsigned long DAD:1;
            unsigned long TM:1;
            unsigned long WONLY:1;
            unsigned long DEM:1;
            unsigned long TCM:1;
            unsigned long DIM:1;
            unsigned long SBE:1;
            unsigned long RSEL:1;
            unsigned long RSW:1;
            unsigned long REN:1;
            unsigned long DMS:1;
        } BIT;
    } CHCFG_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ITVL:16;
            unsigned long :16;
        } BIT;
    } CHITVL_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SPR:4;
            unsigned long :4;
            unsigned long DPR:4;
            unsigned long :20;
        } BIT;
    } CHEXT_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long NXLA:32;
        } BIT;
    } NXLA_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long CRLA:32;
        } BIT;
    } CRLA_1;
    char           wk24[384];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SCNT:32;
        } BIT;
    } SCNT_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SSKP:32;
        } BIT;
    } SSKP_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long DCNT:32;
        } BIT;
    } DCNT_0;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long DSKP:32;
        } BIT;
    } DSKP_0;
    char           wk25[16];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SCNT:32;
        } BIT;
    } SCNT_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SSKP:32;
        } BIT;
    } SSKP_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long DCNT:32;
        } BIT;
    } DCNT_1;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long DSKP:32;
        } BIT;
    } DSKP_1;
    char           wk26[208];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long PR:1;
            unsigned long LVINT:1;
            unsigned long :14;
            unsigned long LDPR:4;
            unsigned long :4;
            unsigned long LWPR:4;
            unsigned long :4;
        } BIT;
    } DCTRL;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long :8;
            unsigned long DITVL:8;
            unsigned long :16;
        } BIT;
    } DSCITVL;
    char           wk27[8];
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long EN0:1;
            unsigned long EN1:1;
            unsigned long :30;
        } BIT;
    } DST_EN;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long ER0:1;
            unsigned long ER1:1;
            unsigned long :30;
        } BIT;
    } DST_ER;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long END0:1;
            unsigned long END1:1;
            unsigned long :30;
        } BIT;
    } DST_END;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long TC0:1;
            unsigned long TC1:1;
            unsigned long :30;
        } BIT;
    } DST_TC;
    union
    {
        unsigned long LONG;
        struct
        {
            unsigned long SUS0:1;
            unsigned long SUS1:1;
            unsigned long :30;
        } BIT;
    } DST_SUS;
};

#define USB01     (*(volatile struct st_usb01     *)0xE8219000)
#define USB11     (*(volatile struct st_usb01     *)0xE821B000)

#endif
