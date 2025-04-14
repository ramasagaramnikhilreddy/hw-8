#!/bin/bash
# build.sh - A simple build script to compile the LED application.

# Compile the implementation file into an object file
g++ -c derek_LED.cpp -o derek_LED.o

# Compile the main application file into an object file
g++ -c myApp.cpp -o myApp.o

# Link both object files into the final executable named 'myApp'
g++ derek_LED.o myApp.o -o myApp

# Message after successful build

