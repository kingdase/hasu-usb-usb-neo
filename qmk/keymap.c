/*
Copyright 2020 Kingdase

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



#include QMK_KEYBOARD_H

void eeconfig_init_user(void) {
    set_unicode_input_mode(UC_WIN);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * ______  can be used in place of KC_TRNS (transparent) *
 * XXXXXXX can be used in place of KC_NO (No Operation)  *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// quantum/keymap_extras/keymap_german.h

#include "keymap_german.h"

#define _NEO_ONE   0
#define _NEO_SHIFT 1
#define _NEO_THREE 2
#define _NEO_FOUR  3
#define _NEO_MOUSE 4

#define NEO_SHIFT MO(_NEO_SHIFT)
#define NEO_M3    MO(_NEO_THREE)
#define NEO_M4    MO(_NEO_FOUR)
#define NEO_MOUSE LT(_NEO_MOUSE,KC_SPC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: plain Qwerty without layer switching
     *         ,---------------. ,---------------. ,---------------.
     *         |F13|F14|F15|F16| |F17|F18|F19|F20| |F21|F22|F23|F24|
     * ,---.   |---------------| |---------------| |---------------| ,-----------. ,---------------. ,-------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau| |VDn|VUp|Mut|Pwr| | Help  |
     * `---'   `---------------' `---------------' `---------------' `-----------' `---------------' `-------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------. ,-------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|JPY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -| |Stp|Agn|
     * |-----------------------------------------------------------| |-----------| |---------------| |-------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +| |Mnu|Und|
     * |-----------------------------------------------------------| `-----------' |---------------| |-------|
     * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  :|  #|Retn|               |  4|  5|  6|KP,| |Sel|Cpy|
     * |-----------------------------------------------------------|     ,---.     |---------------| |-------|
     * |Shft|  <|  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /| RO|Shift |     |Up |     |  1|  2|  3|KP=| |Exe|Pst|
     * |-----------------------------------------------------------| ,-----------. |---------------| |-------|
     * |Ctl|Gui|Alt|MHEN|HNJ| Space  |H/E|HENK|KANA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |  0    |  .|Ent| |Fnd|Cut|
     * `-----------------------------------------------------------' `-----------' `---------------' `-------'
     */



