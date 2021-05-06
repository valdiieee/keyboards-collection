/* Copyright 2021 valdydesu_
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define G_TAB       LGUI(KC_TAB)
#define G_PSCR      LGUI(KC_PSCR)
#define CA_DEL      LCTL(LALT(KC_DEL))
#define A_F4        LALT(KC_F4)
#define G_LEFT      RGUI(KC_LEFT)
#define G_PGDN      RGUI(KC_PGDN)
#define G_UP        RGUI(KC_UP)
#define G_RGHT      RGUI(KC_RGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_TAB,      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_BSLS,
        KC_LSFT,       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
                  KC_LCTL,   MO(1),   KC_ENT,             KC_CAPS,   KC_SPC,                  MO(2),   KC_RALT
    ),
    [1] = LAYOUT(
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
        G_TAB,       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_DQUO,
        _______,       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  G_PSCR,  CA_DEL,  KC_HOME, KC_END,  _______,
                  _______,   _______, _______,            _______,   _______,                 _______, _______
    ),
    [2] = LAYOUT(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
        KC_DEL,      A_F4,    KC_UP,   G_LEFT,  G_PGDN,  G_UP,    G_RGHT,  KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_QUOT,
        RESET,         KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD, KC_VOLU, KC_MPRV, KC_MPLY, KC_MNXT, KC_PGUP, KC_PGDN, _______,
                  _______,   _______, _______,            _______,   _______,                 _______, _______
    ),

};
