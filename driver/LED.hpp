/***********************************************************************
 *                                                                     *
 *   This FILE sets up the LEDs in the Micromouse                      *
 *                                                                     *
 *   Author: DUY PHAM                                                  *
 *   Date: 2/10/2019                                                   *
 *                                                                     *
 ***********************************************************************/

#include "mbed.h"
#include "pinnames.h"

#ifndef LED_H
#define LED_H

DigitalOut LED1(LED_1_PIN);
DigitalOut LED2(LED_2_PIN);
DigitalOut LED3(LED_3_PIN);
DigitalOut LED4(LED_4_PIN);
DigitalOut LED5(LED_5_PIN);

void binaryLED(int num);
void stateLED(int num);
void allOffLED();

#endif
