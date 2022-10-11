#ifdef QMK_KEYBOARD_H
#include QMK_KEYBOARD_H
#else
// only for intellisense
#include "quantum/quantum.h"
#include "user_song_list.h"
#include "config.h"
#define AUDIO_ENABLE
#endif

#include "sendstring_german.h"

#if defined(LAYER_FEEDBACK_ENABLE)
enum layers {
    _DEFAULT,
};

#if defined(AUDIO_ENABLE)
float layer_on_song[][2] = SONG(LAYER_ON_SONG);
float layer_off_song[][2] = SONG(LAYER_OFF_SONG);
#endif

#if defined(RGBLIGHT_LAYERS)
const rgblight_segment_t PROGMEM rgb_layer1[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 15, HSV_RED},
    {64, 15, HSV_RED}
);
#endif
#endif

#if defined(MODIFIER_FEEDBACK_ENABLE)
float modifier_on_song[][2] = SONG(MODIFIER_ON_SONG);
float modifier_off_song[][2] = SONG(MODIFIER_OFF_SONG);
#endif

#if defined(RGBLIGHT_LAYERS) && defined(RGBLIGHT_LAYER_BLINK)
const rgblight_segment_t PROGMEM yes_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {15, 49, HSV_GREEN},
    {79, 49, HSV_GREEN}
);
const rgblight_segment_t PROGMEM no_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {15, 49, HSV_RED},
    {79, 49, HSV_RED}
);
#endif

#if defined(RGBLIGHT_LAYERS)
const rgblight_segment_t PROGMEM _empty_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 0, HSV_RED});

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
#if defined(RGBLIGHT_LAYER_BLINK)
    no_layer,
    yes_layer,
#endif
#if defined(LAYER_FEEDBACK_ENABLE)
    rgb_layer1,
#endif
    _empty_layer
);

enum _rgb_layers {
#if defined(RGBLIGHT_LAYER_BLINK)
    NO_LAYER,
    YES_LAYER,
#endif
#if defined(LAYER_FEEDBACK_ENABLE)
    RGB_LAYER1,
#endif
    EMPTY_LAYER,
};
#endif

void keyboard_post_init_user(void) {
    // Turn off on-board leds
    setPinOutput(B0);
    writePinHigh(B0);
    setPinOutput(D5);
    writePinHigh(D5);

#if defined(RGBLIGHT_LAYERS)
    // Enable the LED layers
    rgblight_layers = rgb_layers;
#endif
}

// Until I can figure out how to use actual custom keys
#define SS_LAMBDA_ARROW MACRO_0

#define PROCESS_MACRO(key, string) \
    case key: \
        if (record->event.pressed) { \
            SEND_STRING(string); \
            return false; \
        } \
        break;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
    // If console is enabled, it will print the matrix position and status of each key pressed
    if (debug_enable) {
        uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
    }
#endif

    switch(keycode) {
        PROCESS_MACRO(SS_LAMBDA_ARROW, "=>")
    }

    return true;
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode)
    {
#if defined(AUDIO_ENABLE)
        case AU_ON:
        case AU_OFF:
        case AU_TOG:
#if defined(RGBLIGHT_LAYERS) && defined(RGBLIGHT_LAYER_BLINK)
            rgblight_blink_layer_repeat(audio_is_on() ? YES_LAYER : NO_LAYER, 100, 3);
#endif
            break;
#endif

#if defined(AUDIO_CLICKY)
        case CK_ON:
        case CK_OFF:
        case CK_TOGG:
#if defined(RGBLIGHT_LAYERS) && defined(RGBLIGHT_LAYER_BLINK)
            rgblight_blink_layer_repeat(is_clicky_on() ? YES_LAYER : NO_LAYER, 100, 3);
#endif
            break;
#endif

#if defined(MODIFIER_FEEDBACK_ENABLE)
        case KC_LEFT_CTRL:
        case KC_LEFT_SHIFT:
        case KC_LEFT_ALT:
        case KC_LEFT_GUI:
        case KC_RIGHT_CTRL:
        case KC_RIGHT_SHIFT:
        case KC_RIGHT_ALT:
        case KC_RIGHT_GUI:
            if (record->event.pressed) {
#if defined(AUDIO_ENABLE)
                PLAY_SONG(modifier_on_song);
#endif
            } else {
#if defined(AUDIO_ENABLE)
                PLAY_SONG(modifier_off_song);
#endif
            }
#endif
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
#if defined(LAYER_FEEDBACK_ENABLE)
    if (layer_state_cmp(state, _DEFAULT)) {
#if defined(AUDIO_ENABLE)
        PLAY_SONG(layer_off_song);
#endif
#if defined(RGBLIGHT_LAYERS)
        rgblight_set_layer_state(RGB_LAYER1, false);
#endif
    } else {
#if defined(AUDIO_ENABLE)
        PLAY_SONG(layer_on_song);
#endif
#if defined(RGBLIGHT_LAYERS)
        rgblight_set_layer_state(RGB_LAYER1, true);
#endif
    }
#endif
    return state;
}
