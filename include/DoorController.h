#ifndef DOORCONTROLLER_H
#define DOORCONTROLLER_H

#include "IDoorHardware.h"
#include <string>

class DoorController {
    IDoorHardware& hardware;
    std::string secretPin = "2026"; 

public:
    DoorController(IDoorHardware& hw) : hardware(hw) {}

    bool enterPin(std::string pin) {
        if (pin == secretPin) {
            hardware.unlock(); 
            return true;
        }
        return false;
    }
};

#endif