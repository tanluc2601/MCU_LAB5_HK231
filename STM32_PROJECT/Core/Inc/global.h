/*
 * global.h
 *
 *  Created on: Dec 11, 2023
 *      Author: tanta
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include <stdio.h>
#include <string.h>
#include "main.h"
#include "software_timer.h"
#include "state.h"
#include "led_test.h"
#include "cmd_parser.h"
#include "sensor_reading.h"

#define LED_PERIOD				500
#define PARSER_TIMEOUT			3000
#define SENSOR_READ_PERIOD		500

#define MAX_BUFFER_SIZE			30

extern systemState sysState;
extern sensorReaderState readerState;
extern ledBlinkyState ledState;

extern uint8_t temp;
extern uint32_t ADC_value;
extern uint8_t buffer_flag;

extern uint8_t printData;
#endif /* INC_GLOBAL_H_ */
