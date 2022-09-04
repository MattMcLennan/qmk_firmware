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
     KC_BSLS, KC_QUOT, KC_Q,    KC_J,    KC_K,    KC_X,    _______,          _______,  KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,   KC_AT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LCTL,  KC_ENT,   FUNC,                    KC_ESC,  KC_SPC,  KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  // [_AUTO_SHIFTED] = LAYOUT(
  // //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
  //    KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     _______,         all non-standard
  // //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //    KC_TAB,  KC_COLN, KC_LT,    KC_GT,  KC_P,    KC_Y,                               KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_QUES,
  // //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //    KC_EXLM, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                               KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_UNDS,          exlm, non-standard
  // //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  //    KC_PERC, KC_DQT,  KC_Q,    KC_J,    KC_K,    KC_X,    _______,          _______,  KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,   KC_HASH,          perc, hash non-standard
  // //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  //                                   _______,  _______, _______,                  _______,  _______, _______
  //                               // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  // ),


  [_FUNC] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV, KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,                               KC_F6,  KC_F7,    KC_F8,   KC_F9,  KC_F10,  KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______,  _______, _______, KC_HOME,                           KC_CIRC, KC_F11,  KC_F12, _______, KC_RIGHT, KC_PAGE_UP,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,  RESET,   _______,  _______, _______, KC_END,                           _______,  KC_LEFT, _______,  _______, _______, KC_PGDN,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, _______, _______,  KC_DOWN, KC_UP,  _______, _______,          _______, _______, _______, _______,  _______, _______, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                 KC_LEFT_GUI, _______, _______,                   _______,  _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )

};

bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case KC_DLR:
        case KC_PLUS:
        case KC_LBRC:
        case KC_LCBR:
        case KC_LPRN:
        case KC_AMPR:
        case KC_EQL:
        case KC_RPRN:
        case KC_RCBR:
        case KC_RBRC:
        case KC_ASTR:
        case KC_PIPE:
        case KC_BSLS:
        case KC_AT:
            return true;
        default:
            return false;
    }
}

void autoshift_press_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
    switch(keycode) {
        case KC_DLR:
            register_code16((!shifted) ? KC_DLR : KC_TILD);
            break;
        case KC_PLUS:
            register_code16((!shifted) ? KC_PLUS : KC_1);
            break;
        case KC_LBRC:
            register_code16((!shifted) ? KC_LBRC : KC_2);
            break;
        case KC_LCBR:
            register_code16((!shifted) ? KC_LCBR : KC_3);
            break;
        case KC_LPRN:
            register_code16((!shifted) ? KC_LPRN : KC_4);
            break;
        case KC_AMPR:
            register_code16((!shifted) ? KC_AMPR : KC_5);
            break;
        case KC_EQL:
            register_code16((!shifted) ? KC_EQL : KC_6);
            break;
        case KC_RPRN:
            register_code16((!shifted) ? KC_RPRN : KC_7);
            break;
        case KC_RCBR:
            register_code16((!shifted) ? KC_RCBR : KC_8);
            break;
        case KC_RBRC:
            register_code16((!shifted) ? KC_RBRC : KC_9);
            break;
        case KC_ASTR:
            register_code16((!shifted) ? KC_ASTR : KC_0);
            break;
        case KC_PIPE:
            register_code16((!shifted) ? KC_PIPE : KC_EXLM);
            break;
        case KC_BSLS:
            register_code16((!shifted) ? KC_BSLS : KC_PERC);
            break;
        case KC_AT:
            register_code16((!shifted) ? KC_AT : KC_HASH);
            break;
       default:
            if (shifted) {
                add_weak_mods(MOD_BIT(KC_LSFT));
            }
        // & 0xFF gets the Tap key for Tap Holds, required when using Retro Shift
            register_code16((IS_RETRO(keycode)) ? keycode & 0xFF : keycode);
    }
}

void autoshift_release_user(uint16_t keycode, bool shifted, keyrecord_t *record) {
    switch(keycode) {
        case KC_DLR:
            unregister_code16((!shifted) ? KC_DLR : KC_TILD);
            break;
        case KC_PLUS:
            unregister_code16((!shifted) ? KC_PLUS : KC_1);
            break;
        case KC_LBRC:
            unregister_code16((!shifted) ? KC_LBRC : KC_2);
            break;
        case KC_LCBR:
            unregister_code16((!shifted) ? KC_LCBR : KC_3);
            break;
        case KC_LPRN:
            unregister_code16((!shifted) ? KC_LPRN : KC_4);
            break;
        case KC_AMPR:
            unregister_code16((!shifted) ? KC_AMPR : KC_5);
            break;
        case KC_EQL:
            unregister_code16((!shifted) ? KC_EQL : KC_6);
            break;
        case KC_RPRN:
            unregister_code16((!shifted) ? KC_RPRN : KC_7);
            break;
        case KC_RCBR:
            unregister_code16((!shifted) ? KC_RCBR : KC_8);
            break;
        case KC_RBRC:
            unregister_code16((!shifted) ? KC_RBRC : KC_9);
            break;
        case KC_ASTR:
            unregister_code16((!shifted) ? KC_ASTR : KC_0);
            break;
        case KC_PIPE:
            unregister_code16((!shifted) ? KC_PIPE : KC_EXLM);
            break;
        case KC_BSLS:
            unregister_code16((!shifted) ? KC_BSLS : KC_PERC);
            break;
        case KC_AT:
            unregister_code16((!shifted) ? KC_AT : KC_HASH);
            break;
         default:
            // & 0xFF gets the Tap key for Tap Holds, required when using Retro Shift
            // The IS_RETRO check isn't really necessary here, always using
            // keycode & 0xFF would be fine.
            unregister_code16((IS_RETRO(keycode)) ? keycode & 0xFF : keycode);
    }
}

