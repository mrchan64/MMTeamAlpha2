/***********************************************************************
*                                                                     *
*   This FILE sets up the LEDs in the Micromouse                      *
*                                                                     *
*   Author: DUY PHAM                                                  *
*   Date: 2/10/2019                                                   *
*   CPP File                                                          *
*                                                                     *
***********************************************************************/

// #include <string>
#include "mbed.h"
#include "LED.hpp"

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
  // std::string numString = std::to_string(num);
  // led1 = numString.at(0);
  // led2 = numString.at(1);
  // led3 = numString.at(2);
  // led4 = numString.at(3);
  // led5 = numString.at(4);
}

void counterLED(int num) {

}

void allOffLED() {
  led1 = 0;
  led2 = 0;
  led3 = 0;
  led4 = 0;
  led5 = 0;
}
