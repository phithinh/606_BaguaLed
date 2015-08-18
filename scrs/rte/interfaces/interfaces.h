/*
 * interface.h
 *
 *  Created on: Apr 19, 2014
 *      Author: TV
 */

#ifndef INTERFACES_H_
#define INTERFACES_H_

#include "p_FCT_configuration.h"
#include "p_DIA_test_result.h"
#include "p_DIA_test_status.h"
#include "p_FCT_report_request.h"
#include "p_FCT_test_control.h"
#include "p_RPT_connection_status.h"
#include "p_RPT_report_data.h"
#include "p_RPT_report_status.h"
#include "p_RPT_time.h"

#ifdef __INTERFACES_
#define EXTERN
#else
#define EXTERN	extern
#endif

//EXTERN NET_TX_DATA_REQUEST_TDEF net_tx_data_request_st;
//EXTERN NET_TX_CTR_REQUEST_TDEF net_tx_ctr_request_st;

//EXTERN INV_THRESHOLD_TDEF inv_threshold_st;
//EXTERN INV_SENSOR_FEEDBACK_TDEF inv_sensor_feedback_st;

#undef EXTERN
#endif /* INTERFACES_H_ */
