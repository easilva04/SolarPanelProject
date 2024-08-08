import serial
import time

# Set up the serial connection to the Arduino
arduino = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
time.sleep(2)  # Wait for the connection to be established

while True:
    # Send data to the Arduino
    arduino.write(b'Hello Arduino!\n')
    
    # Read the response from Arduino
    data = arduino.readline().decode('utf-8').rstrip()
    if data:
        print(f"Received from Arduino: {data}")
    
    time.sleep(1)  # Wait for a second before sending the next message
