/***********************************************************************
*                                                                     *
*   This FILE sets up the LEDs in the Micromouse                      *
*                                                                     *
*   Author: DUY PHAM                                                  *
*   Date: 2/10/2019                                                   *
*   CPP File                                                          *                                                       *
*                                                                     *
***********************************************************************/

#include <string>

#include "mbed.h"
#include "LED.h"

void setLED(int id, int ledValue) {
  switch (id) {
    case 1:
    LED1.write(ledValue);
    break;
    case 2:
    LED2.write(ledValue);
    break;
    case 3:
    LED3.write(ledValue);
    break;
    case 4:
    LED4.write(ledValue);
    break;
    case 5:
    LED5.write(ledValue);
    break;
  }
}

void binaryLED(int num) {
  string numString = std::to_string(num);
  LED1.write(numString.at(0));
  LED2.write(numString.at(1));
  LED3.write(numString.at(2));
  LED4.write(numString.at(3));
  LED5.write(numString.at(4));
}

void counterLED(int num) {

}

void allOffLED() {
  LED1.write(0);
  LED2.write(0);
  LED3.write(0);
  LED4.write(0);
  LED5.write(0);
}
