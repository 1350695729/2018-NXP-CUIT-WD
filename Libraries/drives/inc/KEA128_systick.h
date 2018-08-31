/*********************************************************************************************************************
 * COPYRIGHT NOTICE
 * Copyright (c) 2017,��ɿƼ�
 * All rights reserved.
 * ��������QQȺ��179029047
 *
 * �����������ݰ�Ȩ������ɿƼ����У�δ��������������ҵ��;��
 * ��ӭ��λʹ�ò������������޸�����ʱ���뱣����ɿƼ��İ�Ȩ������
 *
 * @file       		KEA128_systick
 * @company	   		�ɶ���ɿƼ����޹�˾
 * @author     		��ɿƼ�(QQ3184284598)
 * @version    		v2.0
 * @Software 		IAR 7.7 or MDK 5.23
 * @Target core		S9KEA128AMLK
 * @Taobao   		https://seekfree.taobao.com/
 * @date       		2017-11-6
 ********************************************************************************************************************/


#ifndef _KEA128_systick_h
#define _KEA128_systick_h


#include "misc.h"
#include "common.h"
#include "SKEAZ1284.h"
#include "KEA128_port_cfg.h"

#define     SYSTICK_CLK_KHZ                (core_clk_khz*1000)
void    systick_delay(uint32 time);
void    systick_delay_ms(uint32 ms);
void    systick_timing(uint32 time);
uint32  systick_getval(void);

#define systick_timing_ms(ms)               systick_timing(ms * SYSTICK_CLK_KHZ);        //��ʱ us
#define systick_timing_us(us)               systick_timing(us * SYSTICK_CLK_KHZ/1000);   //��ʱ us
#define systick_timing_ns(ns)               systick_timing(ns * SYSTICK_CLK_KHZ/1000000);//��ʱ ns







#endif 
