/*
 * button_scan_pinAdapts.h
 *
 *  Created on: Apr 19, 2014
 *      Author: TV
 */

#ifndef BUTTON_SCAN_ADPT_H_
#define BUTTON_SCAN_ADPT_H_
#include <gpio.h>

#define button_read_b(t_button_index_ub) (t_button_index_ub == 0)?dio_read(PORT_BUTTON1):dio_read(PORT_BUTTON2)

#define button_scan_lowlayer_init_v()

#endif /* BUTTON_SCAN_ADPT_H_ */
