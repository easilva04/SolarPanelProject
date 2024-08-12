#include "serial_comm.h"

void setupSerialComm() {
	// Start serial communication at 9600 baud
	Serial.begin(9600);
}

void handleSerialCommunication() {
	// Check if data is available to read
	String findSun = "Found the sun!\n";  
	String reset = "Reset to 0!\n";
	delay(1000);
	if(Serial.available() > 0){
		String command = Serial.readStringUntil('\n');
		command.trim();
		
		if(command == "Find Sun"){
			Serial.println(findSun);
			handleLightSensing();
		}else if (command == "Reset"){
			Serial.println(reset);
			handleReset();
		}else if (command = "Light"){
			Serial.println(getLightLevel());
		}else{
			Serial.println("Error, mistype");
		}
		delay(250);
	}	
	
	// Flush the Serial buffer to avoid leftover data input 
	while (Serial.available() > 0) { Serial.read(); }
	delay(500);
}
