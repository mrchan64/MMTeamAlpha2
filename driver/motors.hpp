/***********************************************************************
 *                                                                     *
 *   This FILE sets up the motors in the Micromouse                      *
 *                                                                     *
 *   Author: DUY PHAM                                                  *
 *   Date: 2/24/2019                                                   *
 *                                                                     *
 ***********************************************************************/

#include "mbed.h"
#include "pinnames.hpp"

#ifndef MOTORS_H
#define MOTORS_H

const int PERIOD_US = 50;

void initMotors();

void setMotorL(float input);

void setMotorR(float input);

#endif
