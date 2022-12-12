#include QMK_KEYBOARD_H

enum layer_names {
  _BASE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
   JS_BUTTON0,   JS_BUTTON1,   JS_BUTTON2,   JS_BUTTON3,  JS_BUTTON4,  JS_BUTTON5,  _______, _______, _______, _______, _______, _______,
   JS_BUTTON6,   JS_BUTTON7,   JS_BUTTON8,   JS_BUTTON9,  JS_BUTTON10, JS_BUTTON11, _______, _______, _______, _______, _______, _______,
   JS_BUTTON12,  JS_BUTTON13,  JS_BUTTON14,  JS_BUTTON15, JS_BUTTON16, JS_BUTTON17, _______, _______, _______, _______, _______, _______,
   JS_BUTTON18,  JS_BUTTON19,  JS_BUTTON20,  JS_BUTTON21, JS_BUTTON22, JS_BUTTON23, _______, _______, _______, _______, _______, _______,
   JS_BUTTON24,  JS_BUTTON25,  JS_BUTTON26,  JS_BUTTON27, JS_BUTTON28, JS_BUTTON29, _______, _______, _______, _______, _______, _______
),
};
