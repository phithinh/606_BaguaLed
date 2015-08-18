/*
 * button_scan_pri.h
 *
 *  Created on: Mar 16, 2014
 *      Author: TV
 */

#ifndef BUTTON_SCAN_PRI_H_
#define BUTTON_SCAN_PRI_H_
#include "button_scan_cfg.h"

typedef enum {
	BUTTON_IDLE_EV = 0,
	BUTTON_SHORT_EV,
	BUTTON_LONG_EV,
	BUTTON_RELEASE_EV
}BUTTON_EVENT;

void button_scan_init_v(void);
void button_scan_main_v(void);
void button_scan_state_init_v(void);
void button_scan_setButtonSta_v(UBYTE p_button_index_ub,UBYTE p_button_State_ub);
UBYTE button_scan_readButtonSta_ub(UBYTE p_button_index_ub);

#ifdef __BUTTON_SCAN_
#define EXTERN
#else
#define EXTERN extern
#endif

#ifdef __BUTTON_SCAN_
UWORD l_button_scan_counter_uw[NUMBER_BUTTON];
#endif
EXTERN UBYTE button_cfg_id_ub[NUMBER_BUTTON];

#endif /* BUTTON_SCAN_PRI_H_ */
