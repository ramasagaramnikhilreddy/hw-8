derek_LED.h
#ifndef DEREK_LED_H
#define DEREK_LED_H

#include <string>

class LED {
private:
    std::string path;
    int number;

public:
    LED(int number);
    virtual void turnOn();
    virtual void turnOff();
    virtual void blink(int num);  // New function prototype
    virtual ~LED();
};

#endif
derek_LED.cpp
#include "derek_LED.h"
#include <fstream>
#include <iostream>
#include <unistd.h> // For sleep()

using namespace std;

LED::LED(int number) {
    this->number = number;
    this->path = "/sys/class/leds/beaglebone:green:usr" + to_string(number) + "/";
}

void LED::turnOn() {
    ofstream fs;
    fs.open((this->path + "brightness").c_str());
    fs << "1";
    fs.close();
}

void LED::turnOff() {
    ofstream fs;
    fs.open((this->path + "brightness").c_str());
    fs << "0";
    fs.close();
}

void LED::blink(int num) {  // New blink function
    for (int i = 0; i < num; ++i) {
        this->turnOn();
        sleep(1);
        this->turnOff();
        sleep(1);
    }
}

LED::~LED() {}
