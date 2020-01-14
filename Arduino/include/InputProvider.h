#ifndef INPUTPROVIDER_H_
#define INPUTPROVIDER_H_

class InputProvider {
public:
	InputProvider();
	int analogRead(int pin);
	virtual ~InputProvider();
};



extern InputProvider g_InputProvider;

inline int analogRead(int pin) {
	return g_InputProvider.analogRead(pin);
}

#endif /* INPUTPROVIDER_H_ */
