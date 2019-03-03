#include "SensorComm.hpp"

#include "mbed.h"
#include "pinnames.hpp"


// OBJECTS -------------------------
I2C i2c(M_I2C_SDA, M_I2C_SCL);
DigitalOut gryo_led(LED_GYRO);
DigitalOut accel_led(LED_ACCEL);

Gyro::Gyro(int a) {
	this->baseline.x = 0;
	this->baseline.y = 0;
	this->baseline.z = 0;
	this->reset();
}

void Gyro::reset() {
	gro_led = 1;

	char dat[2];
	dat[0] = GYRO_CHIP_ID;
	i2c.write(GYRO_ADDR, dat, 1, true);
	i2c.read(GYRO_ADDR, dat, 1);

	if (dat[0] != GYRO_I2C_ID) {
		this->error = 1;
	} else {
		this->error = 0;
		gyro_led = 0;
	}

	dat[0] = GYRO_CTRL_1;
	dat[1] = 0x00;
	i2c.write(GYRO_ADDR, dat, 2);
	dat[1] = 0x0F;
	i2c.write(GYRO_ADDR, dat, 2);

	dat[0] = GYRO_CTRL_4;
	dat[1] = 0x10;
	i2c.write(GRYO_ADDR, dat, 2);
}

void Gyro::getXYZ(char* xyz) {
	xyz[0] = GYRO_X_LOW;
	xyz[1] = GYRO_X_HIGH;
	xyz[2] = GYRO_Y_LOW;
	xyz[3] = GYRO_Y_HIGH;
	xyz[4] = GYRO_Z_LOW;
	xyz[5] = GYRO_Z_HIGH;
}


SensorData Gyro::read() {
	char signals[6]; 	//hold bits from xlo, xhi, ylo, ..., zhi
	char xyz[6]; 		//hold signal values from GYRO
	Gyro::getXYZ(xyz);

	char dat[2]; 		//retreive bit value 
	for (int i = 0; i < xyz.length; i++) {
		dat[0] = xyz[i];
		i2c.write(GYRO_ADDR, dat, 1, true);
		i2c.read(GYRO_ADDR, dat, 1);
		signals[i] = dat[0];
	}

	int16_t x_raw = signals[0] | (signals[1] << 8);
	int16_t y_raw = signals[2] | (signals[3] << 8);
	int16_t z_raw = signals[4] | (signals[5] << 8);

	SensorData sd;

	sd.x = (float) (x_raw * GRYO_SENS_500DPS) - this->baseline.x;
	sd.y = (float) (y_raw * GRYO_SENS_500DPS) - this->baseline.y;
	sd.z = (float) (z_raw * GRYO_SENS_500DPS) - this->baseline.z;

	return sd;
}

void Gryo::normalize() {
	SensorData total = {0,0,0};
	SensorData gdat;
	for(int i =0; i<NORMALIZATION_WINDOW; i++) {
		gdat = this.read();
		total.x += gdat.x;
		total.y += gdat.y;
		total.z += gdat.z;
	}
	this.baseline.x += total.x/NORMALIZATION_WINDOW;
	this.baseline.y += total.x/NORMALIZATION_WINDOW;
	this.baseline.z += total.x/NORMALIZATION_WINDOW;
}

Accel::Accel(int a) {
	this->reset();
}
	
void Accel::reset() {
	accel_led = 1;
	char dat[2];
	dat[0] = ACCEL_CHIP_ID;
	i2c.write(ACCEL_ADDR, dat, 1, true);
	i2c.read(ACCEL_ADDR, dat, 1);

	if(dat[0] != ACCEL_I2C_ID) {
		this->error = 1;
	} else {
		this->error = 0;
		accel_led = 0;
	}

	dat[0] = ACCEL_CTRL_1;
	dat[1] = 0x6F;
	i2c.write(ACCEL_ADDR, dat, 2);

	dat[0] = ACCEL_CTRL_4;
	dat[1] = 0x20;
	i2c.write(ACCEL_ADDR, dat, 2);
}

void Accel::getXYZ(char* xyz) {
	xyz[0] = ACCEL_X_H;
	xyz[1] = ACCEL_Y_H;
	xyz[2] = ACCEL_Z_H;
}

SensorData Accel::read() {
	char signals[3];
	char xyz[3];
	Accel::getXYZ(xyz);

	char dat[2];
	for (int i = 0; i < xyz.length; i++) {
		dat[0] = xyz[i];
		i2c.write(ACCEL_ADDR, dat, 1, true);
		i2c.read(ACCEL_ADDR, dat, 1);
		signals[i] = dat[0];
	}

	SensorData sd;

	sd.x = (float) ((int8_t) signals[0]);
	sd.y = (float) ((int8_t) signals[1]);
	sd.z = (float) ((int8_t) signals[2]);

	return sd;

}

void Accel::normalize() {
	//hehe xd 
}


Gyro m_gryo(1);
Accel m_accel(1);


void reset_sensors() {
	m_gyro.reset();
	m_accel.reset();
}

SensorData read_gyro() {
	return m_gryo.read();
}

SensorData read_accel() {
	return m_accel.read();
}

uint8_t read_sensor_error_state() {
	return (m_gyro.error << 1) | m_accel.error;
}	

void normalize_sensors() {
	m_gryo.normalize();
	m_accel.normalize();
}

bool paused = false;

bool check_pause_state() {
	//needs work
}
