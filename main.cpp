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
#include "states/moving_state.hpp"
#include "driver/serial.hpp"
#include "driver/motors.hpp"
#include "driver/encoders.hpp"
#include "driver/LED.hpp"
// #include "algorithm/movement_states.hpp"

// extern MOVEMENT_STATE movementState;


int main() {
  comm.printf("UPLOADED\n\r");
  wait_ms(1000);

  initMotors();
  resetEncoders();

  setMotorL(0.1f);
  setMotorR(0.1f);

  int targetDist = 400000;
  while(true) {
    int leftDist = getPulseCountLeft();
    int rightDist = getPulseCountRight();

    comm.printf("LEFT: %d\n\r", leftDist);
    comm.printf("RIGHT: %d\n\r", rightDist);
    comm.printf("DIFF: %d\n\r", rightDist - leftDist);
    comm.printf("\%DIFF: %f\%\n\r", (rightDist - leftDist) / (float) targetDist * 100);

    float speedL = (targetDist - leftDist) * 0.000001f;
    float speedR = (targetDist - rightDist) * 0.000001f;

    if (speedL > 0.5f)
      speedL = 0.5f;
    else if (speedL < 0.0f)
      speedL = 0.0f;

    if (speedR > 0.5f)
    speedR = 0.5f;
    else if (speedR < 0.0f)
      speedR = 0.0f;

    comm.printf("LSPD: %f\n\r", speedL);
    comm.printf("RSPD: %f\n\r", speedR);
    comm.printf("\n\r");

    setMotorL(speedL);
    setMotorR(speedR);

    resetEncoders();

    wait_ms(100);
  }
}
