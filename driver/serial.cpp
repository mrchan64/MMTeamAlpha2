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

Serial comm( PC_10, PC_11 );

/************************************************************************
 *
 * Name: 		deviceMessage
 * Description: 	Sends a message to the device at a given baudrate
 * Parameters: 		baudrate: if 0, defaults to 9600, else sets to 
 * 			given. Represents tranfer of bits per second
 *			message: message to send to the device
 ***********************************************************************/
void deviceMessage( int baudrate, char message[] ){

	//Checks for defualt case
	if( baudrate != 0 ){

		comm.baud( baudrate );
	}
	
	comm.printf( message );
}

