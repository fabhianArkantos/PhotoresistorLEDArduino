/*
 * Led.h
 *
 *  Created on: 18-01-2019
 *      Author: fabhi
 */

#ifndef SRC_LED_H_
#define SRC_LED_H_

#include <Arduino.h>

class Led {

public:
	Led(int pin);
	virtual ~Led();
	void turnOn();
	void turnOff();
	void sendAnalogOutput(int value);

private:
	int _pin;

};

#endif /* SRC_LED_H_ */
