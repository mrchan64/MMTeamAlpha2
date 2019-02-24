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

/**
 * Sends a messge to the device at a given baudrate
 */
void deviceMessage( int baudrate, char message[] );

#endif
