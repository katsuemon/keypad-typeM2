// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
                          TO(1),
        KC_B,             KC_C,
            KC_D,    KC_E,
        KC_F,   KC_G,     KC_H,
            KC_I,    KC_J,
        KC_K,   KC_L,     KC_M
    ),
    [1] = LAYOUT(
                          TO(2),
        _______,          _______,
            _______, _______,
        _______, _______, _______,
            _______, _______,
        _______, _______, _______
    ),
    [2] = LAYOUT(
                          TO(3),
        _______,          _______,
            _______, _______,
        _______, _______, _______,
            _______, _______,
        _______, _______, _______
    ),
    [3] = LAYOUT(
                          TO(4),
        _______,          _______,
            _______, _______,
        _______, _______, _______,
            _______, _______,
        _______, _______, _______
    ),
    [4] = LAYOUT(
                          TO(5),
        _______,          _______,
            _______, _______,
        _______, _______, _______,
            _______, _______,
        _______, _______, _______
    ),
    [5] = LAYOUT(
                          TO(6),
        _______,          _______,
            _______, _______,
        _______, _______, _______,
            _______, _______,
        _______, _______, _______
    ),
    [6] = LAYOUT(
                          TO(7),
        _______,          _______,
            _______, _______,
        _______, _______, _______,
            _______, _______,
        _______, _______, _______
    ),
    [7] = LAYOUT(
                          TO(0),
        _______,          _______,
            _______, _______,
        _______, _______, _______,
            _______, _______,
        _______, _______, _______
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    //                  Encoder 1                                     Encoder 2
    [1] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    //                  Encoder 1                                     Encoder 2};
    [2] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    //                  Encoder 1                                     Encoder 2
    [3] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    //                  Encoder 1                                     Encoder 2
    [4] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    //                  Encoder 1                                     Encoder 2
    [5] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    //                  Encoder 1                                     Encoder 2
    [6] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    //                  Encoder 1                                     Encoder 2
    [7] =   { ENCODER_CCW_CW(KC_PAGE_UP, KC_PAGE_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  }
    //                  Encoder 1                                     Encoder 2
};
#endif

#ifdef RGBLIGHT_LAYERS
const rgblight_segment_t PROGMEM rgb_layer_1st[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_CYAN}
);

const rgblight_segment_t PROGMEM rgb_layer_2nd[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_ORANGE}
);

const rgblight_segment_t PROGMEM rgb_layer_3rd[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_SPRINGGREEN}
);

const rgblight_segment_t PROGMEM rgb_layer_4th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_AZURE}
);

const rgblight_segment_t PROGMEM rgb_layer_5th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_PURPLE}
);

const rgblight_segment_t PROGMEM rgb_layer_6th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_YELLOW}
);

const rgblight_segment_t PROGMEM rgb_layer_7th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_MAGENTA}
);

const rgblight_segment_t PROGMEM rgb_layer_8th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_WHITE}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_layer_1st,
    rgb_layer_2nd,
    rgb_layer_3rd,
    rgb_layer_4th,
    rgb_layer_5th,
    rgb_layer_6th,
    rgb_layer_7th,
    rgb_layer_8th
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    rgblight_set_layer_state(5, layer_state_cmp(state, 5));
    rgblight_set_layer_state(6, layer_state_cmp(state, 6));
    rgblight_set_layer_state(7, layer_state_cmp(state, 7));
    return state;
}
#endif // RGBLIGHT_LAYERS