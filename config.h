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

// RGB Lighting
#undef RGB_DI_PIN
#undef RGBLED_NUM
#define RGB_DI_PIN D3
#define RGBLED_NUM 128
#define RGBLED_SPLIT { 64, 64 }
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
// #define ENABLE_LAYER_FEEDBACK
