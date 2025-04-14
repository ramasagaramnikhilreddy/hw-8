#!/bin/bash

# This script compiles the test_all_App application.

# Clean previous build files
rm -f test_all_App

# Compile the C++ files
g++ -o test_all_App test_all_App.cpp LED.cpp GPIO.cpp AnalogIn.cpp -std=c++11

# Output message
echo "Build successful! You can now run the program using ./test_all_App"
