/***************************************************
 *                                                 *
 *   This FILE runs the main loop for Micromouse   *
 *                                                 *
 ***************************************************/

// AUTHOR: Matthew Chan
#include <string>
using namespace std;

#include "mbed.h"
// #include "driver/infrared.hpp"
// #include "states/moving_state.hpp"
// #include "driver/serial.hpp"
// #include "driver/motors.hpp"
// #include "driver/encoders.hpp"
// #include "driver/LED.hpp"
// #include "algorithm/movement_states.hpp"
#include "algorithm/AlgoState.hpp"

// extern MOVEMENT_STATE movementState;


int main() {
  AlgoState::generateMaze();
  AlgoState::printMaze(maze);
  AlgoState::reweightDistance(maze, goalTilesMaze);
  AlgoState::printDist();
  AlgoState::reweightDistance(ff, goalTiles);
  AlgoState::printDist();
  AlgoState::printMaze(ff);

  cout << endl;
  AlgoState::floodFill();
  cout << "FINSIHED FLOOD FILL" << endl;
  AlgoState::printMaze(ff);
  AlgoState::printMaze(maze);
  AlgoState::printDist();
  return 0;
  // poll/

  // check pause

  // algorithm states

  //runMovementStates();

  // wait_ms(1000);
  // initMotors();
  // resetEncoders();

  // setMotorL(0.01f);
  // setMotorR(0.01f);
  // while(true) {

  //   //comm.printf("%d\n\r",getPulseCountLeft() - getPulseCountRight());
  //   if( getPulseCountLeft() > 1024 ){

  //     setMotorL(0.0f);
  //     setMotorR(0.0f);
  //     comm.printf("%d %d\n\r",getPulseCountLeft(), getPulseCountRight());
  //   }
  //   //wait_ms(1000);
  // }
}
