/*
 * state.h
 *
 *  Created on: Dec 11, 2023
 *      Author: tanta
 */

#ifndef INC_STATE_H_
#define INC_STATE_H_

typedef enum {
	START_MODE,
	PRINT_MODE,
	WAIT_MODE,
} systemState;

typedef enum {
	READER_INIT,
	READER_WAITING,
	READER_READING
} sensorReaderState;

typedef enum {
	LED_INIT,
	LED_BLINKING,
} ledBlinkyState;

#endif /* INC_STATE_H_ */
