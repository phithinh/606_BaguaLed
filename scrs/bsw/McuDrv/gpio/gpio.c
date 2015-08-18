/*
 * common.c
 *
 *  Created on: Mar 8, 2014
 *      Author: TV
 */
#include <general_define.h>
#define __GPIO_DIGITAL_DRV
#include "gpio.h"
void gpio_init_v(void) {
	UWORD t_index_uw;
	for (t_index_uw = NULL_UW ; t_index_uw < NUMBER_DIGITAL; t_index_uw++) {
		/* Periph clock enable */
		switch ((UL)gpio_conf_st[t_index_uw].type_def) {
		case (UL)GPIOA:
			__GPIOA_CLK_ENABLE();
			break;
		case (UL)GPIOB:
			__GPIOB_CLK_ENABLE();
			break;
		case (UL)GPIOC:
			__GPIOC_CLK_ENABLE();
			break;
		default:
			break;
		}
		HAL_GPIO_Init(gpio_conf_st[t_index_uw].type_def,
				(GPIO_InitTypeDef*)&gpio_conf_st[t_index_uw].init_st);

	}
}
BOOL dio_read(UBYTE t_pin_ub) {
	return (BOOL) HAL_GPIO_ReadPin(gpio_conf_st[t_pin_ub].type_def,
			gpio_conf_st[t_pin_ub].init_st.Pin);
}

void dio_set_v(UBYTE t_pin_ub, BOOL t_Sta_b) {
	HAL_GPIO_WritePin(gpio_conf_st[t_pin_ub].type_def,
			gpio_conf_st[t_pin_ub].init_st.Pin, (GPIO_PinState) t_Sta_b);
}
void dio_toggle_v(UBYTE t_pin_ub) {
	HAL_GPIO_TogglePin(gpio_conf_st[t_pin_ub].type_def,
			gpio_conf_st[t_pin_ub].init_st.Pin);
}
#undef __GPIO_DIGITAL_DRV
