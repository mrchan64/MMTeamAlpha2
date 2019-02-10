/***********************************************************************
 *                                                                     *
 *   This FILE sets up the LEDs and Voltmeter used in the Micromouse   *
 *                                                                     *
 *   Author: MATTHEW CHAN                                              *
 *   Date: 2/10/2019                                                   *
 *                                                                     *
 ***********************************************************************/

#include "mbed.h"

// MAKE SURE TO CHANGE THIS WHEN YOU CREATE A NEW FILE
#ifndef EXAMPLE_H
#define EXAMPLE_H

// CONSTANTS -------------------------------------------------
const float EXAMPLE_CONSTANT                = 8.4f;
const float EXAMPLE_CONSTANT_2              = 7.0f;

// CLASSES ---------------------------------------------------
class ExampleClass {
public:
	ExampleClass(int param1);
	void exampleMethod1();
	void exampleMethod2(int param1, int param2);
	DigitalOut exampleD1;
};

void exampleExternalMethod1(float param1);

#endif
