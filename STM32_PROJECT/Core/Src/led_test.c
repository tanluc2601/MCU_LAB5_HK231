/*
 * led_test.c
 *
 *  Created on: Dec 11, 2023
 *      Author: tanta
 */

#include "led_test.h"

void led_blinky_fsm(void) {
	switch(ledState) {
	case LED_INIT:
		setTimer1(SYSTEM_DELAY);
		ledState = LED_BLINKING;
		break;
	case LED_BLINKING:
		if(timer1_flag == 1) {
			setTimer1(LED_PERIOD);
			HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
		}
		break;
	}
}
