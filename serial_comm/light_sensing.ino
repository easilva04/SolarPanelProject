#include "light_sensing.h"

// Minimum and maximum values for light input
const int sensorMin = 0;
const int sensorMax = 800;
const int photoCellPin0 = A0;

void setupLightSensing(){ 
	Serial.begin(9600); 
}

void handleLightSensingCommunication(){
		
}

String getLightLevel(){
	double analogValue = analogRead(photoCellPin0);  // Read the analog value from the sensor
	int range = map(analogValue, sensorMin, sensorMax, 0, 3);  // Map sensor value to a range

	String lightLevel;

	switch (range) {
		case 0:
			lightLevel = "Dark: " + String(analogValue);  // Bright light
			break;
		case 1:
			lightLevel = "Low: " + String(analogValue);  // Moderate light
			break;
		case 2:
			lightLevel = "Medium: " + String(analogValue);  // Low light
			break;
		case 3:
			lightLevel = "Bright: " + String(analogValue);  // Darkness
			break;
		default:
			lightLevel = "Error: " + String(analogValue);
			break;
		}

	return lightLevel;
}
