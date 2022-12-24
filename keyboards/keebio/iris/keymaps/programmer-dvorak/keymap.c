#include QMK_KEYBOARD_H

enum layer_names {
    _DVORAK,
    _FUNC,
};

#define FUNC TT(_FUNC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_DLR,  KC_PLUS, KC_LBRC, KC_LCBR, KC_LPRN, KC_AMPR,                            KC_EQL,  KC_RPRN, KC_RCBR, KC_RBRC, KC_ASTR, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_SCLN, KC_COMM, KC_DOT,  KC_P,    KC_Y,                               KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_PIPE, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                               KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_QUOT, KC_Q,    KC_J,    KC_K,    KC_X,    _______,          _______,  KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,   KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LCTL,  KC_ENT,   FUNC,                    KC_ESC,  KC_SPC,  KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FUNC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV, KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,                               KC_F6,  KC_F7,    KC_F8,   KC_F9,  KC_F10,  KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______,  _______, _______, KC_HOME,                            KC_F11,  KC_F12,  KC_UP, _______, _______, KC_PAGE_UP,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  RESET,   _______,  _______, _______, KC_END,                           KC_CIRC, KC_LEFT, KC_DOWN, KC_RIGHT, _______, KC_PGDN,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_BSLS, _______,  _______, _______,  _______, _______,       _______, _______, KC_LEFT_GUI, _______,  _______, KC_AT, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______,  _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )

};

const key_override_t dollar_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_DLR, KC_TILD);
const key_override_t plus_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_PLUS, KC_1);
const key_override_t leftbracket_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, KC_2);
const key_override_t leftcurlybrace_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LCBR, KC_3);
const key_override_t leftparenthesis_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_4);
const key_override_t ampersand_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_AMPR, KC_5);
const key_override_t equals_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_EQL, KC_6);
const key_override_t rightparenthesis_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_7);
const key_override_t rightcurlybrace_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_RCBR, KC_8);
const key_override_t rightbracket_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_RBRC, KC_9);
const key_override_t asterick_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_ASTR, KC_0);
const key_override_t pipe_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_PIPE, KC_EXLM);
const key_override_t backslash_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSLS, KC_PERC);
const key_override_t at_shifted_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_AT, KC_HASH);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &dollar_shifted_key_override,
    &plus_shifted_key_override,
    &leftbracket_shifted_key_override,
    &leftcurlybrace_shifted_key_override,
    &leftparenthesis_shifted_key_override,
    &ampersand_shifted_key_override,
    &equals_shifted_key_override,
    &rightparenthesis_shifted_key_override,
    &rightcurlybrace_shifted_key_override,
    &rightbracket_shifted_key_override,
    &asterick_shifted_key_override,
    &pipe_shifted_key_override,
    &backslash_shifted_key_override,
    &at_shifted_key_override,
    NULL // Null terminate the array of overrides!
};
