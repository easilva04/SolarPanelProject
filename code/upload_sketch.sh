#!/bin/bash

# Check if an argument (sketch name) is provided
if [ $# -eq 0 ]; then
  echo "Usage: $0 <sketch.ino>"
  exit 1
fi

SKETCH=$1

# Compile the sketch
echo "Compiling $SKETCH..."
arduino-cli compile --fqbn arduino:avr:uno $SKETCH

# Upload the sketch
echo "Uploading $SKETCH..."
arduino-cli upload -p /dev/ttyUSB0 --fqbn arduino:avr:uno $SKETCH

echo "Done."
