// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _MA 0
#define _TR 1
#define _SYS 2

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MA] = LAYOUT_split_3x5_3(
    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,
    KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,
    KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,
            GUI_T(KC_ESC), CTL_T(KC_SPC), LT(_SYS,KC_TAB), LT(_TR,KC_ENT), SFT_T(KC_BSPC), ALT_T(KC_DEL)
  ),

  [_TR] = LAYOUT_split_3x5_3(
    KC_EXLM,   KC_AT,     KC_HASH,   KC_DOLLAR, KC_PERC,   KC_PLUS,   KC_1,      KC_2,      KC_3,      KC_BSLS,
    KC_DQUO,   KC_LBRC,   KC_LCBR,   KC_LPRN,   KC_CIRC,   KC_MINUS,  KC_4,      KC_5,      KC_6,      KC_EQL,
    KC_QUOT,   KC_RBRC,   KC_RCBR,   KC_RPRN,   KC_AMPR,   KC_UNDS,   KC_7,      KC_8,      KC_9,      KC_0,
                          KC_TILD,   KC_PIPE,   KC_ASTR,   _______,   KC_GRAVE,  _______
  ),

  [_SYS] = LAYOUT_split_3x5_3(
    A(KC_1),   A(KC_2),   A(KC_3),   A(KC_4),   A(KC_5),   XXXXXXX,   KC_VOLD,   KC_VOLU,   KC_MUTE,   CW_TOGG,
    G(KC_1),   G(KC_2),   G(KC_3),   G(KC_4),   G(KC_5),   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RIGHT,  XXXXXXX,
    XXXXXXX,   XXXXXXX,   KC_COPY,   KC_PASTE,  XXXXXXX,   XXXXXXX,   KC_BRID,   KC_BRIU,   XXXXXXX,   XXXXXXX,
                          _______,   _______,   _______,   _______,   _______,   QK_BOOT
  ),
};
// clang-format on
