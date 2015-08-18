/*
 * FCT_test_control.h
 *
 *  Created on: Jul 8, 2015
 *      Author: Thinh
 */

#ifndef P_FCT_TEST_CONTROL_H_
#define P_FCT_TEST_CONTROL_H_

typedef enum{
	FCT_TEST_CONTROL_START = 0,
	FCT_TEST_CONTROL_STOP,
	FCT_TEST_CONTROL_PAUSE,
	FCT_TEST_CONTROL_NUM
}FCT_TEST_CONTROL_LIST;

typedef struct{
	BOOL Updated_b;
	BOOL Value_b;
	BOOL Valid_b;
}FCT_TEST_CONTROL_SIGNAL_TDEF;

typedef struct{
	FCT_TEST_CONTROL_SIGNAL_TDEF request_st[FCT_TEST_CONTROL_NUM];
}P_FCT_TEST_CONTROL_TDEF;


#endif /* P_FCT_TEST_CONTROL_H_ */
