/***********************************************************************
 *                                                                     *
 *   This FILE handles the logic being the Moving State of the mouse   *
 *                                                                     *
 *   Author: AJAY BOOTER                                               *
 *   Date: 3/2/2019                                                    *
 *   CPP File                                                          *
 *                                                                     *
 ***********************************************************************/

#include "mbed.h"
#include "moving_state.hpp"

//Starts the mouse facing north
int orientation = 0;

void forward1( int previousedge, int currentedge, float distance ) {

  //Rising edge, could be parallel or perpendicular war
  if( currentedge > previousedge) {

    //Go to unsure state
  }

  //Falling edge, no wall
  if( previousedge > currentedge ) {

      //Update map with no wall
      //Go to moving forward state 2
  }

  //There is a parallel wall
  if( distance > FIRST_DISTANCE ) {

    //update map with wall
    //Goto moving forward state 2
  }
}

void forward2( int target ){

  //Assuming N = 1, E = 2, S = 3, and W = 4

  switch( orientation - target ) {

    case 0:
      //Moving Forward State 3
      break;

    case 1:
      //Set degrees to 0
      //turn State left
      break;

    case (-3):
      //set degrees to 0
      //turn State left
      break;

    case (-1):
      //set degrees to 0
      //turn state right
      break;

    case 3:
      //set degrees to 0
      //turn state right
      break;

    case 2:
      //set degrees to 0
      //turn state 180
      break;

    case (-2):
      //set degrees to 0
      //turn state 180
      break;
  }
}

  void turn90( int right ) {

    if( right ){

      //Changes orientation to right facing direction
      orientation  = ( orientation + 1 ) % 4;
    }
    else {

      //Changes orientation to left facing direction
      orientation = ( orientation - 1 );

      //Accounts to changing to left when facing north
      if( orientation == -1 ){

        orientation = 3;
      }
    }

  /*
    //set degrees to 0
    while( degrees != 90 ) {

      if( degrees == 90 ){

        check walls
        update walls
        moving forward state 2
        forward2( orientation, orientation );
        break;
      }

      update degrees
    } */
  }

  void turn180() {

  orientation = ( orientation + 1 ) % 4;

  /*
    set degrees to 0
    while( degrees != 180 ) {

      if( degrees == 180 ){

        moving forward state 2
        forward2( orientation, orientation );
        break;
      }

      update degrees

    } */
  }
