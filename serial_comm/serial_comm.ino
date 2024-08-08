void setup() {
  // Start serial communication at 9600 baud
  Serial.begin(9600);
}

void loop() {
  // Check if data is available to read
  String message = "Hello, raspberry pi!";
  Serial.println(message);

  delay(1000);
}
