#ifdef QMK_KEYBOARD_H
#include QMK_KEYBOARD_H
#else
// only for intellisense
#include "quantum/quantum.h"
#include "user_song_list.h"
#include "config.h"
#define AUDIO_ENABLE
#endif

#if defined(ENABLE_LAYER_FEEDBACK)
enum layers {
    _DEFAULT,
};

#if defined(AUDIO_ENABLE)
float layer_on_song[][2] = SONG(LAYER_ON_SONG);
float layer_off_song[][2] = SONG(LAYER_OFF_SONG);
#endif
#endif

void keyboard_post_init_user(void) {
    // Turn off on-board leds
    setPinOutput(B0);
    writePinHigh(B0);
    setPinOutput(D5);
    writePinHigh(D5);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef CONSOLE_ENABLE
    // If console is enabled, it will print the matrix position and status of each key pressed
    if (debug_enable) {
        uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
    }
#endif
    return true;
}

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
}

layer_state_t layer_state_set_user(layer_state_t state) {
#if defined(ENABLE_LAYER_FEEDBACK)
    if (layer_state_cmp(state, _DEFAULT)) {
#if defined(AUDIO_ENABLE)
        PLAY_SONG(layer_off_song);
#endif
    } else {
#if defined(AUDIO_ENABLE)
        PLAY_SONG(layer_on_song);
#endif
    }
#endif
    return state;
}
