#!/bin/bash

# This script compiles the application and links the necessary files

# Clean previous build files
rm -f myBlink

# Compile the C++ files
g++ -o myBlink myBlink.cpp derek_LED.cpp -std=c++11

# Output message
echo "Build successful! You can now run the program using ./myBlink"

