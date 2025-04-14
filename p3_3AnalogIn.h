#include <iostream>
#include "AnalogIn.h"

/*
 * This application tests the AnalogIn class.
 * It instantiates an AnalogIn object with number 0, calls getNumber(), 
 * and then reads an ADC sample from the analog input.
 *
 * Example invocation:
 * ./test_analog
 */

int main() {
    AnalogIn analog(0);  // Create an AnalogIn object with number 0

    // Get the number (pin number in this case)
    std::cout << "Analog Input Number: " << analog.getNumber() << std::endl;

    // Read the ADC sample from the analog input
    int sample = analog.readAdcSample();
    std::cout << "ADC Sample Value: " << sample << std::endl;

    return 0;
}
