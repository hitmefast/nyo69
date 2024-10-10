//Copyright 2024 hitmefast (@hitmefast)
//SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

//Features that can be disabled, these useful options can be disabled to reduce on code size.
//#define NO_DEBUG	//disable debug print
//#define NO_PRINT	//disable print

//Disable action features
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

//RGB Matrix and RGB Underglow
#define WS2812_DI_PIN D1	//pin of data of LEDs
#define RGB_MATRIX_LED_COUNT 76	//number of LEDs connected

#define RGB_MATRIX_SLEEP true	//RBG Light turns off when PC sleeps
#define RGB_MATRIX_LAYERS true	//activates LEDs when caps or others are activated
#define RGB_MATRIX_TIMEOUT 0	//miliseconds to wait until rbg turns off

#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120	//limits max brightness
#define RGB_MATRIX_HUE_STEP 12	//defined value of hue steps
#define RGB_MATRIX_SAT_STEP 6	//defined value of saturation steps
#define RGB_MATRIX_VAL_STEP 6	//defined value of value steps
#define RGB_MATRIX_SPD_STEP 10	//defines the speed of the animations

#define RGB_MATRIX_LED_FLUSH_LIMIT 16	//limits in ms the freq of the LEDs
