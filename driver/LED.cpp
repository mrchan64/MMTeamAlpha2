/***********************************************************************
*                                                                     *
*   This FILE sets up the LEDs in the Micromouse                      *
*                                                                     *
*   Author: DUY PHAM                                                  *
*   Date: 2/10/2019                                                   *
*   CPP File                                                          *
*                                                                     *
***********************************************************************/

#include <iostream>
#include <sstream>
#include <string>
#include <bitset>
#include "mbed.h"
#include "LED.hpp"

using namespace std;

DigitalOut led1(LED_1_PIN);
DigitalOut led2(LED_2_PIN);
DigitalOut led3(LED_3_PIN);
DigitalOut led4(LED_4_PIN);
DigitalOut led5(LED_5_PIN);

void setLED(int id, int ledValue) {
  cout << "setting LED" << id << "to" << ledValue << endl;

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
  ostringstream stream;
  stream << num;
  string numString = stream.str();
  setLED(1, numString.at(0));
  setLED(2, numString.at(1));
  setLED(3, numString.at(2));
  setLED(4, numString.at(3));
  setLED(5, numString.at(4));
}

void counterLED(int num) {
  string binary = bitset<NUM_LEDS>(num).to_string();
  binaryLED(binary);
}

void allOffLED() {
  setLED(1, 0);
  setLED(2, 0);
  setLED(3, 0);
  setLED(4, 0);
  setLED(5, 0);
}
