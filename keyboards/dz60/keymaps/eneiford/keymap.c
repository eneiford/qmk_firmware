#include QMK_KEYBOARD_H

#define _WIN 0
#define _MAC 1
#define _VIM 2
#define _RGB 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 /* _WIN LAYER
 *
 * ,-----------------------------------------------------------------------------------------.
 * | ESC |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  BKSPACE  |
 * | ----------------------------------------------------------------------------------------|
 * |  TAB  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  {  |  }  |  \   |  | 
 * | ----------------------------------------------------------------------------------------|
 * |CTRL/ESC|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |     RETURN   |
 * | ----------------------------------------------------------------------------------------|
 * |   SHIFT  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |       SHIFT      |
 * | ----------------------------------------------------------------------------------------|
 * |  CTRL |  ALT  | CTRL |  BKSPACE  | _VIM  |     SPACE      |  ALT  | WIN  | CTRL |MAC/WIN|
 * `-----------------------------------------------------------------------------------------'
*/		
	[_WIN] = LAYOUT_60_ansi_split(
	    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, 
	    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
        LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
	    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, 
	    KC_LCTL, KC_LALT, KC_LCTL, KC_BSPC, TT(_VIM), KC_SPC, KC_RALT, KC_RGUI, KC_RCTL, TG(1)
	),
 /* _MAC LAYER
 *
 * ,-----------------------------------------------------------------------------------------.
 * | ESC |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |  BKSPACE  |
 * | ----------------------------------------------------------------------------------------|
 * |  TAB  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  {  |  }  |  \   |  | 
 * | ----------------------------------------------------------------------------------------|
 * |CTRL/ESC|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |     RETURN   |
 * | ----------------------------------------------------------------------------------------|
 * |   SHIFT  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |      SHIFT       |
 * | ----------------------------------------------------------------------------------------|
 * |  CTRL |  ALT  | CMD  |  BKSPACE  | _VIM  |     SPACE      |  ALT  | CMD  | CTRL |MAC/WIN|
 * `-----------------------------------------------------------------------------------------'
*/		
	[_MAC] = LAYOUT_60_ansi_split(
	    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, 
	    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, 
	    LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, 
	    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, 
	    KC_LCTL, KC_LALT, KC_LGUI, KC_BSPC, TT(_VIM), KC_SPC, KC_RALT, KC_RGUI, KC_RCTL, KC_TRNS
	),
 /* _VIM LAYER
 *
 * ,-----------------------------------------------------------------------------------------.
 * |  `  |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 |  F10 | F11| F12 |    DEL    |
 * | ----------------------------------------------------------------------------------------|
 * |  TAB  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  | HOME| PGUP|         | 
 * | ----------------------------------------------------------------------------------------|
 * |  CTRL  |  [  |  ]  |  {  |  }  |     | LEFT| DOWN|  UP |RIGHT| END | PGDN|    RETURN    |
 * | ----------------------------------------------------------------------------------------|
 * |     (     |     |     |     |     |     |     |     |  <  |  >  |     |       )         |
 * | ----------------------------------------------------------------------------------------|
 * |  CTRL |  ALT  | CMD  |   DEL    | _VIM  |      SPACE      |  ALT  | CMD  | CTRL | _RGB  |
 * `-----------------------------------------------------------------------------------------'
*/		

	[_VIM] = LAYOUT_60_ansi_split(
	    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, 
	    KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_HOME, KC_PGUP, KC_NO, 
	    KC_LCTL, KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_END, KC_PGDN, KC_ENT, 
	    KC_LPRN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LT, KC_GT, KC_NO, KC_RPRN, 
	    KC_LCTL, KC_LALT, KC_LGUI, KC_DEL, KC_TRNS, KC_SPC, KC_RALT, KC_RGUI, KC_RCTL, MO(3)
	),
 /* _RGB LAYER
 *
 * ,-----------------------------------------------------------------------------------------.
 * |RESET|RGBTG|RGBHI|RGBHD|RBGVI|RBGVD|     |     |     |     |     |     |     |           |
 * | ----------------------------------------------------------------------------------------|
 * |       |     |     |     |     |     |     |     |     |     |      |     |     |        | 
 * | ----------------------------------------------------------------------------------------|
 * |  CTRL  |     |     |     |     |     |     |     |     |     |     |     |              |
 * | ----------------------------------------------------------------------------------------|
 * |           |     |     |     |     |     |     |     |     |     |     |                 |
 * | ----------------------------------------------------------------------------------------|
 * |       |       |      |           |       |                |       |      |      |       |
 * `-----------------------------------------------------------------------------------------'
*/		

	[_RGB] = LAYOUT_60_ansi_split(
	    RESET, RGB_TOG, RGB_HUI, RGB_HUD, RGB_VAI, RGB_VAD, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	    KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS
	)
};

const rgblight_segment_t PROGMEM my_win_layer[] = RGBLIGHT_LAYER_SEGMENTS(
       {0, 16, HSV_BLUE}
);

const rgblight_segment_t PROGMEM my_mac_layer[] = RGBLIGHT_LAYER_SEGMENTS(
       {0, 16, HSV_ORANGE}
);

const rgblight_segment_t PROGMEM my_vim_layer[] = RGBLIGHT_LAYER_SEGMENTS(
       {0, 16, HSV_SPRINGGREEN}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
       my_win_layer,
       my_mac_layer,
       my_vim_layer
);

void keyboard_post_init_user(void) {
       rgblight_layers=my_rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
       rgblight_set_layer_state(0, layer_state_cmp(state, _WIN));
       rgblight_set_layer_state(1, layer_state_cmp(state, _MAC));
       rgblight_set_layer_state(2, layer_state_cmp(state, _VIM));
       return state;
}
