/**
 * @file ckeys.h
 * @author Neoterux (labfernandez2014@gmail.com)
 * @date 2021-12-21
 *
 * This file will contain a custom key macros or custom keys
 * definitions.
 *
 */

/*
    [ Custom Keys Definitions ]
*/
// Key to change to 2nd-layer
#define KC_2L MO(_LEVEL2)
// Key to change to 3rd-layer
#define KC_3L MO(_LEVEL3)
// Key to change to QWERTY
#define LYR_QWR TO(_QWERTY)
// Key to open terminal <MACRO> ctrl + alt + T
#define KC_TERM LWIN(KC_Q)
#define KC_KILL LWIN(KC_C)
// Key to make a screenshot <MACRO> shift + win + S
//#define KC_SCRN LSFT(LWIN(KC_S))
#define KC_SCRN SGUI(KC_S)
// Alt + Tab macro
#define ALT_TAB LALT(KC_TAB)

#define KC_COMP LCTL(KC_SPACE)
/** @deprecated  Use HYRPCTL*/
#define KC_MCRO MO(_HYPR)

/**
 * Hyperland Control Layer Key Switch
 */
#define HPRCTL MO(_HYPR)

/*************************
 * Hyperland macro keys  *
 *************************/
// Hyperland Quick Keys
// Launch a new selection
#define HPR_LCH LWIN(KC_R)
// Open terminal
#define HYPR_TERM LWIN(KC_Q)
// Take a screenshot
#define HYPRSHOT SGUI(KC_S)
// Toggle Floating Windows
#define HYPRTGGL LWIN(KC_V)
// Translate a window to special workspace
#define HYPRSPC LWIN(KC_P)

// HELPER KEYS that only allows me to align keys in the keymaps
#define XXXXX  XXXXXXX
#define XXXXXX XXXXXXX


