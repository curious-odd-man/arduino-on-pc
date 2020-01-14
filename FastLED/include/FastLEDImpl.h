/*
 * FastLEDImpl.h
 *
 *  Created on: Jan 14, 2020
 *      Author: vvarslavans
 */

#ifndef FASTLEDIMPL_H_
#define FASTLEDIMPL_H_

#include "pixeltypes.h"

class FastLEDImpl {
public:
	FastLEDImpl();
	virtual ~FastLEDImpl();

	template<int, int, int>
	inline FastLEDImpl& addLeds(struct CRGB* leds, unsigned int num) {
		return *this;
	}

	inline void setCorrection(int) {

	}

	inline void setBrightness(int) {}

	inline void show() {}
};

extern FastLEDImpl FastLED;

#endif /* FASTLEDIMPL_H_ */
