/***********************************************************************
 *                                                                     *
 *   This FILE sets up the motors in the Micromouse                      *
 *                                                                     *
 *   Author: DUY PHAM                                                  *
 *   Date: 2/24/2019                                                   *
 *   CPP File                                                          *
 *                                                                     *
 *                                                                     *
 ***********************************************************************/

 #include "mbed.h"
 #include "motors.hpp"

AnalogOut motorl1(MOTOR_L1_PIN);
AnalogOut motorL2(MOTOR_L2_PIN);
AnalogOut motorR1(MOTOR_R1_PIN);
AnalogOut motorR2(MOTOR_R2_PIN);
