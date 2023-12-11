/*
 * cmd_parser.h
 *
 *  Created on: Dec 11, 2023
 *      Author: tanta
 */

#ifndef INC_CMD_PARSER_H_
#define INC_CMD_PARSER_H_

#include "global.h"

void command_parser_fsm(void);

void updateBuffer(uint8_t updated);
void clearBuffer(void);

#endif /* INC_CMD_PARSER_H_ */
