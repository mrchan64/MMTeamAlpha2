/***********************************************************************
*                                                                     *
*   This FILE allows for the control of the LEDs in the Micromouse.  *
*                                                                     *
*   Author: DUY PHAM                                                  *
*   Date: 2/10/2019                                                   *
*   CPP File                                                          *
*                                                                     *
***********************************************************************/

#include "mbed.h"
#include "LED.hpp"

DigitalOut led1(LED_1_PIN);
DigitalOut led2(LED_2_PIN);
DigitalOut led3(LED_3_PIN);
DigitalOut led4(LED_4_PIN);
DigitalOut led5(LED_5_PIN);

void setLED(int id, int ledValue) {
  switch (id) {
    case 1:
    led1 = ledValue;
    break;
    case 2:
    led2 = ledValue;
    break;
    case 3:
    led3 = ledValue;
    break;
    case 4:
    led4 = ledValue;
    break;
    case 5:
    led5 = ledValue;
    break;
  }
}

void binaryLED(int num) {
  setLED(1, num % 10);
  setLED(2, num / 10 % 10);
  setLED(3, num / 100 % 10);
  setLED(4, num / 1000 % 10);
  setLED(5, num / 10000 % 10);
}

void counterLED(int num) {
  setLED(1, (num >> 4) % 2);
  setLED(2, (num >> 3) % 2);
  setLED(3, (num >> 2) % 2);
  setLED(4, (num >> 1) % 2);
  setLED(5, num % 2);
}

void allOffLED() {
  setLED(1, 0);
  setLED(2, 0);
  setLED(3, 0);
  setLED(4, 0);
  setLED(5, 0);
}
