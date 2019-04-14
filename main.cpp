/***************************************************
 *                                                 *
 *   This FILE runs the main loop for Micromouse   *
 *                                                 *
 ***************************************************/

// AUTHOR: Matthew Chan
#include <string>
using namespace std;

#include "mbed.h"
#include "driver/infrared.hpp"
//#include "states/moving_state.hpp"
#include "driver/serial.hpp"
#include "driver/motors.hpp"
#include "driver/encoders.hpp"
#include "driver/LED.hpp"
//#include "algorithm/movement_states.hpp"

// extern MOVEMENT_STATE movementState;


int main() {
  // poll/

  // check pause

  // algorithm states

  //runMovementStates();
  comm.printf( "Hello World\n\r");
  wait_ms(1000);
  initMotors();
  resetEncoders();
  comm.printf( "Hello World\n\r");

  while(true) {

    setIr( 1, 1);
    wait_us(500);
    comm.printf("IR front left: %f \n\r",getIRValues(1));
    // comm.printf("%f \n\r",getIRValues(1));
    // comm.printf("%f \n\r",getIRValues(1));
    // comm.printf("%f \n\r",getIRValues(1));
    setIr( 1, 0 );
    wait_ms(500);

  }
}
