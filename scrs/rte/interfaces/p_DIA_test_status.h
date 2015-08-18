/*
 * p_DIA_test_status.h
 *
 *  Created on: Jul 8, 2015
 *      Author: Thinh
 */

#ifndef P_DIA_TEST_STATUS_H_
#define P_DIA_TEST_STATUS_H_

typedef enum{
	DIA_STATE_IDLE=0,
	DIA_STATE_STARTED    ,
	DIA_STATE_INCREASE   ,
	DIA_STATE_ACHIEVED   ,
	DIA_STATE_HOLD       ,
	DIA_STATE_DROPPED    ,
	DIA_STATE_PAUSED    ,
}DIA_STATE_MACHINE_TDEF;

typedef struct{
	DIA_STATE_MACHINE_TDEF testing_state_ub;
}P_DIA_TEST_STATUS_TDEF;


#endif /* P_DIA_TEST_STATUS_H_ */
