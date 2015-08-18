
#include <general_define.h>
#include <gpio.h>
#include <button_scan.h>

#include "bagua.h"

void begua_init_v(void){
	button_scan_init_v();
}
BOOL togl_b;
void begua_main_v(void){
	button_scan_main_v();
	if(button_scan_readButtonSta_ub(BUTTON_1) == BUTTON_SHORT_EV){
		//do something
		togl_b = !togl_b;
		dio_set_v(MCU_C2, togl_b);
	}
}
