/*
 * gpio_common.h
 *
 *  Created on: Mar 8, 2014
 *      Author: TV
 */

#ifndef DIO_H_
#define DIO_H_

#include "gpio_hardware_config.h"

void gpio_init_v(void);
BOOL dio_read(UBYTE t_pin_ub);
void dio_set_v(UBYTE t_pin_ub, BOOL t_Sta_b);
void dio_toggle_v(UBYTE t_pin_ub);
#endif /* DIO_H_ */
