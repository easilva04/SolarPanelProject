import serial
import time

# Set up the serial connection to the Arduino
arduino = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
time.sleep(2)  # Wait for the connection to be established

while True:
    # Read a line from serial port
    data = arduino.readline().decode('utf-8').strip()

    #if line not empty, print it
    if data:
        print(f"Received: {data}")
    
    time.sleep(0.5)  # Wait for a second before sending the next message
