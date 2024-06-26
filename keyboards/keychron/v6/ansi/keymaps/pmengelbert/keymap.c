/* #include "features/achordion.h" */
#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LCTL_T(KC_F)

// Right-hand home row mods
#define HOME_J RCTL_T(KC_J)
#define HOME_K RSFT_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

#define SYM_SPC LT(SYMBOLS, KC_SPC)

enum layer {
  HOME,
  SYMBOLS,
  MOVEMENT,
  MEDIA_CTL,
};

/* void matrix_scan_user(void) { */
/*   achordion_task(); */
/* } */

/* bool process_record_user(uint16_t keycode, keyrecord_t* record) { */
/*   if (!process_achordion(keycode, record)) { return false; } */
/*   // Your macros ... */

/*   return true; */
/* } */



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
	[HOME] = LAYOUT_ansi_108(
KC_ESC,   KC_F1, KC_F2, KC_F3, KC_F4, 	KC_F5, KC_F6, KC_F7, KC_F8,   KC_F9, KC_F10, KC_F11, KC_F12,   KC_NO, KC_NO, RGB_MOD,   KC_F13, KC_F14, KC_F15, KC_F16,
KC_GRV,   KC_1, KC_2, KC_3, KC_4, KC_5,           KC_6, KC_7, KC_8, KC_9, KC_0,               KC_MINS, KC_EQL, KC_BSPC,    KC_INS, KC_HOME, KC_PGUP,   KC_NUM, KC_PSLS, KC_PAST, KC_PMNS,
KC_TAB,   KC_Q, KC_W, KC_E, KC_R, KC_T,           KC_Y, KC_U, KC_I, KC_O, KC_P,               KC_LBRC, KC_RBRC, KC_BSLS,   KC_DEL, KC_END, KC_PGDN,    KC_P7, KC_P8, KC_P9,
KC_LCTL,  HOME_A, HOME_S, HOME_D, HOME_F, KC_G,   KC_H, HOME_J, HOME_K, HOME_L, HOME_SCLN,    KC_QUOT, KC_ENT,                                         KC_P4, KC_P5, KC_P6, KC_PPLS,
KC_LSFT,  KC_Z, KC_X, KC_C, KC_V, KC_B,           KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,       KC_RSFT, KC_UP,                                          KC_P1, KC_P2, KC_P3,
KC_CAPS, KC_LGUI, KC_LCTL,          SYM_SPC, MO(MOVEMENT),           KC_ROPT, MO(MEDIA_CTL), KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT,                KC_P0, KC_PDOT, KC_PENT
),
	
	[SYMBOLS] = LAYOUT_ansi_108(
KC_TRNS,   DT_PRNT, DT_DOWN, DT_UP, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS,   KC_1, KC_2, KC_3, KC_4, KC_5,           KC_6, KC_7, KC_8, KC_9, KC_0,               KC_CIRC, KC_DLR, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
KC_ASTR,  KC_LBRC, KC_RBRC, KC_LCBR, KC_RCBR, KC_EXLM,   KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_AMPR,    KC_PIPE, KC_TRNS,                                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_HASH,  KC_TILD, KC_AT, KC_LPRN, KC_RPRN, KC_PERC,           KC_MINS, KC_EQL, KC_PLUS, KC_TRNS, KC_BSLS,       KC_TRNS, KC_TRNS,                                          KC_TRNS, KC_TRNS, KC_TRNS,
CW_TOGG, KC_TRNS, KC_TRNS,          KC_UNDS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS
),

	[MOVEMENT] = LAYOUT_ansi_108(
KC_TRNS,   DT_PRNT, DT_DOWN, DT_UP, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS,   KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,           KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,               KC_F11, KC_F12, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
KC_ASTR,  KC_TAB, KC_ESC, KC_DEL, KC_BSPC, KC_EXLM,   KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_ENT,    KC_PIPE, KC_TRNS,                                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_HASH,  KC_TILD, KC_AT, KC_LPRN, KC_RPRN, KC_PERC,           KC_MINS, KC_EQL, KC_PLUS, KC_TRNS, KC_BSLS,       KC_TRNS, KC_TRNS,                                          KC_TRNS, KC_TRNS, KC_TRNS,
CW_TOGG, KC_TRNS, KC_TRNS,          KC_UNDS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS
),

	[MEDIA_CTL] = LAYOUT_ansi_108(
KC_TRNS,   KC_BRID, KC_BRIU, LGUI(KC_TAB), LGUI(KC_E), 	RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY,   KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,   QK_BOOT, EE_CLR, RGB_TOG,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
RGB_TOG,   RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS,  RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS,                                         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           NK_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS,                                          KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,                KC_TRNS, KC_TRNS, KC_TRNS
),    
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

