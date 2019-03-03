/***********************************************************************
 *                                                                     *
 *   This FILE sets up the motors in the Micromouse                    *
 *                                                                     *
 *   Author: DUY PHAM                                                  *
 *   Date: 2/24/2019                                                   *
 *   CPP File                                                          *
 *                                                                     *
 ***********************************************************************/

 #include "mbed.h"
 #include "motors.hpp"

AnalogOut motorL1(MOTOR_L1_PIN);
AnalogOut motorL2(MOTOR_L2_PIN);
AnalogOut motorR1(MOTOR_R1_PIN);
AnalogOut motorR2(MOTOR_R2_PIN);

void setMotorL(float input) {
  if (input > 0) {
    motorL1.write(input);
    motorL2.write(0);
  } else {
    motorL1.write(0);
    motorL2.write(-input);
  }
}

void setMotorR(float input) {
  if (input > 0) {
    motorR1.write(input);
    motorR2.write(0);
  } else {
    motorR1.write(0);
    motorR2.write(-input);
  }
}
