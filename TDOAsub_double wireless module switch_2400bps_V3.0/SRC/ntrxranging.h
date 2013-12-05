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
#ifndef NTRXRANGING_H
#define NTRXRANGING_H

#include "ntrxtypes.h"

double getDistance(void);

void RangingCallback_Rx(MyByte8T *payload, MyByte8T len);

void RangingCallback_Ack(MyByte8T arqCount);

void RangingMode(MyAddrT dest);

void memcpy_p(unsigned char *destdata,unsigned char *scrdata,unsigned char length);

#endif /* NTRXRANGING_H */