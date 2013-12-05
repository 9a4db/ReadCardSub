/****************************************Copyright (c)**************************************************
**                              
**                   
**                                
**
**--------------File Info-------------------------------------------------------------------------------
** File name:			
** Last modified Date:  2013-08-27
** Last Version:		1.0
** Descriptions:		
**
**------------------------------------------------------------------------------------------------------
** Created by:			Qi
** Created date:		2013-08-27
** Version:				1.0
** Descriptions:		
**
*******************************************************************************************************
*/
#include "includs.h" 

void IRQ_Timer1(void);
/**
 * timer1_init:
 *
 * 1ms��ʱ����ʼ��
 *
 * Returns: none.
*/
void timer1_init(void)
{
	T1TC   = 0;			
	T1PR   = 0;			
	T1MCR  = 0x03;		
	T1MR0  = Fpclk/1000;		
	T1TCR  = 0x00;						//��ֹ��ʱ

	VICVectCntl4 = 0x20 | 0x05;			
	VICVectAddr4 = (uint32)IRQ_Timer1;	
	T1IR = 0x01;
	VICIntEnable |= 1 << 0x05;
	
}
 