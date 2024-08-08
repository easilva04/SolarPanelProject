#include "light_sensing.h"

// Minimum and maximum values for light input
const int sensorMin = 0;
const int sensorMax = 800;
const int photoCellPin0 = A0;

void setupLightSensing(){ 
	Serial.begin(9600); 
}

void handleLightSensingCommunication(){
	
	//initialize reading in from photocell and mapping the sensor range to a range of four options of brightness
	int analogValue = analogRead(photoCellPin0);
	int range = map(analogValue, sensorMin, sensorMax, 0, 3);

	switch (range){
		case 0:
			Serial.println("Dark");
			break;
		case 1:
			Serial.println("Dim");
			break;
		case 2: 
			Serial.println("Medium");
			break;
		case 3:
			Serial.println("Bright");
			break;
	}
	//give time to reset system vals
	delay(250);		
}
