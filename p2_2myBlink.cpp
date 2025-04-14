/*
 * myBlink.cpp
 *
 * Description:
 * This application blinks a specified USR LED on the BeagleBone Black for a specified number of times.
 * It accepts two command-line arguments: the LED number (USR0 to USR3) and the number of times the LED should blink.
 * The LED will turn ON for 1 second and OFF for 1 second for each blink.
 *
 * Command-line Arguments:
 * 1. LED number (integer): LED to blink (0 to 3).
 * 2. Number of blinks (integer): The number of times the LED should blink.
 *
 * Example invocation:
 * ./myBlink 0 5  // Blink USR0 LED 5 times
 */

#include <iostream>
#include <cstdlib>
#include "derek_LED.h"

using namespace std;

int main(int argc, char* argv[]) {
    // Check if correct number of arguments is passed
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <LED number> <number of blinks>" << endl;
        return 1;
    }

    // Parse arguments
    int ledNumber = atoi(argv[1]);
    int numBlinks = atoi(argv[2]);

    // Validate LED number
    if (ledNumber < 0 || ledNumber > 3) {
        cerr << "Invalid LED number. Valid values are 0 to 3." << endl;
        return 1;
    }

    // Create LED object
    LED led(ledNumber);

    // Blink the LED
    led.blink(numBlinks);

    return 0;
}

