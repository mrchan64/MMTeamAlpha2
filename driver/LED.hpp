/***********************************************************************
 *                                                                     *
 *   This FILE sets up the LEDs in the Micromouse                      *
 *                                                                     *
 *   Author: DUY PHAM                                                  *
 *   Date: 2/10/2019                                                   *
 *                                                                     *
 ***********************************************************************/

#include "mbed.h"
#include "pinnames.hpp"

#ifndef LED_H
#define LED_H

DigitalOut LED1();
DigitalOut LED2(PB_13);
DigitalOut LED3(PB_14);
DigitalOut LED4(PB_15);
DigitalOut LED5(PC_6);

void binaryLED(int num);
void stateLED(int num);
void allOffLED();

#endif
