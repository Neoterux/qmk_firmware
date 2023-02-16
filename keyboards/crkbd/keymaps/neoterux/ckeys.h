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
//#define KC_DL MO()
// Key to change to change layout
#define KC_CLL MO(3)
// Key to change to QWERTY
#define LYR_QWR TO(_QWERTY)
// Key to change to DVORAK
//#define LYR_DVK DF(_DVORAK)
#define LYR_DVK TO(_DVORAK)
// Key to open terminal <MACRO> ctrl + alt + T
//#define KC_TERM LCTL(LALT(KC_T))
#define KC_TERM LCA(KC_T)
// Key to make a screenshot <MACRO> shift + win + S
//#define KC_SCRN LSFT(LWIN(KC_S))
#define KC_SCRN SGUI(KC_S)
// Alt + Tab macro
#define ALT_TAB LALT(KC_TAB)

#define KC_COMP LCTL(KC_SPACE)

#ifdef ENABLE_MACRO
    #define KC_MCRO _MO(_MACRO)
#else
    #define KC_MCRO KC_3L //_______
#endif
