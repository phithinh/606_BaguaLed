/*
 * P_FCT_configuration.h
 *
 *  Created on: Jul 8, 2015
 *      Author: Thinh
 */

#ifndef P_FCT_CONFIGURATION_H_
#define P_FCT_CONFIGURATION_H_

typedef struct{
	BOOL kind_of_test_b;// FALSE: Real load
						// TRUE: Adjusted load
	UBYTE selected_port_ub;
	UWORD load_value_uw; //Norming: 2^12
	ULONG current_tested_charger_id_ul;
	MANUFACTUER_INFORMATION_TDEF current_charger_info_st;
}P_FCT_CONFIGURATION_TDEF;

#endif /* P_FCT_CONFIGURATION_H_ */
