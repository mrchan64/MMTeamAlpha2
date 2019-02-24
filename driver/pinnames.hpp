/***********************************************************************
 *                                                                     *
 *   This FILE sets up the LEDs and Voltmeter used in the Micromouse   *
 *                                                                     *
 *   Author: EDWARD CHEN                                              *
 *   Date: 2/10/2019                                                   *
 *                                                                     *
 ***********************************************************************/

#include "mbed.h"

// MAKE SURE TO CHANGE THIS WHEN YOU CREATE A NEW FILE
#ifndef PINNAME_H
#define PINNAME_H

// MOTORS -------------------------------------------------
const PinName MOTOR_L1_PIN		= PA_2;
const PinName MOTOR_L2_PIN		= PA_3;
const PinName MOTOR_R1_PIN		= PB_6;
const PinName MOTOR_R2_PIN		= PB_7;

//LEDS ----------------------------------------------------
const PinName LED_1_PIN			 = PB_12;
const PinName LED_2_PIN			 = PB_13;
const PinName LED_3_PIN			 = PB_14;
const PinName LED_4_PIN			 = PB_15;
const PinName LED_5_PIN			 = PB_6;

//INFRARED ------------------------------------------------
//L
const PinName IR_LED_L 		 = PC_5;
const PinName IR_REC_L 		 = PC_3;
//FL
const PinName IR_LED_FL		 = PC_4;
const PinName IR_REC_FL 	 = PC_2;
//R
const PinName IR_LED_R 		 = PC_10;
const PinName IR_REC_R 		 = PC_0;
//FR
const PinName IR_LED_FR		 = PC_11;
const PinName IR_REC_FR 	 = PC_1;

//SERIAL COMM --------------------------------------------
const PinName Txpin 		 = PC_10;
const PinName Rxpin 		 = PC_11;

//I2C Sensors --------------------------------------------
const PinName SDA			 = PB_9;
const PinName SCK			 = PB_8;
#endif
