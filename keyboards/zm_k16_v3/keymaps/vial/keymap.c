#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _BL: (Base Layer) Default Numpad Layer
     * ,-------------------.
     * |LAYR| /  | *  |BACK |
     * |----|----|----|-----|
     * | 7  | 8  | 9  |  -  |
     * |----|----|----|-----|
     * | 4  | 5  | 6  |  +  |
     * |----|----|----|-----|
     * | 1  | 2  | 3  | En  |
     * `--------------------'
     */
    [0] = LAYOUT_zm_k16(
        KC_A, KC_B, KC_C, KC_D,
        KC_E, KC_F, KC_G, KC_H,
        KC_I, KC_J, KC_K, KC_L,
        KC_M, KC_N, KC_O, KC_P,
        KC_MUTE)};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif