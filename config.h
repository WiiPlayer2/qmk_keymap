#pragma once

#include "config_common.h"

// Wiring
#undef MATRIX_COL_PINS
#undef MATRIX_ROW_PINS
#define MATRIX_COL_PINS { D0, D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F5, F6, F7, B1, B3, B2, F4 }

#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D1

// #define LED_CAPS_LOCK_PIN B0
// #define LED_NUM_LOCK_PIN D5
// #define LED_PIN_ON_STATE 0

// Split keyboard data, need to be enabled on both sides
// #define SPLIT_TRANSPORT_MIRROR
// #define SPLIT_WPM_ENABLE
#define SPLIT_LAYER_STATE_ENABLE

// RGB Lighting
#undef RGB_DI_PIN
#undef RGBLED_NUM
#define RGB_DI_PIN D3
#define RGBLED_NUM 128
#define RGBLED_SPLIT { 64, 64 }
#define RGBLIGHT_LED_MAP { \
    21, 22, 23, 24, 25, 26, 27,  0, \
    20, 28, 29, 30, 31, 32, 33,  1, \
    19, 34, 35, 36, 37, 38, 39,  2, \
    18, 40, 41, 42, 43, 44, 45,  3, \
    17, 46, 47, 48, 49, 50, 51,  4, \
    16, 52, 53, 54, 55, 56, 57,  5, \
    15, 58, 59, 60, 61, 62, 63,  6, \
    14, 13, 12, 11, 10,  9,  8,  7, \
    \
    64, 91, 90, 89, 88, 87, 86, 85, \
    65, 97, 96, 95, 94, 93, 92, 84, \
    66,103,102,101,100, 99, 98, 83, \
    67,109,108,107,106,105,104, 82, \
    68,115,114,113,112,111,110, 81, \
    69,121,120,119,118,117,116, 80, \
    70,127,126,125,124,123,122, 79, \
    71, 72, 73, 74, 75, 76, 77, 78, \
}
#define RGBLIGHT_SLEEP
// #define RGBLIGHT_LIMIT_VAL 64
#define RGBLIGHT_LIMIT_VAL 128

#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_BREATHING
#define RGBLIGHT_DEFAULT_HUE 128
#define RGBLIGHT_DEFAULT_SAT 255
#define RGBLIGHT_DEFAULT_SPD 2

// #define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYER_BLINK

// Audio
#define AUDIO_PIN B6
#define AUDIO_INIT_DELAY
// #define AUDIO_ENABLE_TONE_MULTIPLEXING
// #define AUDIO_TONE_MULTIPLEXING_RATE_DEFAULT 10
#define NO_MUSIC_MODE

#define AUDIO_CLICKY
#define AUDIO_CLICKY_FREQ_RANDOMNESS 0.5f
#define AUDIO_CLICKY_FREQ_DEFAULT 220.0f

#undef TEMPO_DEFAULT
#define TEMPO_DEFAULT 70
#define STARTUP_SONG SONG(MEGALOVANIA2_SHORT)
#define GOODBYE_SONG SONG(NO_SOUND)

// Misc.
#define LAYER_STATE_8BIT // 8 layers for now

// Custom
#define ENABLE_LAYER_FEEDBACK
