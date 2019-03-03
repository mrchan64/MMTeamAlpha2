/***********************************************************************
 *                                                                     *
 *   This FILE sets up the movement states in the Micromouse           *
 *                                                                     *
 *   Author: DUY PHAM                                                  *
 *   Date: 3/3/2019                                                    *
 *                                                                     *
 ***********************************************************************/

#ifndef MOVEMENT_STATE_H
#define MOVEMENT_STATE_H

extern MOVEMENT_STATE movementState;

enum MOVEMENT_STATE {
  START,
  FORWARD_1,
  UNSURE,
  FORWARD_2,
  FORWARD_3,
  TURN_LEFT,
  TURN_RIGHT,
  TURN_180,
};

void runMovementStates();
void start();
void forward1();
void unsure();
void forward2();
void forward3();
void turnLeft();
void turnRight();
void turn180();

#endif
