/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

// clang-format off
enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAC_BASE] = LAYOUT_ansi_87(
     KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTL,  KC_LNPD,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,           KC_SNAP,   KC_SIRI,  RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, KC_INS,    KC_HOME,  KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS, KC_DEL,    KC_END,   KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,
     KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, KC_ROPTN, MO(MAC_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[MAC_FN] = LAYOUT_ansi_87(
     KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,             KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS),

[WIN_BASE] = LAYOUT_ansi_87(
     KC_ESC,   KC_BRID,  KC_BRIU,    KC_FILE,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_MUTE,  KC_VOLD,  KC_VOLU,             KC_TERM ,   KC_CTANA, RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,    KC_HOME,  KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,    KC_END,   KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,             KC_UP,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RGUI, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[WIN_FN] = LAYOUT_ansi_87(
     KC_TRNS,  KC_F1,    KC_F2,  KC_TASK,  KC_F4,  RGB_VAD,  RGB_VAI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_F10,   KC_F11,   KC_F12 ,            KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_WH_U,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BTN1,  KC_WH_D,  KC_BTN2,
     KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_MS_UP,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MS_LEFT,  KC_MS_DOWN,  KC_MS_RIGHT)

};

// Sets all the configured keycaps on layer 2 to RGB_CYAN.
// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//      // Get the current highest layer number.
//     if (get_highest_layer(layer_state) > 0) {
//         uint8_t layer = get_highest_layer(layer_state);
//      // loop through the keymap matrix.
//         for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
//             for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
//                // Get the led index of the keycode.
//                 uint8_t index = g_led_config.matrix_co[row][col];
//                //  Check if the led is within the led index range and keycode id greater than KC_TRNS.
//                 if (index >= led_min && index < led_max && index != NO_LED &&
//                 keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
//                     rgb_matrix_set_color(index, RGB_CYAN);
//                 }
//             }
//         }
//     }
//     return false;
// }


bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
     // Get the current highest layer number.
    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);
     // loop through the keymap matrix.
        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
               // Get the led index of the keycode.
                uint8_t index = g_led_config.matrix_co[row][col];
               // store the current keycode.
                uint16_t current_key = keymap_key_to_keycode(layer, (keypos_t){col,row});
               //  Check if the led is within the led index range and keycode id greater than KC_TRNS.
                if (index >= led_min && index < led_max && index != NO_LED &&
                current_key > KC_TRNS) {

                    switch(current_key){
                         // light up all mouse keys in RGB_GREEN.
                         case KC_MS_LEFT:
                         case KC_MS_DOWN:
                         case KC_MS_RIGHT: 
                         case KC_MS_UP:
                         rgb_matrix_set_color(index, RGB_GREEN);
                              break;
                         // light up mouse scroll buttons in magenta.
                         case KC_WH_D: 
                         case KC_WH_U: 
                              rgb_matrix_set_color(index, RGB_GOLD);
                              break;
                         // light up right and left buttons in 
                         case KC_BTN1: 
                         case KC_BTN2:
                              rgb_matrix_set_color(index, 255, 0, 102 );
                              break;
                              
                         // Light up bluetooth in bluetooth color.
                         case BT_HST1:
                         case BT_HST2:
                         case BT_HST3:
                         case BAT_LVL:
                              rgb_matrix_set_color(index, 0, 0, 255);
                              break;
                         // Light up rgb keys in Red.
                         case RGB_SPI:
                         case RGB_SPD:
                         case RGB_VAD:
                         case RGB_VAI:
                         case RGB_TOG:
                              rgb_matrix_set_color(index, RGB_RED);
                              break;
                         default:
                         rgb_matrix_set_color(index, HSV_ORANGE);
                    }

                    
                }
            }
        }
    }
    return false;
}