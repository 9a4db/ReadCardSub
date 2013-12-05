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

#ifndef __SUB_H__
#define __SUB_H__


#define MAX_SUB_NUM				4			//����վ��

//��վ����
#define COMM_STATION	0x00		//��ͨ��վ
#define LOCAT_STATION	0x01		//��ȷ��λ��վ

typedef struct sub_info		//������վ
{
	uint8 id;					//ID
	uint8 father_id;			//�����Ĵ����վID
	uint8 type;					//����
} Sub;

void subinfo_init(void);
void getsubinfo(void);

#endif

