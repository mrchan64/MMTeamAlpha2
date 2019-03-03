/***************************************************
 *                                                 *
 *   This FILE runs the main loop for Micromouse   *
 *                                                 *
 ***************************************************/

// AUTHOR: Matthew Chan

#include "mbed.h"
#include "driver/motors.hpp"
#include "algorithm/movement_states.hpp"

extern MOVEMENT_STATE movementState;

int main() {
  // poll

  // check pause

  // algorithm states

  switch (movementState) {  // movement states
    case START:
      start();
      break;
    case FORWARD_1:
      forward1();
      break;
    case UNSURE:
      unsure();
      break;
    case FORWARD_2:
      forward2();
      break;
    case FORWARD_3:
      forward3();
      break;
    case TURN_LEFT:
      turnLeft();
      break;
    case TURN_RIGHT:
      turnRight();
      break;
    case TURN_180:
      turn180();
      break;
  }
}
