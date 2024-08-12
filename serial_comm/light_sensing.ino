#include "light_sensing.h"

// Minimum and maximum values for light input
const int sensorMin = 0;
const int sensorMax = 800;
const int photoCellPin0 = A0;
const int photoCellPin1 = A1;
const int photoCellPin2 = A2;
const int photoCellPin3 = A3;

void setupLightSensing(){ 
	Serial.begin(9600); 
}

void handleLightSensing(){
	int photoCell0Arr[90][360]; // Pitch, Yaw 
	int photoCell1Arr[90][360];
	int photoCell2Arr[90][360];
	int photoCell3Arr[90][360];

	//TODO: do a spin and input 0-800 into [0][i] for each cell
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
