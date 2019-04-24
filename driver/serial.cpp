/***********************************************************************
 *                                                                     *
 *   This FILE sets up the Serial Communicator for the MicroMouse      *
 *                                                                     *
 *   Author: AJAY BOOTER                                               *
 *   Date: 2/23/2019                                                   *
 *   CPP File							       *
 *                                                                     *
 ***********************************************************************/

#include "mbed.h"
#include "serial.hpp"

Serial comm( PC_10, PC_11, BAUDRATE );

/************************************************************************
 *
 * Name: 		deviceMessage
 * Description: 	Sends a message to the device
 * Parameters: 		sends message to serial communicator
 ***********************************************************************/
void deviceMessage(  char* message ){

	comm.printf( message );
}

/************************************************************************
 *
 * Name: 		setBaud
 * Description:   Sets the baudrate of the serial communicator
 * Parameters: 		baudrate: default is 9600,changes to given input
 ***********************************************************************/
void setBaud( int baudrate ) {

		comm.baud( baudrate );
}
