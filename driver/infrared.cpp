/***********************************************************************
 *                                                                     *
 *   This FILE sets up the Infrared componenets used in the Micromouse *
 *                                                                     *
 *   Author: MATTHEW CHAN                                              *
 *   Date: 2/10/2019                                                   *
 *   CPP File
 *                                                                     *
 ***********************************************************************/

#include "mbed.h"
#include "infrared.hpp"
#include "pinnames.hpp"

//Left Sensors, Sensor 1.
DigitalOut IR_LED_L(IR_LED_L_PIN);
AnalogIn IR_REC_L(IR_REC_L_PIN);

//Front Left Sensors, Sensor 2.
DigitalOut IR_LED_FL(IR_LED_FL_PIN);
AnalogIn IR_REC_FL(IR_REC_FL_PIN);

//Right Sensors, Sensor 3.
DigitalOut IR_LED_R(IR_LED_R_PIN);
AnalogIn IR_REC_R(IR_REC_R_PIN );

//Front Right Sensors, Sensor 4.
DigitalOut IR_LED_FR(IR_LED_FR_PIN);
AnalogIn IR_REC_FR(IR_REC_FR_PIN );

void setIr( int sensor, int state ){

  switch(sensor){

    case 1:
    IR_LED_L = state;
    break;

    case 2:
    IR_LED_FL = state;
    break;

    case 3:
    IR_LED_FR = state;
    break;

    case 4:
    IR_LED_R = state;
    break;

  }
}

void allOn( int state ){

  IR_LED_L = state;
  IR_LED_FL = state;
  IR_LED_R = state;
  IR_LED_FR = state;
}

float getIRValues( int sensor ){

  switch(sensor){

    case 1:
    return IR_REC_L.read(); // fix later
    break;

    case 2:
    return IR_REC_FL;
    break;

    case 3:
    return IR_REC_FR;
    break;

    case 4:
    return IR_REC_R;
    break;
  }

  return 0; //sensor does not exist
}
