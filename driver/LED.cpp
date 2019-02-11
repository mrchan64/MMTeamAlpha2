/***********************************************************************
*                                                                     *
*   This FILE sets up the LEDs in the Micromouse                      *
*                                                                     *
*   Author: DUY PHAM                                                  *
*   Date: 2/10/2019                                                   *
*   CPP File                                                          *                                                       *
*                                                                     *
***********************************************************************/

#include "mbed.h"
#include "LED.h"

void setLED(int id, boolean ledState) {
  switch (id) {
    case 1:
    LED1.write(ledState);
    break;
    case 2:
    LED2.write(ledState);
    break;
    case 3:
    LED3.write(ledState);
    break;
    case 4:
    LED4.write(ledState);
    break;
    case 5:
    LED5.write(ledState);
    break;
  }
}

void binaryLED(int num) {

}

void allOffLED() {
  LED2.write(0);
  LED3.write(0);
  LED4.write(0);
  LED5.write(0);
}
