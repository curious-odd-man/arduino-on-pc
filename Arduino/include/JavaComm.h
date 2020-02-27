
#ifndef ARDUINO_JAVACOMM_H_
#define ARDUINO_JAVACOMM_H_

class JavaComm {
public:
	JavaComm();
	virtual ~JavaComm();
	void send(const char* data);
};

extern JavaComm g_JavaComm;

#endif /* ARDUINO_JAVACOMM_H_ */
