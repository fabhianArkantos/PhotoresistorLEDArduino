#include <Arduino.h>
#include "Led.h"

int photoresistorPin = 0;
Led _led(3);
int value;

void setup() {

}

void loop() {

	value = analogRead(photoresistorPin);

	if(value <= 100){
		value = 0;
	}

	_led.sendAnalogOutput(value/4);

}
