#include "serial_comm.h"
#include "light_sensing.h"

void setup() {
	Serial.begin(9600);
	setupSerialComm();
	setupLightSensing();
}

void loop() {
	handleSerialCommunication();
	handleLightSensing();
	handleReset();
}
