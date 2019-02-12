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

const int NUM_LEDS = 5;

/** Sets specified LED on (ledValue = 1) or off (ledValue = 0)
 *
 */
void setLED(int id, int ledValue);

/** Sets all LEDs to display the binary number. For example, 00000 turns off
 *  all LEDs and 11111 turns on all LEDs.
 */
void binaryLED(int num);

/** Sets all LEDs to display a decimal number in binary format. For example,
 *  3 turns off all LEDs except the last two (00011). The biggest number this
 *  method can display is 31 (11111).
 */
void counterLED(int num);

/** turns off all LEDs
 */
void allOffLED();

#endif
