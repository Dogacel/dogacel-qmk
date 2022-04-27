#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _FN   1
#define _RAISE   2
#define _GAME 3


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_5x6(
   KC_ESC,    KC_1,    KC_2,    KC_3,   KC_4,   KC_5,                      KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,
   KC_TAB,    KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_EQL,
   KC_LSHIFT, KC_A,    KC_S,    KC_D,   KC_F,   KC_G,                      KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
   KC_LCTRL,  KC_Z,    KC_X,    KC_C,   KC_V,   KC_B,                      KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSHIFT,
                       KC_LGUI, KC_BSLS,                                                    KC_LBRC, KC_RBRC,
                               LT(_FN, KC_DEL), KC_SPC,                           KC_SPC,  LT(_FN, KC_BSPC),
                               LALT_T(KC_SPC), KC_ENTER,                           KC_ENTER, LALT_T(KC_SPC),
                               KC_LEFT, KC_DOWN,                                    KC_UP, KC_RIGHT),

[_FN] = LAYOUT_5x6(
   KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,               KC_F6,    KC_F7,       KC_F8,        KC_F9,        KC_F10,   KC_F11,
   RESET,    _______,  KC_HOME,  KC_UP,    KC_END,   KC_PGUP,             KC_PGUP,  KC_HOME,     KC_MS_UP,     KC_END,       _______,  KC_F12,
   KC_LSHIFT,_______,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_PGDN,             KC_PGDN,  KC_MS_LEFT,  KC_MS_DOWN,   KC_MS_RIGHT,  _______,  RESET,
   KC_LCTRL, _______,  _______,  KC_CAPS,  _______,  _______,             KC_WAKE,  KC_MS_BTN1,  KC_MS_BTN2,   _______,      _______,  KC_RSHIFT,
                       KC_LGUI,  KC_PSCR,                                                        KC_KB_VOLUME_DOWN,      KC_KB_VOLUME_UP,
                               LT(_FN, KC_DEL), KC_LSFT,                          KC_SPC,         LT(_FN, KC_BSPC),
                               LALT_T(KC_SPC), KC_ENTER,                           KC_ENTER, LALT_T(KC_SPC),
                               KC_LEFT, KC_DOWN,                                    KC_UP, KC_RIGHT),

[_RAISE] = LAYOUT_5x6(
   KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,               KC_F6,    KC_F7,       KC_F8,        KC_F9,        KC_F10,   KC_F11,
   RESET,    _______,  KC_HOME,  KC_UP,    KC_END,   KC_PGUP,             KC_PGUP,  KC_HOME,     KC_MS_UP,     KC_END,       _______,  KC_F12,
   KC_LSHIFT,_______,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_PGDN,             KC_PGDN,  KC_MS_LEFT,  KC_MS_DOWN,   KC_MS_RIGHT,  _______,  RESET,
   KC_LCTRL, _______,  _______,  KC_CAPS,  _______,  _______,             KC_WAKE,  KC_MS_BTN1,  KC_MS_BTN2,   _______,      _______,  KC_RSHIFT,
                       KC_LGUI,  KC_PSCR,                                                        KC_KB_VOLUME_DOWN,      KC_KB_VOLUME_UP,
                               LT(_FN, KC_DEL), KC_LSFT,                          KC_SPC,         LT(_FN, KC_BSPC),
                               LALT_T(LCTL(KC_BSPC)), KC_ENTER,                   KC_ENTER, LALT_T(KC_SPC),
                               KC_LEFT, KC_DOWN,                                    KC_UP, KC_RIGHT),

[_GAME] = LAYOUT_5x6(
   KC_5,    KC_ESC,    KC_1,    KC_2,   KC_3,   KC_4,                     KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,
   KC_T,    KC_TAB,    KC_Q,    KC_W,   KC_E,   KC_R,                     KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_EQL,
   KC_G, KC_LSHIFT,    KC_A,    KC_S,   KC_D,   KC_F,                     KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
   KC_B,  KC_LCTRL,    KC_Z,    KC_X,   KC_C,   KC_V,                     KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSHIFT,
                       KC_LGUI, KC_BSLS,                                                    KC_LBRC, KC_RBRC,
                               LT(_FN, KC_DEL), KC_SPC,                           KC_SPC,  LT(_FN, KC_BSPC),
                               LALT_T(KC_SPC), KC_ENTER,                           KC_ENTER, LALT_T(KC_SPC),
                               KC_LEFT, KC_DOWN,                                    KC_UP, KC_RIGHT)
};
