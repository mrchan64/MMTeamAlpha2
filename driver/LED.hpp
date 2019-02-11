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

//LED pins
DigitalOut LED1(LED_1_PIN);
DigitalOut LED2(LED_2_PIN);
DigitalOut LED3(LED_3_PIN);
DigitalOut LED4(LED_4_PIN);
DigitalOut LED5(LED_5_PIN);

/** Sets specified LED on (ledValue = 1) or off (ledValue = 0)
 *
 */
void setLED(int id, int ledValue);

/** Sets all LEDs to display the binary number. For example, 00000 turns off
 *  all LEDs and 11111 turns on all LEDs.
 */
void binaryLED(int num);

/** Sets all LEDs to display a decimal number in binary format. For example,
 *  3 turns off all LEDs except the last two (00011).
 */
void counterLED(int num);

/** turns off all LEDs
 */
void allOffLED();

#endif
