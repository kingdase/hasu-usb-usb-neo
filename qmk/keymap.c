#include QMK_KEYBOARD_H

#include "keymap_german.h"   // quantum/keymap_extras/keymap_german.h

#include "sendstring_german.h" // essential for send_string

//#undef UNICODE_KEY_WINC
//#define UNICODE_KEY_WINC KC_F13
//#define UNICODE_KEY_WINC KR_RGUI

//#undef ______
//#define __TR__ KC_TRNS
//#define ______ KC_NO
#define __NO__ KC_NO

#define _NEO_ONE   0
#define _NEO_THREE 1
#define _NEO_FOUR  2
#define _NEO_MOUSE 3

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

enum custom_keycodes {            // Make sure have special keycode ready

  WIN_REG = SAFE_RANGE,
};

void eeconfig_init_user(void) {
  set_unicode_input_mode(UC_WIN);
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_NEO_ONE] = LAYOUT_iso(

KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_PSCR,  KC_SLCK,  KC_BRK,
DE_CIRC,  DE_1,     DE_2,     DE_3,     DE_4,     DE_5,     DE_6,     DE_7,     DE_8,     DE_9,     DE_0,     DE_MINS,  S(DE_ACUT),KC_BSPC,   KC_INS,   KC_HOME,  KC_PGUP,    KC_NLCK,  KC_PSLS,  KC_PAST,  KC_PMNS,
KC_TAB,   DE_X,     DE_V,     DE_L,     DE_C,     DE_W,     DE_K,     DE_H,     DE_G,     DE_F,     DE_Q,     DE_SS,    DE_ACUT,  KC_ENT,     KC_DEL,   KC_END,   KC_PGDN,    KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
NEO_M3,   DE_U,     DE_I,     DE_A,     DE_E,     DE_O,     DE_S,     DE_N,     DE_R,     DE_T,     DE_D,     DE_Y,     NEO_M3,                                               KC_P4,    KC_P5,    KC_P6,
KC_LSFT,  NEO_M4,   DE_UDIA,  DE_ODIA,  DE_ADIA,  DE_P,     DE_Z,     DE_B,     DE_M,     DE_COMM,  DE_DOT,   DE_J,               KC_RSFT,              KC_UP,                KC_P1,    KC_P2,    KC_P3,    KC_PENT,
KC_LCTL,  KC_LGUI,  KC_LALT,                      NEO_MOUSE,                                        NEO_M4,   KC_RGUI,  KC_APP,   KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT,              KC_P0,              KC_PDOT
  ),

    [_NEO_THREE] = LAYOUT_iso(

______,             UC_M_WI,  UC_M_WC,  UC(L'©'), ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,     ______,   ______,   ______,
______,   UC(L'¹'), DE_SUP2,  DE_SUP3,  UC(L'›'), UC(L'‹'), UC(L'¢'), UC(L'¥'), DE_COMM,  UC(L'‘'), UC(L'’'), UC(L'—'), ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   UC(L'…'), DE_UNDS,  DE_LBRC,  DE_RBRC,  DE_CIRC,  DE_EXLM,  DE_LABK,  DE_RABK,  DE_EQL,   DE_AMPR,  UC(L'ſ'), ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   DE_BSLS,  DE_SLSH,  DE_LCBR,  DE_RCBR,  DE_ASTR,  DE_QUES,  DE_LPRN,  DE_RPRN,  DE_MINS,  DE_COLN,  DE_AT,    ______,                                               ______,   ______,   ______,
______,   ______,   DE_HASH,  DE_DLR,   DE_PIPE,  DE_TILD,  UC(L'`'), DE_PLUS,  DE_PERC,  DE_DQUO,  DE_QUOT,  DE_SCLN,            ______,               ______,               ______,   ______,   ______,   ______,
______,   ______,   ______,                       ______,                                           ______,   ______,   ______,   ______,     ______,   ______,   ______,               ______,             ______
  ),

    [_NEO_FOUR] = LAYOUT_iso(
______,             ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,     ______,   ______,   ______,
______,   UC(L'ª'), UC(L'º'), UC(L'№'), __NO__,   UC(L'·'), UC(L'£'), UC(L'¤'),  __NO__,   __NO__,   __NO__,   __NO__,   ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   KC_PGUP,  KC_BSPC,  KC_UP,    KC_DEL,   KC_PGDN,  UC(L'¡'), DE_7,     DE_8,     DE_9,     __NO__,   __NO__,   ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   KC_HOME,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_END,   UC(L'¿'), DE_4,     DE_5,     DE_6,     __NO__,   __NO__,   ______,                                               ______,   ______,   ______,
______,   ______,   KC_ESC,   KC_TAB,   KC_INS,   KC_ENT,   __NO__,   DE_COLN,  DE_1,     DE_2,     DE_3,     DE_SCLN,            ______,               ______,               ______,   ______,   ______,   ______,
______,   ______,   ______,                       ______,                                           ______,   ______,   ______,   ______,     ______,   ______,   ______,               ______,             ______
  ),
    [_NEO_MOUSE] = LAYOUT_iso(
______,             ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,   ______,     ______,   ______,   ______,
______,   RESET,    WIN_REG,  __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   __NO__,   __NO__,   MS_UP,    __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   ______,   ______,     ______,   ______,   ______,     ______,   ______,   ______,   ______,
______,   __NO__,   MS_LEFT,  MS_DOWN,  MS_RIGHT, __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   __NO__,   ______,                                               ______,   ______,   ______,
______,   ______,   __NO__,   __NO__,   __NO__,   MS_BTN1,  __NO__,   __NO__,   __NO__,   __NO__,   ______,   ______,             ______,               ______,               ______,   ______,   ______,   ______,
______,   ______,   ______,                       ______,                                           ______,   ______,   ______,   ______,     ______,   ______,   ______,               ______,             ______
 )
};




