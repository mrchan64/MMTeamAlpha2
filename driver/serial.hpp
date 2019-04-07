/***********************************************************************
 *                                                                     *
 *   This FILE sets up the Serial Communictor for the MicroMouse       *
 *                                                                     *
 *   Author: AJAY BOOTER                                               *
 *   Date: 2/23/2019                                                   *
 *                                                                     *
 ***********************************************************************/

#include "mbed.h"
#include "pinnames.hpp"

#ifndef SERIAL_H
#define SERIAL_H

const int BAUDRATE = 115200;
extern Serial comm;

/**
 * Sends a messge to the device at a given baudrate
 */
void deviceMessage( char* message );

/**
 * Updates the baudrate on the serial Communicator
 */
void setBaud( int baudrate );

#endif
