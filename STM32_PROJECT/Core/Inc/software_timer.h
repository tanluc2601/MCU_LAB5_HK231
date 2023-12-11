/*
 * software_timer.h
 *
 *  Created on: Dec 11, 2023
 *      Author: tanta
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define SYSTEM_DELAY 	10 // 10ms

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);

void timerRun(void);

#endif /* INC_SOFTWARE_TIMER_H_ */
