// derek_LED.h
#ifndef DEREK_LED_H
#define DEREK_LED_H

#include <string>

class LED {
private:
    std::string path;
    int number;

public:
    LED(int number);                      // Constructor
    void turnOn();                        // Turn the LED on
    void turnOff();                       // Turn the LED off
    void flash(int delayms);             // Flash the LED
    void outputState();                  // Output current state of the LED
    void blink(int n, int delayms);      // Blink n times
    ~LED();                              // Destructor
};

#endif

