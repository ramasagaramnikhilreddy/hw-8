#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include "derek_LED.h"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "Usage: ./myBlink <LED number> blink <number of times>" << endl;
        return 1;
    }

    int ledNum = atoi(argv[1]);
    string command = argv[2];
    int times = atoi(argv[3]);

    LED led(ledNum);

    if (command == "blink") {
        led.blink(times);
    }

    return 0;
}

