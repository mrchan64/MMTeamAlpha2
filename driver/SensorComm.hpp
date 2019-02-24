#ifndef SENSORCOMM_H
#define SENSORCOMM_H

#include "mbed.h"
#include "pinnames.hpp"

// I2C ADDRESSES ---------------------
const char GRYO_ADDR		= ;
const char ACCEL_ADDR		= ;
const char GYRO_I2C_ID		= ;
const char ACCEL_I2C_ID		= ;


// I2C REGISTERS ---------------------
const char GYRO_CHIP_ID 	= ;
const char GYRO_CTRL_1		= ;
const char GYRO_CTRL_4		= ;
const char GYRO_X_LOW 		= ;
const char GYRO_X_HIGH		= ; 
const char GYRO_Y_LOW		= ;
const char GYRO_Y_HIGH		= ;
const char GYRO_Z_LOW		= ;
const char GYRO_Z_HIGH		= ;

const char ACCEL_CHIP_ID 	= ; 
const char ACCEL_CTRL_1		= ;
const char ACCEL_CTRL_4		= ; 
const char ACCEL_X_H		= ;
const char ACCEL_Y_H		= ; 
const char ACCEL_Z_H		= ;


// GRYO CONSTANTS --------------------
const float GYRO_SENS_500DPS 		= 0.0175F;
const int NORMALIZATION_DELAY_US 	= 100;
const int NORMALIZATION_WINDOW		= 100;


// OBJECTS ---------------------------
extern I2C i2c;


// DATA STRUCTS ----------------------
struct SensorData {
	float x;
	float y;
	float z;
}

// CLASSES ---------------------------
class Gyro {
public:
	Gyro(int a);
	void reset();
	void getXYZ(char* xyz);
	SensorData read();
	void normalize();
	uint8_t error;
	SensorData baseline
};

class Accel {
public:
	Accel(int a);
	void reset();
	void getXYZ(char* xyz);
	SensorData read();
	void normalize();
	uint8_t error;
	SensorData baseline
}

// MORE OBJECTS ----------------------
extern Gyro m_gyro;
extern Accel m_accel;


//METHODS ----------------------------
void reset_sensors();
SensorData read_gyro();
SensorData read_accel();
uint8_t read_sensor_error_state();
void normalize_sensors();
bool check_pause_state();

#endif