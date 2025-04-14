#include <unistd.h>  // Make sure this is included at the top of derek_LED.cpp

void LED::blink(int num) {
    for (int i = 0; i < num; i++) {
        this->turnOn();
        sleep(1);           // Wait 1 second ON
        this->turnOff();
        sleep(1);           // Wait 1 second OFF
    }
}
