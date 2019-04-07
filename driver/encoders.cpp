/***********************************************************************
*                                                                     *
*   This FILE allows for the control of the encoders in the Micromouse.  *
*                                                                     *
*   Author: DUY PHAM                                                  *
*   Date: 2/10/2019                                                   *
*   CPP File                                                          *
*                                                                     *
***********************************************************************/

#include "mbed.h"
#include "encoders.hpp"

long pulseCountLeft;
long pulseCountRight;

InterruptIn encoderLeftA(ENC_L_A_PIN);
InterruptIn encoderLeftB(ENC_L_B_PIN);
InterruptIn encoderRightA(ENC_R_A_PIN);
InterruptIn encoderRightB(ENC_R_B_PIN);

void resetEncoders() {
  resetEncoderLeft();
  resetEncoderRight();
}

void resetEncoderLeft() {
  pulseCountLeft = 0;
  encoderLeftA.rise(&riseLeftA);\
}

void riseLeftA() {
  if (encoderLeftB == 1)
    pulseCountLeft++;
  else if (encoderLeftB == 0)
    pulseCountLeft--;
}

long getPulseCountLeft() {
  return pulseCountLeft;
}

void resetEncoderRight() {
  pulseCountRight = 0;
  encoderRightA.rise(&riseRightA);
}

void riseRightA() {
  if (encoderRightB == 1)
    pulseCountRight++;
  else if (encoderRightB == 0)
    pulseCountRight--;
}

long getPulseCountRight() {
  return pulseCountRight;
}
