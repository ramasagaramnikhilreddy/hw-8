#include "AnalogIn.h"
#include <iostream>  // for testing purposes

AnalogIn::AnalogIn() : number(0) {}

AnalogIn::AnalogIn(unsigned int n) : number(n) {}

void AnalogIn::setNumber(unsigned int n) {
    number = n;
}

int AnalogIn::readAdcSample() {
    // Assuming code for reading from ADC (just a simulation for the example)
    std::cout << "Reading ADC sample from pin " << number << std::endl;
    return 1234;  // Sample value for demonstration
}

AnalogIn::~AnalogIn() {
    // Destructor (no specific resource to free in this simple example)
}

