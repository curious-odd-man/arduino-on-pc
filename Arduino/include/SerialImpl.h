/*
 * SerialImpl.h
 *
 *  Created on: Jan 14, 2020
 *      Author: vvarslavans
 */

#ifndef SERIALIMPL_H_
#define SERIALIMPL_H_

#include <stdio.h>
#include <iostream>
using namespace std;

class SerialImpl {
public:
	SerialImpl();
	virtual ~SerialImpl();

	void begin(int baud) {}

	template <class T> inline void println(T v);
	template <class T> inline void print(T v);
};

template <class T> inline void SerialImpl::println(T v) {
	std::cout << v << std::endl;
}

template <class T> inline void SerialImpl::print(T v) {
	std::cout << v;
}

template <> inline void SerialImpl::print<uint8_t>(uint8_t v) {
	std::cout << (int)v ;
}

template <> inline void SerialImpl::println<uint8_t>(uint8_t v) {
	std::cout << (int)v << std::endl;
}


extern SerialImpl Serial;

#endif /* SERIALIMPL_H_ */
