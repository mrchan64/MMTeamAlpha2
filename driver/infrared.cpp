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

//Left Sensors, Sensor 1.
DigitalOut IR_LED_L(PC_5);
AnalogIn IR_REC_L(PC_3);

//Front Left Sensors, Sensor 2.
DigitalOut IR_LED_FL(PC_4);
AnalogIn IR_REC_FL(PC_2);

//Right Sensors, Sensor 3.
DigitalOut IR_LED_R(PA_10);
AnalogIn IR_REC_R(PC_0);

//Front Right Sensors, Sensor 4.
DigitalOut IR_LED_FR(PA_11);
AnalogIn IR_REC_FR(PC_1);

void setIr( int sensor, int state ){

  switch(sensor){

    case 1:
    IR_LED_L = state;
    break;

    case 2:
    IR_LED_FL = state;
    break;

    case 3:
    IR_LED_R = state;
    break;

    case 4:
    IR_LED_FR = state;
    break;

  }
}

void allOn( int state ){

  IR_LED_L = state;
  IR_LED_FL = state;
  IR_LED_R = state;
  IR_LED_FR = state;
}

double getIRValues( int sensor ){

  switch(sensor){

    case 1:
    return IR_REC_L;
    break;

    case 2:
    return IR_REC_FL;
    break;

    case 3:
    return IR_REC_R;
    break;

    case 4:
    return IR_REC_FR;
    break;
  }

  return 0; //sensor does not exist
}
