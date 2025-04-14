// derek_LED.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include "derek_LED.h"

using namespace std;

LED::LED(int number) {
    this->number = number;
    this->path = "/sys/class/leds/beaglebone:green:usr" + to_string(number) + "/";
}

void LED::turnOn() {
    ofstream fs;
    fs.open((path + "brightness").c_str());
    fs << "1";
    fs.close();
}

void LED::turnOff() {
    ofstream fs;
    fs.open((path + "brightness").c_str());
    fs << "0";
    fs.close();
}

void LED::flash(int delayms) {
    ofstream fs;
    fs.open((path + "trigger").c_str());
    fs << "timer";
    fs.close();
    fs.open((path + "delay_on").c_str());
    fs << delayms;
    fs.close();
    fs.open((path + "delay_off").c_str());
    fs << delayms;
    fs.close();
}

void LED::outputState() {
    ifstream fs;
    fs.open((path + "brightness").c_str());
    string line;
    getline(fs, line);
    cout << "The LED state is: " << line << endl;
    fs.close();
}

void LED::blink(int n, int delayms) {
    for (int i = 0; i < n; i++) {
        this->turnOn();
        usleep(delayms * 1000);
        this->turnOff();
        usleep(delayms * 1000);
    }
}

LED::~LED() {
    this->turnOff();
}
