/*
 * Led.cpp
 *
 *  Created on: 18-01-2019
 *      Author: fabhi
 */

#include "Led.h"

Led::Led(int pin) {
	pinMode(pin, OUTPUT);
	_pin = pin;
}

Led::~Led() {
}

void Led::turnOn(){
	digitalWrite(_pin, HIGH);
}

void Led::turnOff(){
	digitalWrite(_pin, LOW);
}

void Led::sendAnalogOutput(int value){
	analogWrite(_pin, value);
}