#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))


#if 0
#include <print.h>
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
  bool isShift;

  isShift=get_mods() & MODS_SHIFT_MASK;

  uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);

    switch (keycode) {
    case KC_1:
      if (record->event.pressed)
      {
        if (isShift)
        {
          register_code(KC_3);
        } else
        {
          register_code(KC_1);
        }
      }
      if (! record->event.pressed)
      {
        if (isShift)
        {
          unregister_code(KC_3);
        } else
        {
          unregister_code(KC_1);
        }
      }
      return false;

    case KC_2:
      if (record->event.pressed)
      {
        if (isShift)
        {
          register_code(KC_4);
        } else
        {
          register_code(KC_2);
        }
      }
      if (! record->event.pressed)
      {
        if (isShift)
        {
          unregister_code(KC_4);
        } else
        {
          unregister_code(KC_2);
        }
      }
      return false;





    }
    return true;
}


#else

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool isShift;

  isShift=get_mods() & MODS_SHIFT_MASK;

//    uint8_t prev_mods; // to keep mod state

    inline bool my_unicode(uint16_t keycode, uint16_t new_keycode, keyrecord_t *record) {
    if (record->event.pressed)
    {
      if (isShift){
        process_unicode(new_keycode, record);
      } else {
        return true;
      }
    } else {
      unregister_code(keycode);
    }
    return false;
  };

  switch (keycode) {
    case KC_1:
      return my_unicode(keycode,UC(L'°')|QK_UNICODE,record);
    case KC_2: // § is a shifted '3'
      return my_unicode(keycode,UC(L'§')|QK_UNICODE,record);
    case KC_3:
      return my_unicode(keycode,UC(L'ℓ')|QK_UNICODE,record);
    case KC_4:
      return my_unicode(keycode,UC(L'»')|QK_UNICODE,record);
    case KC_5:
      return my_unicode(keycode,UC(L'«')|QK_UNICODE,record);
    case KC_6: // $ is a shifted 4
      return my_unicode(keycode,UC(L'$')|QK_UNICODE,record);
    case KC_7: // € is AltGr + e
      return my_unicode(keycode,UC(L'€')|QK_UNICODE,record);
    case KC_8:
      return my_unicode(keycode,UC(L'„')|QK_UNICODE,record);
    case KC_9:
      return my_unicode(keycode,UC(L'“')|QK_UNICODE,record);
    case KC_0:
      return my_unicode(keycode,UC(L'”')|QK_UNICODE,record);
    case DE_MINS: // confusing coz it's from the NEO Layer !
      return my_unicode(keycode,UC(L'—')|QK_UNICODE,record);
    case DE_COMM: // - is DE_MINS / KC_SLSH
      return my_unicode(keycode,UC(L'-')|QK_UNICODE,record);
    case DE_DOT:
      return my_unicode(keycode,UC(L'•')|QK_UNICODE,record);
    case DE_SS: // quick-hack
      return my_unicode(keycode,UC(L'ß')|QK_UNICODE,record);
    case WIN_REG:
      if(record->event.pressed)
        SEND_STRING("reg add \"HKCU\\Control Panel\\Input Method\" -v EnableHexNumpad -t REG_SZ -d 1");
      return false;
    default:
      return true;
  }
}
#endif
