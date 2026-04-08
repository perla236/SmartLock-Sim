#ifndef IDOORHARDWARE_H
#define IDOORHARDWARE_H

class IDoorHardware {
public:
    virtual ~IDoorHardware() {}
    virtual void unlock() = 0;
    virtual void lock() = 0;
};

#endif