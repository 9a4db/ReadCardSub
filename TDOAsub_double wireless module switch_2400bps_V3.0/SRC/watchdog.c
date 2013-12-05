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

extern uint32 	int_state;
uint8 dog_flag;
void watchdog_weigou(void)	// 进行喂狗操作 
{
	WDFEED = 0xAA;			    
	WDFEED = 0x55;		    
}

void watchdog_fuwei(void)		// 进行复位操作 
{
	WDFEED = 0x00;
	WDFEED = 0xff;
} 

void watchdog_init(void)
{
	WDTC = (Fpclk/2);				// 设置WDTC，喂狗重装值2秒

	WDMOD = 0x03;			   	 	// 设置并启动WDT
	ENTER_CRITICAL();
	watchdog_weigou();
	EXIT_CRITICAL();
	
} 