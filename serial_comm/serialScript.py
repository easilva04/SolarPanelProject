import serial
import time

#Set prompt for possible objectives
prompt = "Please input one of the following commands:\n - Find Sun \n - Reset"

# Set up the serial connection to the Arduino
arduino = serial.Serial('/dev/ttyUSB0', 9600, timeout=2)
time.sleep(2)  # Wait for the connection to be established

def send_command(command):
    arduino.write(f"{command}\n".encode('utf-8'))
    time.sleep(0.5)  # Allow time for Arduino to process
    
    # Read the first response (the actual command response)
    response = arduino.readline().decode('utf-8').strip()
    
    # Read the second response (confirmation of command processing)
    confirmation = arduino.readline().decode('utf-8').strip()
    
    if response:
        print("Response from Arduino:", response)
    else:
        print("No response received")

while True:
	print(prompt)
	task = input()
	#if line not empty, print it
	time.sleep(.5)
	send_command(task)
	time.sleep(.5)  # Wait for a second before sending the next message
