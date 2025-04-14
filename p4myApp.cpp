// myApp.cpp
// --------------------------------------------
// Description:
// This application controls one of the onboard user LEDs on a BeagleBone (or similar device).
// It demonstrates turning the LED on, off, flashing it using the system timer,
// and blinking it manually for a specified number of times.
//
// Command Line Arguments:
// The program accepts a single integer argument which specifies the LED number (0–3).
//
// Example Invocation:
// ./myApp 2
//
// This would control the LED with index 2.
//
// --------------------------------------------

#include <iostream>
#include <cstdlib>
#include "derek_LED.h"

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " <LED number>" << endl;
        return 1;
    }

    int ledNum = atoi(argv[1]);
    LED led(ledNum); // Create an LED object for the specified number

    cout << "Turning LED on..." << endl;
    led.turnOn();
    sleep(1); // Wait for 1 second

    cout << "Turning LED off..." << endl;
    led.turnOff();
    sleep(1);

    cout << "Flashing LED using system timer..." << endl;
    led.flash(200); // Flash with 200 ms interval
    sleep(3);

    cout << "Blinking LED manually 3 times..." << endl;
    led.blink(3, 500); // Blink manually 3 times with 500 ms delay

    cout << "LED Test Completed." << endl;
    return 0;
}
