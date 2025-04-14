// myApp.cpp
// Description: This application demonstrates how to use the LED class to control user LEDs on the BeagleBone.
// Command Line Arguments: <LED number>
// Example Usage: ./myApp 1

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
    LED led(ledNum);

    cout << "Turning LED on..." << endl;
    led.turnOn();
    sleep(1);

    cout << "Turning LED off..." << endl;
    led.turnOff();
    sleep(1);

    cout << "Flashing LED..." << endl;
    led.flash(200);
    sleep(3);

    cout << "Blinking LED 3 times..." << endl;
    led.blink(3, 500);

    cout << "LED Test Completed." << endl;
    return 0;
}
