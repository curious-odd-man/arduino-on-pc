/*
 * Functions.h
 *
 *  Created on: Jan 14, 2020
 *      Author: vvarslavans
 */

#ifndef INCLUDE_FUNCTIONS_H_
#define INCLUDE_FUNCTIONS_H_

#include <sys/time.h>
#include <random>


template<class T>
inline static T square(T v) {
	return v * v;
}

inline unsigned long millis() {
	struct timeval tp;
	gettimeofday(&tp, NULL);
	long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	return ms;
}


inline int random(int a, int b) {
	int diff = b - a + 1;
	return rand() % diff + a;
}

inline void delay(int ms) {
	// TODO: implement
}

inline void randomSeed(int v) {
	srand(v);
}


#endif /* INCLUDE_FUNCTIONS_H_ */
