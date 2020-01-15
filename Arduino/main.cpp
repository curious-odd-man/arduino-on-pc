#include "Arduino.h"

int oscilatingRange() {
    static int v = 0;
    return (++v) % 1024;
}

int main(int argc, const char ** argv) {
    g_InputProvider.setPinFunction(A0, oscilatingRange);
	setup();
	while (true) {
	    delay(5);       // a bit slow down. Arduino is not so fast
		loop();
	}
	return 0;
}
