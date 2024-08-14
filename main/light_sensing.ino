#include "light_sensing.h"

// Minimum and maximum values for light input
const int sensorMin = 0;
const int sensorMax = 1023;
const int photoCellPin0 = A0;
const int photoCellPin1 = A1;
const int photoCellPin2 = A2;
const int photoCellPin3 = A3;

void setupLightSensing(){ 
	Serial.begin(9600); 
}

void handleLightSensing(){
	int photoCell0Arr[45][90]; // Pitch, Yaw 
	int photoCell1Arr[45][90];
	int photoCell2Arr[45][90];
	int photoCell3Arr[45][90];

	//TODO: do a spin and input 0-800 into [0][i] for each cell where 0,i is 0 pitch and i degrees yaw
}

void handleReset(){
	int resetPitch = 45;
	int resetYaw = 0;
	//TODO: set motors to face [resetPitch][resetYaw] to point straight up
}

String getLightLevel(){
	double analogValue = analogRead(photoCellPin0);  // Read the analog value from the sensor
	int range = map(analogValue, sensorMin, sensorMax, 0, 4);  // Map sensor value to a range
	String lightLevel;

	switch (range) {
		case 0:
			lightLevel = "Dark: " + String((analogValue/ (float)sensorMax) * 100, 2) + "%";  // Dark 
			break;
		case 1:
			lightLevel = "Low: " + String((analogValue/ (float)sensorMax) * 100, 2) + "%";  // Low light
			break;
		case 2:
			lightLevel = "Medium: " + String((analogValue/ (float)sensorMax) * 100, 2) + "%";  // Medium light
			break;
		case 3:
			lightLevel = "Bright: " + String((analogValue/ (float)sensorMax) * 100, 2) + "%";  // Bright light
			break;
		default:
			lightLevel = "Error: " + String(analogValue); // Error when grabbing light number -> should never happen
			break;
		}

	return lightLevel;
}
