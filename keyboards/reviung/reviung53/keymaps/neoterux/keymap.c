// Copyright 2021 gtips (@gtips)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
	_QWERTY,
	_LOWER,
	_RAISE,
	_ADJUST,
    _DVORAK,
    _DLOWER,
    _DRAISE,
    _ADJUSTD,
};

enum custom_keycodes {
    KM_DVK = SAFE_RANGE,
    KM_QRT,
};

#define LOWER    MO(_LOWER)
#define DLOWER   MO(_DLOWER)
#define RAISE    MO(_RAISE)
#define DRAISE   MO(_DRAISE)
#define ADJUST   DF(_ADJUST)
#define ADJUSTD  DF(_ADJUSTD)
#define USE_DVK  DF(_DVORAK)
#define USE_QWR  DF(_QWERTY)

#define SF_SS RSFT_T(KC_SLSH)
#define SP_LO LT(LOWER, KC_SPC)
#define SP_RA LT(RAISE, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_QWERTY] = LAYOUT(
                        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_DEL,
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
    KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_ENT,   KC_ENT,
    KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,             KC_SLSH,
    KC_LCTL,  KC_LGUI,  KC_LALT,            KC_SPC,                   SP_RA,                  KC_RALT,  LOWER,    ADJUST
	),
	[_LOWER] = LAYOUT(
                        KC_GRAVE, KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_F4,    KC_PAUS,  KC_SCRL,  KC_PSCR,  _______,
    _______,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  _______,
    _______,  KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  XXXXXXX,  KC_QUOT,
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_HOME,  KC_END,   KC_PGUP,  KC_PGDN,            KC_SLSH,
    _______,  _______,  _______,               _______,                 _______,              KC_LALT,  _______,  _______
	),
	[_RAISE] = LAYOUT(
                        KC_GRAVE, KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_MUTE,  KC_VOLU,  KC_VOLD,  KC_MPLY,  _______,
    _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
    _______,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_HOME,  KC_END,   KC_QUOT,  KC_UP,    KC_SCLN,  XXXXXXX,  KC_DQUO,
    _______,  XXXXXXX,  KC_BSLS,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_RIGHT,           KC_QUES,
    _______,  _______,  _______,               _______,                 _______,              KC_LALT,  _______,  _______
	),
	[_ADJUST] = LAYOUT(
                        XXXXXXX,  USE_DVK,  KM_QRT,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,   XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,   KC_D,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,               _______,                 _______,              XXXXXXX,  XXXXXXX,  USE_QWR
	),
    /**
    * DVORAK LAYOUT'
    */
    [_DVORAK] = LAYOUT(
                        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_DEL,
    KC_TAB,   KC_SCLN,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_BSPC,
    KC_CAPS,  KC_A,     KC_O,     KC_E,     KC_U,     KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     _______,  KC_ENT,
    KC_LSFT,  KC_QUOT,  KC_Q,     KC_J,     KC_K,     KC_X,     KC_B,     KC_M,     KC_W,     KC_V,               KC_Z,
    KC_LCTL,  KC_LGUI,  KC_LALT,            KC_SPC,                   DRAISE,                 KC_RALT,  DLOWER,   ADJUSTD
	),
    [_DLOWER] = LAYOUT(
                        KC_DLR,   KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_F4,    KC_PAUS,  KC_SCRL,  KC_PSCR,  _______,
    KC_AMPR,  KC_LBRC,  KC_LCBR,  KC_RCBR,  KC_LPRN,  KC_EQL,  KC_ASTR,  KC_RPRN,  KC_PLUS,  KC_RBRC,  KC_EXLM,  KC_HASH,
    _______,  KC_MINS,  KC_BSLS,  KC_QUES,  KC_CIRC,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,
    _______,  _______,  _______,               _______,                 _______,              KC_LALT,  _______,  ADJUSTD
	),
    [_DRAISE] = LAYOUT(
                        KC_TILD,  KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_MUTE,  KC_VOLU,  KC_VOLD,  KC_MPLY,  _______,
    KC_PERC,  KC_7,     KC_5,     KC_3,     KC_1,     KC_9,     KC_0,     KC_2,     KC_4,     KC_6,     KC_8,     KC_GRV,
    _______,S(KC_MINS), KC_PIPE,  KC_SLSH,  KC_AT,    KC_HOME,  KC_END,   XXXXXXX,  KC_UP,    KC_S,     XXXXXXX,  XXXXXXX,
    _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_RIGHT,           XXXXXXX,
    _______,  _______,  _______,               _______,                 _______,              KC_LALT,  _______,  ADJUSTD
	),
    [_ADJUSTD] = LAYOUT(
                        XXXXXXX,  USE_QWR,  KM_DVK,   XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,   XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,   XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,            XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,               _______,                 _______,              XXXXXXX,  XXXXXXX,  USE_DVK
	),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case KM_DVK:
            if (record->event.pressed) {
                SEND_STRING("You are currently using the layout of DVORAK");
            }
            break;
        case KM_QRT:
            if (record->event.pressed) {
                SEND_STRING("You are currently using the layout of QWERTY");
            }
            break;
        case USE_DVK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_DVORAK);
            }
            break;
        case USE_QWR:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            break;
    }
    return true;
}
