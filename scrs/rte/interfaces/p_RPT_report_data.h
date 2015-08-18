/*
 * p_RPT_report_data.h
 *
 *  Created on: Jul 8, 2015
 *      Author: Thinh
 */

#ifndef P_RPT_REPORT_DATA_H_
#define P_RPT_REPORT_DATA_H_

typedef struct{
	TIME_TDEF started_st;
	TIME_TDEF dropped_st;
	BOOL kind_of_test_b;// FALSE: Real load
						// TRUE: Adjusted load
	UWORD load_value_uw; //Norming: 2^12
	ULONG tested_charger_id_ul;
	MANUFACTUER_INFORMATION_TDEF charger_info_st;
	UBYTE *data_pub;
	UWORD started_data_idx_uw;
	UWORD data_lenght_uw;
}P_RPT_REPORT_DATA_TDEF;

#endif /* P_RPT_REPORT_DATA_H_ */
