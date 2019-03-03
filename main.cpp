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

  runMovementStates();
}
