// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤   ├───┐   ┌───┤   ├───┘
      *                   └───┤Bsp│   │Ent├───┘
      *                       └───┘   └───┘
      */

    [0] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_EQL,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_MINUS,
                                            KC_LSFT, KC_BSPC, KC_LGUI,         KC_ENT, LT(1,KC_SPC), KC_RALT
    ),

    [1] = LAYOUT_split_3x6_3(
        KC_WAKE,   KC_EXLM, KC_AT,   KC_UP,   KC_TAB,   TG(2),                              KC_GRV,  KC_7,    KC_8,    KC_9,    KC_0,    KC_HOME,
        KC_TRNS,   KC_LPRN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_RPRN,                            KC_QUOT, KC_4,    KC_5,    KC_6,    KC_HASH, KC_END,
        KC_BSLS,   KC_LBRC, KC_RBRC, KC_DLR,  KC_LCBR,  KC_RCBR,                            KC_EQL,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_AMPR,
                                            KC_LSFT,  KC_DEL,  KC_LALT,        KC_TRNS,   KC_TRNS, KC_0
    ),

    [2] = LAYOUT_split_3x6_3(
        TO(0),    KC_MUTE, KC_TRNS, KC_UP,   KC_TRNS,   TG(2),                                KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   QK_BOOT,
        KC_TRNS,  KC_VOLU, KC_LEFT, KC_DOWN, KC_RIGHT,  KC_TRNS,                              KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,
        KC_TRNS,  KC_VOLD, KC_MPRV, KC_MPLY, KC_MNXT,   KC_TRNS,                              KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS,
                                              KC_TRNS, KC_DEL,  KC_TRNS,           KC_TRNS,  KC_TRNS, KC_0
    )
};
