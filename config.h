#include "config_common.h"

#undef MATRIX_COL_PINS
#undef MATRIX_ROW_PINS
#define MATRIX_COL_PINS { D0, D4, C6, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F5, F6, F7, B1, B3, B2, B6 }

#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D1

#define LED_CAPS_LOCK_PIN B0
#define LED_NUM_LOCK_PIN D5
#define LED_PIN_ON_STATE 0
