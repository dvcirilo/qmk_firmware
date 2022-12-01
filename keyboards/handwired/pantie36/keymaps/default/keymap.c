#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N,
KC_M, KC_COMM, KC_DOT, RSFT_T(KC_SLSH), LT(4,KC_ESC), LALT_T(KC_TAB), LCTL_T(KC_ENT), LT(2,KC_SPC), LT(3,KC_BSPC), LT(5,KC_DEL)),
        [1] = LAYOUT(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, LSFT_T(KC_Z), KC_X, KC_C, KC_D, KC_V, KC_K,
KC_H, KC_COMM, KC_DOT, RSFT_T(KC_SLSH), LT(4,KC_ESC), LALT_T(KC_TAB), KC_TRNS, LT(2,KC_SPC), LT(3,KC_BSPC), LT(5,KC_DEL)),
        [2] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_QUOT, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_EQL, KC_MINS, KC_LBRC, KC_RBRC, KC_BSLS, KC_NO, KC_LALT, KC_ESC, KC_TRNS, KC_LGUI, KC_APP),
        [3] = LAYOUT(KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, RALT(KC_6), KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_NO, RALT(KC_GRV), RALT(KC_TILD), RALT(KC_6), KC_NO, KC_NO, KC_NO, KC_NO, RALT(KC_QUOT), KC_NO, KC_NO, RALT(KC_COMM), KC_NO, KC_NO, KC_NO, KC_NO, RALT(KC_COMM), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO),
        [4] = LAYOUT(LALT(KC_1), LALT(KC_2), LALT(KC_3), LALT(KC_4), LALT(KC_5), KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, LSA(KC_1), LSA(KC_2), LSA(KC_3), LSA(KC_4), LSA(KC_5), KC_NO, KC_NO, KC_NO, LGUI(KC_L), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, DF(0), DF(1), KC_NO, KC_NO, KC_NO),
        [5] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_PSCR, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_INS, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS)
};

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(3, KC_BSPC):
            // Immediately select the hold action when another key is pressed.
            return true;
        case LT(4, KC_ESC):
            // Immediately select the hold action when another key is pressed.
            return true;
        case LT(5, KC_DEL):
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(2, KC_SPC):
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}
