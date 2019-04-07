/***********************************************************************
 *                                                                     *
 *   This FILE handles the logic for the Moving State of the mouse	   *
 *                                                                     *
 *   Author: AJAY BOOTER	                                             *
 *   Date: 3/2/2019                                                    *
 *                                                                     *
 ***********************************************************************/

#include "mbed.h"

// CONSTANTS -------------------------------------------------
//First unsure distance, there MUST be a wall on this side.
const float FIRST_DISTANCE             = 0;
//Turning constants
const int TURN 												 = 90;
const int FLIP												 = 180;
//orientation, N = 0, E = 1, S = 2, W = 3.
extern int orientation;

#ifndef MOVING_STATE_H
#define MOVING_STATE_H

/************************************************************************
 *
 * Name: 		forward
 * Description: 	Moving forward state 1, determines if a wall if present
 								  on the side of the mouse or not.
 * Parameters: 		previousedge: the state of the sensor in the previous cycle
 									currentedge: the state of the sensor in the current cycle
									distance: distance the mouse has traveled
 ***********************************************************************/
void forward1( int previousedge, int currentedge, float distance );

/************************************************************************
 *
 * Name: 		forward2
 * Description: 	Moving forward state 2, calculates the  turn to reach
                  the  target orientation
 * Parameters: 		target: the target orientation
 ***********************************************************************/
void forward2( int target );

/************************************************************************
 *
 * Name: 		turn90
 * Description: 	Turns the Mouse 90 degrees in a given direction.
 * Parameters:    right: if true, then turns micromouse right, else turns left
 ***********************************************************************/
void turn90( int right );

/************************************************************************
 *
 * Name: 		turn180
 * Description: 	Turns the Mouse 180 degrees.
 * Parameters: 		no parameters, changes global orientation var
 ***********************************************************************/
void turn180();

#endif
