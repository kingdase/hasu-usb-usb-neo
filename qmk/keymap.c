#include QMK_KEYBOARD_H

#include "keymap_german.h"   // quantum/keymap_extras/keymap_german.h


//#undef ______
//#define __TR__ KC_TRNS
//#define ______ KC_NO
#define __NO__ KC_NO

#define _NEO_ONE   0
#define _NEO_SHIFT 1
#define _NEO_THREE 2
#define _NEO_FOUR  3
#define _NEO_MOUSE 4

#define NEO_SFT   MO(_NEO_SHIFT)
#define NEO_M3    MO(_NEO_THREE)
#define NEO_M4    MO(_NEO_FOUR)
#define NEO_MOUSE LT(_NEO_MOUSE,KC_SPC)

#define DE_UE DE_UDIA
#define DE_OE DE_ODIA
#define DE_AE DE_ADIA

#define MS_UP   KC_MS_UP
#define MS_LEFT KC_MS_LEFT
#define MS_DOWN KC_MS_DOWN
#define MS_RIGHT KC_MS_RIGHT
#define MS_BTN1 KC_MS_BTN1

void eeconfig_init_user(void) {
  set_unicode_input_mode(UC_WIN);
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_NEO_ONE] = LAYOUT_iso(

KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_PSCR,  KC_SLCK,  KC_BRK,
DE_CIRC,  DE_1,     DE_2,     DE_3,     DE_4,     DE_5,     DE_6,     DE_7,     DE_8,     DE_9,     DE_0,     DE_MINS,  DE_ACUT,  KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,    KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,
KC_TAB,   DE_X,     DE_V,     DE_L,     DE_C,     DE_W,     DE_K,     DE_H,     DE_G,     DE_F,     DE_Q,     DE_SS,    DE_PLUS,  KC_ENT,     KC_DEL,   KC_END,   KC_PGDN,    KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
NEO_M3,   DE_U,     DE_I,     DE_A,     DE_E,     DE_O,     DE_S,     DE_N,     DE_R,     DE_T,     DE_D,     DE_Y,     NEO_M3,                                               KC_P4,    KC_P5,    KC_P6,
NEO_SFT,  NEO_M4,   DE_UDIA,  DE_ODIA,  DE_ADIA,  DE_P,     DE_Z,     DE_B,     DE_M,     DE_COMM,  DE_DOT,   DE_J,               NEO_SFT,              KC_UP,                KC_P1,    KC_P2,    KC_P3,    KC_PENT,
KC_LCTL,  KC_LGUI,  KC_LALT,                      NEO_MOUSE,                                        NEO_M4,   KC_RGUI,  KC_APP,   KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT,              KC_P0,              KC_PDOT
  ),

    [_NEO_SHIFT] = LAYOUT_iso(
______,             ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,     ______,   ______,   ______,
______,   UC(L'°'), DE_SECT,  UC(L'ℓ'), UC(L'»'), UC(L'«'), DE_DLR,   DE_EURO,  UC(L'„'), UC(L'“'), UC(L'”'), UC(L'—'), ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   S(DE_X),  S(DE_V),  S(DE_L),  S(DE_C),  S(DE_W),  S(DE_K),  S(DE_H),  S(DE_G),  S(DE_F),  S(DE_Q),  DE_SS,    ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   S(DE_U),  S(DE_I),  S(DE_A),  S(DE_E),  S(DE_O),  S(DE_S),  S(DE_N),  S(DE_R),  S(DE_T),  S(DE_D),  S(DE_Y),  ______,                                               ______,   ______,   ______,
______,   ______,   S(DE_UE), S(DE_OE), S(DE_AE), S(DE_P),  S(DE_Z),  S(DE_B),  S(DE_M),  UC(L'–'), UC(L'•'), S(DE_J),            ______,               ______,               ______,   ______,   ______,   ______,
______,   ______,   ______,                       ______,                                           ______,   ______,   ______,   ______,     ______,   ______,   ______,               ______,             ______
  ),
    [_NEO_THREE] = LAYOUT_iso(

______,             ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,     ______,   ______,   ______,
______,   UC(L'¹'), DE_SUP2,  DE_SUP3,  UC(L'›'), UC(L'‹'), UC(L'¢'), UC(L'¥'), DE_COMM,  UC(L'‘'), UC(L'’'), UC(L'—'), ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   UC(L'…'), DE_UNDS,  DE_LBRC,  DE_RBRC,  DE_CIRC,  DE_EXLM,  DE_LABK,  DE_RABK,  DE_EQL,   DE_AMPR,  UC(L'ſ'), ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   DE_BSLS,  DE_SLSH,  DE_LCBR,  DE_RCBR,  DE_ASTR,  DE_QUES,  DE_LPRN,  DE_RPRN,  DE_MINS,  DE_COLN,  DE_AT,    ______,                                               ______,   ______,   ______,
______,   ______,   DE_HASH,  DE_DLR,   DE_PIPE,  DE_TILD,  UC(L'`'), DE_PLUS,  DE_PERC,  DE_DQUO,  DE_QUOT,  DE_SCLN,            ______,               ______,               ______,   ______,   ______,   ______,
______,   ______,   ______,                       ______,                                           ______,   ______,   ______,   ______,     ______,   ______,   ______,               ______,             ______
  ),

    [_NEO_FOUR] = LAYOUT_iso(
______,             ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,     ______,   ______,   ______,
______,   UC(L'ª'), UC(L'º'), UC(L'№'), __NO__,   UC(L'£'), UC(L'¤'), __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   KC_PGUP,  KC_BSPC,  KC_UP,    KC_DEL,   KC_PGDN,  UC(L'¡'), DE_7,     DE_8,     DE_9,     __NO__,   __NO__,   ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   KC_HOME,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_END,   UC(L'¿'), DE_4,     DE_5,     DE_6,     __NO__,   __NO__,   ______,                                               ______,   ______,   ______,
______,   ______,   KC_ESC,   KC_TAB,   KC_INS,   KC_ENT,   __NO__,   DE_COLN,  DE_1,     DE_2,     DE_3,     DE_SCLN,            ______,               ______,               ______,   ______,   ______,   ______,
______,   ______,   ______,                       ______,                                           ______,   ______,   ______,   ______,     ______,   ______,   ______,               ______,             ______
  ),
    [_NEO_MOUSE] = LAYOUT_iso(
______,             ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,     ______,   ______,   ______,
______,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   __NO__,   __NO__,   MS_UP,    __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   __NO__,   MS_LEFT,  MS_DOWN,  MS_RIGHT, __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   ______,                                               ______,   ______,   ______,
______,   ______,   __NO__,   __NO__,   __NO__,   MS_BTN1,  __NO__,   __NO__,   __NO__,   __NO__,   ______,   ______,             ______,               ______,               ______,   ______,   ______,   ______,
______,   ______,   ______,                       ______,                                           ______,   ______,   ______,   ______,     ______,   ______,   ______,               ______,             ______
 )

};
