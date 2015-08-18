/*
 * PlatformDefine.h
 *
 *  Created on: Jul 8, 2015
 *      Author: Thinh
 */

#ifndef PLATFORMDEFINE_H_
#define PLATFORMDEFINE_H_

#include <stm32f1xx_hal.h>

typedef struct
{
	UWORD w_year;
	UBYTE hour;
	UBYTE min;
	UBYTE sec;
	// Calendar week month year
	UBYTE w_month;
	UBYTE w_date;
	UBYTE week;
}TIME_TDEF;

#define SIZE_TEXT  100
#define SIZE_ADDR  200
#define SIZE_PHONE 20
#define SIZE_HW_VERSION 	10
#define SIZE_FW_VERSION 	10
#define SIZE_PRODUCT_NAME 	20
#define SIZE_ID				4

typedef struct{
	UBYTE Address[SIZE_ADDR];
	UBYTE Phone[SIZE_PHONE];
	UBYTE HW_Version[SIZE_HW_VERSION];
	UBYTE FW_Version[SIZE_FW_VERSION];
	UBYTE ID_HW_Product[SIZE_ID];
	UBYTE Product_Name[SIZE_PRODUCT_NAME];
}MANUFACTUER_INFORMATION_TDEF;

#endif /* PLATFORMDEFINE_H_ */
