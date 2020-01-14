#include <time.h>
#include <stdlib.h>

#include "InputProvider.h"

InputProvider g_InputProvider;

InputProvider::InputProvider() {
	srand(time(nullptr));
}

int InputProvider::analogRead(int pin) {
	return rand() % 1024;
}

InputProvider::~InputProvider() {
	// TODO Auto-generated destructor stub
}

