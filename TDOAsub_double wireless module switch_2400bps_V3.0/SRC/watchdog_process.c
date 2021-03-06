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

#define DOG_TIME	200						//喂狗时间200*5ms = 1s

extern uint16 	dog_cnt;
extern uint32 	int_state;

/**************************************************************************************
** 函数名称 ：watchdog_process()
** 函数功能 ：定时喂狗
** 入口参数 ：无
** 出口参数 ：
**************************************************************************************/
void watchdog_process(void)
{
	if(dog_cnt > DOG_TIME){
		dog_cnt = 0;
		ENTER_CRITICAL();					//喂狗
		watchdog_weigou();
		EXIT_CRITICAL();
	}
}

