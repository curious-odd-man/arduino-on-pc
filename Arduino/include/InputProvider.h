#ifndef INPUTPROVIDER_H_
#define INPUTPROVIDER_H_

#include "ArduinoConstants.h"

constexpr int TOTAL_PINS = NUM_DIGITAL_PINS + NUM_ANALOG_INPUTS;

class InputProvider {
public:
    typedef int (*FnPtr)();

    InputProvider();
    int analogRead(int pin);
    void setPinFunction(int pin, FnPtr fun);

    virtual ~InputProvider();

private:
    FnPtr aInputFunctions[TOTAL_PINS];


};

extern InputProvider g_InputProvider;

inline int analogRead(int pin) {
    return g_InputProvider.analogRead(pin);
}

#endif /* INPUTPROVIDER_H_ */
