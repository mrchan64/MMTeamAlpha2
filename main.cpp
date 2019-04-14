/***************************************************
 *                                                 *
 *   This FILE runs the main loop for Micromouse   *
 *                                                 *
 ***************************************************/

// AUTHOR: Matthew Chan
#include <string>
using namespace std;

#include "mbed.h"
//#include "driver/infrared.hpp"
//#include "states/moving_state.hpp"
#include "driver/serial.hpp"
#include "driver/motors.hpp"
#include "driver/encoders.hpp"
#include "driver/LED.hpp"
#include "algorithm/movement_states.hpp"

extern MOVEMENT_STATE movementState;


int main() {
  // poll/

  // check pause

  // algorithm states

  //runMovementStates();
  comm.printf( "Hello Word");
  wait_ms(1000);
  initMotors();
  resetEncoders();
  comm.printf( "Hello Word");

  /*while(true) {

    allOn(1);
    wait_us(50);
    comm.printf("%f %f %f %f\n\r",getIRValues(1),getIRValues(2),getIRValues(3),getIRValues(4));
    allOn(0);
    wait_ms(1000);

  }*/
}
