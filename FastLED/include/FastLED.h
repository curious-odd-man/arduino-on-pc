/*
 * FastLED.h
 *
 *  Created on: Jan 14, 2020
 *      Author: vvarslavans
 */

#ifndef INCLUDE_FASTLED_H_
#define INCLUDE_FASTLED_H_

#define FASTLED_NAMESPACE_BEGIN
#define FASTLED_NAMESPACE_END
#define FASTLED_USING_NAMESPACE
#define LIB8STATIC __attribute__ ((unused)) static inline
#define LIB8STATIC_ALWAYS_INLINE __attribute__ ((always_inline)) static inline

#define WS2812 0

#include "led_sysdefs.h"
#include "pixeltypes.h"
#include "FastLEDImpl.h"

#endif /* INCLUDE_FASTLED_H_ */
