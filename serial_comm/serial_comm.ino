void setup() {
	// Start serial communication at 9600 baud
	Serial.begin(9600);
}

void loop() {
	// Check if data is available to read
	String findSun = "Found the sun!\n";  
	String reset = "Reset to 0!\n";
	delay(1000);
	if(Serial.available() > 0){
		String command = Serial.readStringUntil('\n');
		command.trim();
		
		if(command == "Find Sun"){
			delay(1000);
			Serial.println(findSun);
		}else if (command == "Reset"){
			delay(1000);
			Serial.println(reset);
		}else{
			delay(1000);
			Serial.println("Error, mistype");
		}
	}	
	
	// Flush the Serial buffer to avoid leftover data input 
	while (Serial.available() > 0) { Serial.read(); }
	Serial.println(Command processed.);
	delay(100)
}
