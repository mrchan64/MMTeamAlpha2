/***************************************************
 *                                                 *
 *   This FILE runs the main loop for Micromouse   *
 *                                                 *
 ***************************************************/

// AUTHOR: Matthew Chan

#include "mbed.h"
#include "driver/serial.hpp"
// #include "driver/motors.hpp"
// #include "driver/LED.hpp"
// #include "algorithm/movement_states.hpp"

// extern MOVEMENT_STATE movementState;

int main() {
  // poll

  // check pause

  // algorithm states

  // runMovementStates();

  while(true) {
    deviceMessage((char*) "Hello world!\n");
    wait_ms(1000);
  }
}
