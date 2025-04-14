#!/bin/bash

# This script compiles the AnalogIn application

# Clean previous build files
rm -f test_analog

# Compile the C++ files
g++ -o test_analog test_analog.cpp AnalogIn.cpp -std=c++11

# Output message
echo "Build successful! You can now run the program using ./test_analog"

