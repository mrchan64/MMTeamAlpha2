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
const PinName ML1            = PA_2;
const PinName ML2            = PA_3;
const PinName MR1            = PB_6;
const PinName MR2            = PB_7;

//LEDS ----------------------------------------------------
const PinName LED1 			 = PB_12;
const PinName LED2 			 = PB_13;
const PinName LED3 			 = PB_14;
const PinName LED4 			 = PB_15;
const PinName LED5 			 = PB_16;

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

