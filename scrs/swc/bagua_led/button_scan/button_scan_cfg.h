/*
 * button_scan_cfg.h
 *
 *  Created on: Jan 18, 2015
 *      Author: Phi Thinh
 */

#ifndef BUTTON_SCAN_CFG_H_
#define BUTTON_SCAN_CFG_H_

typedef enum{
		BUTTON_1 = 0,
		BUTTON_2,
		NUMBER_BUTTON
}BUTTON_ID_TDEF;

#define BUTTON_CYCLIC_TIME		10 //ms


#define BUTTON_SHORT_TIP		50		//ms
#define BUTTON_LONG_TIP			700		//ms
#define BUTTON_NEXT_LONG_TIP	100		//ms

#define BUTTON_PUL_UP

#endif /* BUTTON_SCAN_CFG_H_ */
