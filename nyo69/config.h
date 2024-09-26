// Copyright 2024 hitmefast (@hitmefast)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


//RGB Matrix and RGB Underglow
#define WS2812_DI_PIN D1	//pin of data of LEDs
#define RGB_MATRIX_LED_COUNT 76	//number of LEDs connected

#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_SLEEP true	//RBG Light turns off when PC sleeps
#define RGB_MATRIX_LAYERS true	//activates LEDs when caps or others are activated
#define RGB_MATRIX_TIMEOUT 0	//miliseconds to wait until rbg turns off
#define RGB_DISABLE_WHEN_USB_SUSPENDED true	//turn off effects when suspended

#define RGB_MATRIX_HUE_STEP 12	//defined value of hue steps
#define RGB_MATRIX_SAT_STEP 6	//defined value of saturation steps
#define RGB_MATRIX_VAL_STEP 6	//defined value of value steps
#define RGB_MATRIX_SPD_STEP

// LED Index to Flag
#define LED_FLAG_UNDERGLOW {LDS1, LDS2, LDS3, LDS4, LDS5, LDS6, LDS7, LDS8}

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  
  {LD1,  LD2,  LD3,  LD4,  LD5,  LD6,  LD7,  LD8,  LD9,  LD10, LD11, LD12, LD13, LD14, LD15},
  {LD16, LD17, LD18, LD19, LD20, LD21, LD22, LD23, LD24, LD25, LD26, LD27, LD28, XXXX, LD29},
  {LD30, LD31, LD32, LD33, LD34, LD35, LD36, LD37, LD38, LD39, LD40, LD41, LD42, LD43, LD44},
  {LD45, XXXX, LD46, LD47, LD48, LD49, LD50, LD51, LD52, LD53, LD54, LD55, LD56, LD57, LD58},
  {LD59, LD60, LD61, XXXX, XXXX, XXXX, LD62, XXXX, XXXX, LD63, LD64, LD65, LD66, LD67, LD68},
  
  
  
  
  {   5, NO_LED, NO_LED,   0 },
  { NO_LED, NO_LED, NO_LED, NO_LED },
  {   4, NO_LED, NO_LED,   1 },
  {   3, NO_LED, NO_LED,   2 }
}, {
  // LED Index to Physical Position
  { 0, 0 },  { 16, 0 },  { 32, 0 },  { 48, 0 },  { 64, 0 },  { 80, 0 },  { 96, 0 },  { 112, 0 },  { 128, 0 },  { 144, 0 },  { 160, 0 },  { 176, 0 },  { 192, 0 },  { 208, 0 },  { 224, 0 },
  { 0, 16 }, { 16, 16 }, { 32, 12 *}, { 32, 16 }{ 32, 16 }, { 48, 16 }, { 64, 16 }, { 80, 16 }, { 96, 16 }, { 112, 16 }, { 129, 12 *}, { 128, 16 }, { 144, 16 }, { 160, 16 }, { 176, 16 }, { 192, 16 }, { 210, 12 *}, { 224, 16 },
  { 0, 32 }, { 16, 32 }, { 32, 32 }, { 48, 32 }, { 64, 32 }, { 80, 32 }, { 96, 32 }, { 112, 32 }, { 128, 32 }, { 144, 32 }, { 160, 32 }, { 176, 32 }, { 192, 32 }, { 208, 32 }, { 224, 32 },
  { 0, 48 },             { 32, 48 }, { 48, 48 }, { 64, 48 }, { 80, 48 }, { 96, 48 }, { 112, 48 }, { 128, 48 }, { 144, 48 }, { 160, 48 }, { 176, 48 }, { 192, 48 }, { 208, 48 }, { 224, 48 },
  { 0, 64 }, { 16, 64 }, { 32, 64 },                                     { 96, 64 },                           { 144, 64 }, { 160, 64 }, { 176, 64 }, { 192, 64 }, { 208, 64 }, { 224, 64 }
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 2*, 4, 4, 4, 4, 4, 4, 2*, 4, 4, 4, 4, 4, 2*, 4,
  4, 4, 4, 4, 4, 4, 4, 2*, 4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 2*, 4, 4, 2*, 4, 4, 4, 4, 4, 4,
  4, 2*, 4, 4, 4, 4, 4, 4, 4, 2*, 4, 4
} };

#endif