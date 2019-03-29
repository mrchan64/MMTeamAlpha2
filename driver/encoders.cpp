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
  encoderLeftA.rise(&riseLeftA);
  encoderLeftA.fall(&fallLeftA);
  encoderLeftB.rise(&riseLeftB);
  encoderLeftB.fall(&fallLeftB);
}

void riseLeftA() {
  if (encoderLeftB == 1)
    pulseCountLeft++;
  else if (encoderLeftB == 0)
    pulseCountLeft--;
}

void fallLeftA() {
  if (encoderLeftB == 0)
    pulseCountLeft++;
  else if (encoderLeftB == 1)
    pulseCountLeft--;
}

void riseLeftB() {
  if (encoderLeftA == 0)
    pulseCountLeft++;
  else if (encoderLeftA == 1)
    pulseCountLeft--;
}

void fallLeftB() {
  if (encoderLeftA == 1)
    pulseCountLeft++;
  else if (encoderLeftA == 0)
    pulseCountLeft--;
}

int getPulseCountLeft() {
  return pulseCountLeft;
}

void resetEncoderRight() {
  pulseCountRight = 0;
  encoderRightA.rise(&riseRightA);
  encoderRightA.fall(&fallRightA);
  encoderRightB.rise(&riseRightB);
  encoderRightB.fall(&fallRightB);
}

void riseRightA() {
  if (encoderRightB == 1)
    pulseCountRight++;
  else if (encoderRightB == 0)
    pulseCountRight--;
}

void fallRightA() {
  if (encoderRightB == 0)
    pulseCountRight++;
  else if (encoderRightB == 1)
    pulseCountRight--;
}

void riseRightB() {
  if (encoderRightA == 0)
    pulseCountRight++;
  else if (encoderRightA == 1)
    pulseCountRight--;
}

void fallRightB() {
  if (encoderRightA == 1)
    pulseCountRight++;
  else if (encoderRightA == 0)
    pulseCountRight--;
}

int getPulseCountRight() {
  return pulseCountRight;
}
