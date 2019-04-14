/***********************************************************************
 *                                                                     *
 *   This FILE sets up the Infrared componenets used in the Micromouse *
 *                                                                     *
 *   Author: MATTHEW CHAN                                              *
 *   Date: 2/10/2019                                                   *
 *                                                                     *
 ***********************************************************************/

#include "mbed.h"

#ifndef INFRARED_H
#define INFRARED_H

/**********************************************************************
name: setIr
Description: Either turns the IR Sensors on or off based on the boolean
						 passed through.
Parameters:  id: the IR Sensor to turn off/on.
						 state: Turn IR Sensor on/off (nonzero, zero).
**********************************************************************/
void setIr( int sensor, int state );

/**********************************************************************
name: allOn
Description: Either turns all IR Sensors on or off based on the boolean
						 passed through.
Parameters:  state: What state to set all the Sensors to
**********************************************************************/
void allOn( int state );

/**********************************************************************
name: getIRValues
Description: Returns the value of the sensor specified.
Parameters:  sensor: The sensor whose value you want to.
**********************************************************************/
float getIRValues( int sensor);

#endif
