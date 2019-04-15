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
const float LO = -0.01f;
const float HI = 0.01f;

int main() {
  comm.printf("UPLOADED\n\r");
  wait_ms(1000);

  initMotors();
  resetEncoders();

  int pollRate = 200;
  long targetSpeed = 3000;
  while(true) {
    long leftSpeed = getPulseCountLeft() / pollRate;
    long rightSpeed = getPulseCountRight() / pollRate;

    comm.printf("LEFT: %d\n\r", leftSpeed);
    comm.printf("RIGHT: %d\n\r", rightSpeed);
    comm.printf("DIFF: %d\n\r", leftSpeed - rightSpeed);
    comm.printf("PERCENT_DIFF: %d\n\r", (int) ((leftSpeed - rightSpeed) / (float) targetSpeed * 100));

    float powerL = (targetSpeed - leftSpeed) * 0.00005f;
    float powerR = (targetSpeed - rightSpeed) * 0.00005f;

    if (powerL > 0.5f)
      powerL = 0.5f;
    else if (powerL < -0.5f)
      powerL = -0.5f;

    if (powerR > 0.5f)
    powerR = 0.5f;
    else if (powerR < -0.5f)
      powerR = -0.5f;

    comm.printf("LPOW: %f\n\r", powerL);
    comm.printf("RPOW: %f\n\r", powerR);
    comm.printf("\n\r");

    setMotorL(powerL + LO + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(HI-LO))));
    setMotorR(powerR + LO + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(HI-LO))));

    resetEncoders();

    wait_ms(pollRate);
  }
}
