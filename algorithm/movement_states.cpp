/***********************************************************************
 *                                                                     *
 *   This FILE sets up the movement states in the Micromouse           *
 *                                                                     *
 *   Author: DUY PHAM                                                  *
 *   Date: 3/3/2019                                                    *
 *   CPP FILE                                                          *
 *                                                                     *
 ***********************************************************************/

 #include "mbed.h"
 #include "movement_states.hpp"

 movementState = START;

 void runMovementStates() {
   switch (movementState) {
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

void start() {
  if (false)  //check if wall if front
    movementState = FORWARD_1;
}

void forward1() {
}

void unsure() {
  if (false) { //check falling edge
    // update map with a perpendicular wall
    movementState = FORWARD_2;
  }
  else if (false) {  // check if the distance travelled in this state is greater than the unsure distance
    // update map with the parallel wall
    movementState = FORWARD_2;
  }
}

void forward2() {

}

void forward3() {
  // set offset the first time we switch to this state
  if (false) {  // check if the distance travelled in this state is greater than the offset we set in the beginning
    // reset the encoder
    movementState = FORWARD_1;
  }
}

void turnLeft() {
}

void turnRight() {
  if (false) { //chcek to see if we have it -90 degrees
    // update orientation
    // check and update walls
    movementState = FORWARD_2;
  }
}

void turn180() {

}
