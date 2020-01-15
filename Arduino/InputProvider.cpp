#include <time.h>
#include <stdlib.h>
#include <algorithm>

#include "InputProvider.h"

static int randomAnalogOutput() {
    return rand() % 1024;
}

InputProvider g_InputProvider;

InputProvider::InputProvider() {
	srand(time(nullptr));
	std::fill_n(aInputFunctions, TOTAL_PINS, randomAnalogOutput);
}

int InputProvider::analogRead(int pin) {
	return aInputFunctions[pin]();
}

void InputProvider::setPinFunction(int pin, FnPtr fun) {
    aInputFunctions[pin] = fun;
}

InputProvider::~InputProvider() {
	// TODO Auto-generated destructor stub
}

