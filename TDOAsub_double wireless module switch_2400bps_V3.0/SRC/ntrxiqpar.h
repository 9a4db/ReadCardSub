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
#ifndef NTRXIQPAR_H
#define NTRXIQPAR_H

#include    "config.h"
#include    "ntrxtypes.h"

void NTRXSetAgcValues (MyByte8T bandwidth, MyByte8T symbolDur, MyByte8T symbolRate);
void NTRXSetTxIQMatrix (MyByte8T bandwidth, MyByte8T symbolDur);
void NTRXSetRxIQMatrix (MyByte8T bandwidth, MyByte8T symbolDur);
void NTRXSetCorrThreshold (MyByte8T bandwidth, MyByte8T symbolDur);

#endif