//    [_QWERTZ] = LAYOUT_all(
//                      KC_F13,  KC_F14,  KC_F15,  KC_F16, KC_F17, KC_F18, KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
//    KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,               KC_PSCR, KC_SLCK, KC_PAUS,    KC_VOLD, KC_VOLU, KC_MUTE, KC_PWR,     KC_HELP,
//    DE_CIRC, DE_1,    DE_2,    DE_3,    DE_4,    DE_5,   DE_6,   DE_7,   DE_8,    DE_9,    DE_0,    KC_MINS, KC_EQL,  KC_JYEN, KC_BSPC,     KC_INS,  KC_HOME, KC_PGUP,    KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,    KC_STOP, KC_AGIN,
//    KC_TAB,  DE_Q,    DE_W,    DE _E,   DE_R,    DE_T,   DE_Z,   DE_U,   DE_I,    DE_O,    DE_P,    DE_UDIA, KC_RBRC,          KC_BSLS,     KC_DEL,  KC_END,  KC_PGDN,    KC_P7,   KC_P8,   KC_P9,   KC_PPLS,    KC_MENU, KC_UNDO,
//    KC_CAPS, DE_A,    DE_S,    DE_D,    DE_F,    DE_G,   DE_H,   DE_J,   DE_K,    DE_L,    DE_ODIA, DE_ADIA,          KC_NUHS, KC_ENT,                                    KC_P4,   KC_P5,   KC_P6,   KC_PCMM,    KC_SLCT, KC_COPY,
//    KC_LSFT, KC_NUBS, DE_Y,    DE_X,    DE_C,    DE_V,   DE_B,   DE_N,   DE_M,    DE_COMM, DE_DOT,  KC_SLSH,          KC_RO,   KC_RSFT,              KC_UP,               KC_P1,   KC_P2,   KC_P3,   KC_PEQL,    KC_EXEC, KC_PSTE,
//    KC_LCTL, KC_LGUI, KC_LALT, KC_MHEN, KC_HANJ,         KC_SPC,         KC_HAEN, KC_HENK, KC_KANA, KC_RALT, KC_RGUI, KC_APP,  KC_RCTL,     KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,            KC_PDOT, KC_PENT,    KC_FIND, KC_CUT
//    ),

    [_NEO_ONE] = LAYOUT_all(
                      KC_F13,  KC_F14,  KC_F15,  KC_F16, KC_F17, KC_F18, KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,
    KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,  KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,               KC_PSCR, KC_SLCK, KC_PAUS,    KC_VOLD, KC_VOLU, KC_MUTE, KC_PWR,     KC_HELP,
    DE_CIRC, DE_1,    DE_2,    DE_3,    DE_4,    DE_5,   DE_6,   DE_7,   DE_8,    DE_9,    DE_0,    KC_MINS, KC_EQL,  KC_JYEN, KC_BSPC,     KC_INS,  KC_HOME, KC_PGUP,    KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,    KC_STOP, KC_AGIN,
    KC_TAB,  DE_X,    DE_V,    DE_L,    DE_C,    DE_W,   DE_K,   DE_H,   DE_G,    DE_F,    DE_Q,    DE_SS  , KC_RBRC,          KC_BSLS,     KC_DEL,  KC_END,  KC_PGDN,    KC_P7,   KC_P8,   KC_P9,   KC_PPLS,    KC_MENU, KC_UNDO,
    NEO_M3 , DE_U,    DE_I,    DE_A,    DE_E,    DE_O,   DE_S,   DE_N,   DE_R,    DE_T,    DE_D   , DE_Y,             NEO_M3,  KC_ENT,                                    KC_P4,   KC_P5,   KC_P6,   KC_PCMM,    KC_SLCT, KC_COPY,
    NEO_SHIFT,NEO_M4, DE_UDIA, DE_ODIA, DE_ADIA, DE_P,   DE_Z,   DE_B,   DE_M,    DE_COMM, DE_DOT,  KC_SLSH,          KC_RO,   NEO_SHIFT,              KC_UP,             KC_P1,   KC_P2,   KC_P3,   KC_PEQL,    KC_EXEC, KC_PSTE,
    KC_LCTL, KC_LGUI, KC_LALT, KC_MHEN, KC_HANJ,         NEO_MOUSE,      KC_HAEN, KC_HENK, KC_KANA, NEO_M4,  KC_RGUI, KC_APP,  KC_RCTL,     KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,            KC_PDOT, KC_PENT,    KC_FIND, KC_CUT
    ),

    [_NEO_SHIFT] = LAYOUT_all(
                      ______,  ______,  ______,  ______, ______, ______, ______,  ______,  ______,  ______,  ______,  ______,
    ______,           ______,  ______,  ______,  ______, ______, ______, ______,  ______,  ______,  ______,  ______,  ______,               ______,______,______,    ______,______,______,______,    ______,
    ______, ______,   DE_SECT, UC(L'ℓ'),UC(L'»'),UC(L'«'),DE_DLR,DE_EURO,UC(L'„'),UC(L'“'),UC(L'”'),UC(L'—'),______,  ______, ______,       ______,______,______,    ______,______,______,______,    ______,______,
    ______,  S(DE_X), S(DE_V),  S(DE_L), S(DE_C), S(DE_W),S(DE_K),S(DE_H),S(DE_G),S(DE_F),S(DE_Q), DE_SS  ,  ______,          ______,       ______,______,______,    ______,______,______,______,    ______,______,
    ______ , S(DE_U), S(DE_I),  S(DE_A), S(DE_E), S(DE_O),S(DE_S),S(DE_N),S(DE_R),S(DE_T),S(DE_D), S(DE_Y),           ______, ______,                                ______,______,______,______,    ______,______,
    ______, ______,S(DE_UDIA),S(DE_ODIA),S(DE_ADIA),S(DE_P),S(DE_Z),S(DE_B),S(DE_M),______, ______, ______,           ______, ______,              ______,           ______,______,______,______,    ______,______,
    ______, ______, ______, ______, ______,             ______,          ______,    ______, ______, ______,  ______,  ______, ______,       ______,______,______,    ______,       ______,______,    ______,______
    ),

    [_NEO_THREE] = LAYOUT_all(
                      ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______, ______,  ______,  ______,
    ______,           ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______, ______,  ______,  ______,                ______,______,______,    ______,______,______,______,    ______,
    ______,  ______, DE_SUP2, DE_SUP3,  ______, ______, ______,  ______,  ______, ______,  ______, ______,  ______,  ______, ______,        ______,______,______,    ______,______,______,______,    ______,______,
    ______,  ______,  ______, DE_LBRC, DE_RBRC, ______,DE_EXLM,  DE_LABK,DE_RABK, DE_EQL, DE_AMPR, ______,  ______,          ______,        ______,______,______,    ______,______,______,______,    ______,______,
    ______, DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR,DE_ASTR,DE_QUES, DE_LPRN, DE_RPRN, ______,  ______, DE_AT,            ______, ______,                                 ______,______,______,______,    ______,______,
    ______,  ______, DE_HASH, DE_DLR,  DE_PIPE,DE_TILD, ______, DE_PLUS, DE_PERC, ______,  ______, ______,           ______, ______,               ______,           ______,______,______,______,    ______,______,
    ______,  ______,  ______,  ______,  ______,         ______,           ______, ______,  ______, ______,  ______,  ______, ______,        ______,______,______,    ______,       ______,______,    ______,______
    ),


    [_NEO_FOUR] = LAYOUT_all(
                      ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______, ______, ______, ______,
    ______,           ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______, ______, ______, ______,             ______,______,______,    ______,______,______,______,    ______,
    ______,  ______,  ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______, ______, ______, ______, ______,     ______,______,______,    ______,______,______,______,    ______,______,
    ______,  KC_PGUP, KC_BSPC, KC_UP,   KC_DEL, KC_PGDN,______,  DE_7,    DE_8,   DE_9,    DE_PLUS,DE_MINS,______,         ______,     ______,______,______,    ______,______,______,______,    ______,______,
    ______,  KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT,KC_END, ______,  DE_4,    DE_5,   DE_6  ,  DE_COMM,DE_DOT,         ______, ______,                              ______,______,______,______,    ______,______,
    ______,  ______,  KC_ESC,  KC_TAB,  KC_INS, KC_ENT, ______,  DE_1,    DE_2,   DE_3  ,  ______, ______,         ______, ______,            ______,           ______,______,______,______,    ______,______,
    ______,  ______,  ______,  ______,  ______,         DE_0,             ______, ______,  ______, ______, ______, ______, ______,     ______,______,______,    ______,       ______,______,    ______,______
    ),


    [_NEO_MOUSE] = LAYOUT_all(
                      ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______, ______, ______, ______,
    ______,           ______,  ______,  ______, ______, ______,  ______,  ______, ______,  ______, ______, ______, ______,             ______,______,______,    ______,______,______,______,    ______,
    ______,  UC_M_WI,UC_M_WC,UC(L'©'),  ______, ______, ______,  ______,  ______, ______,  ______, ______, ______, ______, ______,     ______,______,______,    ______,______,______,______,    ______,______,
    ______,  ______,  ______,KC_MS_UP,  ______, ______, ______,  ______,  ______, ______,  ______, ______, ______,         ______,     ______,______,______,    ______,______,______,______,    ______,______,
    ______,______,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,______,______,______, ______, ______,  ______, ______,         ______, ______,                              ______,______,______,______,    ______,______,
    ______,  ______,  ______,  ______,  ______, KC_MS_BTN1,______,______, ______, ______,  ______, ______,         ______, ______,            ______,           ______,______,______,______,    ______,______,
    ______,  ______,  ______,  ______,  ______,         ______,           ______, ______,  ______, ______, ______, ______, ______,     ______,______,______,    ______,       ______,______,    ______,______
    ),

};
