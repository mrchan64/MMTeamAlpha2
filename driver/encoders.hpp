/***********************************************************************
 *                                                                     *
 *   This FILE allows for the control of the encoders in the           *
 *   Micromouse.                                                       *
 *                                                                     *
 *   Author: DUY PHAM                                                  *
 *   Date: 2/10/2019                                                   *
 *                                                                     *
 ***********************************************************************/

 // PHASES FOR CLOCKWISE ROTATION
 // ╔═══════╦═══════════╦═══════════╗
 // ║ PHASE ║ CHANNEL A ║ CHANNEL B ║
 // ╠═══════╬═══════════╬═══════════╣
 // ║     1 ║         0 ║         0 ║
 // ╠═══════╬═══════════╬═══════════╣
 // ║     2 ║         0 ║         1 ║
 // ╠═══════╬═══════════╬═══════════╣
 // ║     3 ║         1 ║         1 ║
 // ╠═══════╬═══════════╬═══════════╣
 // ║     4 ║         0 ║         1 ║
 // ╚═══════╩═══════════╩═══════════╝

 // PHASES FOR COUNTERCLOCKWISE ROTATION
 // ╔═══════╦═══════════╦═══════════╗
 // ║ PHASE ║ CHANNEL A ║ CHANNEL B ║
 // ╠═══════╬═══════════╬═══════════╣
 // ║     1 ║         1 ║         0 ║
 // ╠═══════╬═══════════╬═══════════╣
 // ║     2 ║         1 ║         1 ║
 // ╠═══════╬═══════════╬═══════════╣
 // ║     3 ║         0 ║         1 ║
 // ╠═══════╬═══════════╬═══════════╣
 // ║     4 ║         0 ║         0 ║
 // ╚═══════╩═══════════╩═══════════╝

#include "mbed.h"
#include "pinnames.hpp"

#ifndef ENCODERS_H
#define ENCODERS_H

int pulseCountLeft;   // pulse count for the left encoder
int pulseCountRight;  // pulse count for the right encoder

// Reset the count of both left and right encoders
void resetEncoders();

// Reset the count of the left encoder
void resetEncoderLeft();

// Update left pulse count when channel A rises
void riseLeftA();

// Update left pulse count when channel A falls
void fallLeftA();

// Update left pulse count when channel B rises
void riseLeftB();

// Update left pulse count when channel B falls
void fallLeftB();

// Returns the pulse count of the left encoder
int getPulseCountLeft();

// Reset the count of the right encoder
void resetEncoderRight();

// Update right pulse count when channel A rises
void riseRightA();

// Update right pulse count when channel A falls
void fallRightA();

// Update right pulse count when channel B rises
void riseRightB();

// Update right pulse count when channel B falls
void fallRightB();

// Reset the pulse count of the right encoder
int getPulseCountRight();

#endif
