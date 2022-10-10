#include QMK_KEYBOARD_H

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    // debug_enable=true;
    // debug_matrix=true;
    // debug_keyboard=true;
    //debug_mouse=true;

    // Turn off on-board leds
    setPinOutput(B0);
    writePinHigh(B0);
    setPinOutput(D5);
    writePinHigh(D5);
}

#ifdef CONSOLE_ENABLE
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // If console is enabled, it will print the matrix position and status of each key pressed
    if (debug_enable) {
        uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
    }
    return true;
}
#endif
