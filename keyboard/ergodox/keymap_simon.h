#include "action_util.h"
#define KC_SW0 KC_FN0

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   ~    |   1  |   2  |   3  |   4  |   5  |   \  |           |   '  |   6  |   7  |   8  |   9  |   0  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  | ~Fn1 |           | ~Fn3 |   Y  |   U  |   I  |   O  |   P  |   [    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LShift |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  | RShift |
     * |--------+------+------+------+------+------|  Fn0 |           | ~Fn4 |------+------+------+------+------+--------|
     * | LCtrl  |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RCtrl  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | ~Fn1 | ~Fn2 | Caps | LAlt | LGui |                                       |  Lft |  Up  |  Dn  | Rght | ~Fn4 |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | +Fn2 | Home |       | PgUp | Del  |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |  End |       | PgDn |      |      |
     *                                 | BkSp |  ESC |------|       |------| Enter| Space|
     *                                 |      |      |  Spc |       | Ins  |      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // layout: layer 0: dvorak
        // left hand
        ESC, 1,   2,   3,   4,   5,   BSLS,
        TAB, QUOT,COMM,DOT, P,   Y,   FN4,
        LSFT,A,   O,   E,   U,   I,
        LCTL,SCLN,Q,   J,   K,   X,   DEL,
        FN6, FN1, LCTL,LALT,LGUI,
                                      FN8, HOME,
                                           END,
                                 BSPC,LGUI,SPC,
        // right hand
             MINS,6,   7,   8,   9,   0,   EQL,
             FN6, F,   G,   C,   R,   L,   SLSH,
                  D,   H,   T,   N,   S,   RSFT,
             DEL, B,   M,   W,   V,   Z,   RCTL,
                       LEFT,DOWN,UP,  RGHT,FN4,
        PGUP,MPLY,
        PGDN,
        TAB, ENT, SPC
    ),

/*
    KEYMAP(  // layout: layer 0: dvorak
        // left hand
        GRV, 1,   2,   3,   4,   5,   BSLS,
        TAB, QUOT,COMM,DOT, P,   Y,   FN4,
        LSFT,A,   O,   E,   U,   I,
        LCTL,SCLN,Q,   J,   K,   X,   FN0,
        FN1, FN6, CAPS,LALT,LGUI,
                                      FN8, HOME,
                                           END,
                                 BSPC,ESC, SPC,
        // right hand
             QUOT,6,   7,   8,   9,   0,   EQL,
             FN3, F,   G,   C,   R,   L,   SLSH,
                  D,   H,   T,   N,   S,   RSFT,
             FN4, B,   M,   W,   V,   Z,   RCTL,
                       LEFT,UP,  DOWN,RGHT,FN4,
        PGUP,DEL,
        PGDN,
        INS, ENT, SPC
    ),
*/

/*
	// Old default: qwerty
    KEYMAP(  // layout: layer 0: qwerty
        // left hand
        GRV, 1,   2,   3,   4,   5,   BSLS,
        TAB, Q,   W,   E,   R,   T,   FN1,
        LSFT,A,   S,   D,   F,   G,
        LCTL,Z,   X,   C,   V,   B,   FN0,
        FN1, FN6, CAPS,LALT,LGUI,
                                      FN2, HOME,
                                           END,
                                 BSPC,ESC, SPC,
        // right hand
             QUOT,6,   7,   8,   9,   0,   EQL,
             FN3, Y,   U,   I,   O,   P,   LBRC,
                  H,   J,   K,   L,   SCLN,RSFT,
             FN4, N,   M,   COMM,DOT, SLSH,RCTL,
                       LEFT,UP,  DOWN,RGHT,FN4,
        PGUP,DEL,
        PGDN,
        INS, ENT, SPC
    ),
	*/

    KEYMAP(  // layout: layer 1: F-keys instead of numbers
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             F7,  F8,  F9,  F10, F11, F12, MINS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,RBRC,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),

    KEYMAP(  // layout: layer 2: mouse + numpad
        // left hand
        FN0, NO,  NO,  NO,  NO,  PAUS,PSCR,
        TRNS,WH_L,WH_U,WH_D,WH_R,BTN2,TRNS,
        TRNS,MS_L,MS_U,MS_D,MS_R,BTN1,
        TRNS,NO,  NO,  NO,  NO,  BTN3,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             SLCK,NLCK,EQL, PSLS,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,PDOT,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        BSPC,TRNS,BSPC
    ),

    KEYMAP(  // layout: layer 3: F-keys only
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,  
        TRNS,F13, F14, F15, F16, NO,  TRNS,
        TRNS,F17, F18, F19, F20, NO,  
        TRNS,F21, F22, F23, F24, NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  F1,  F2,  F3,  F4,  TRNS,
                  NO,  F5,  F6,  F7,  F8,  TRNS,
             TRNS,NO,  F9,  F10, F11, F12, TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),

    KEYMAP(  // layout: layer 4: F-keys + cursor
        // left hand
        FN0, F1,  F2,  F3,  F4,  F5,  F6,
        FN7, NO,  PGUP,UP,  PGDN,NO,  TRNS,
        TRNS,HOME,LEFT,DOWN,RGHT,END, 
        TRNS,NO,  NO,  END, HOME,NO,  TRNS,
        FN5, TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             F7,  F8,  F9,  F10, F11, F12, MINS,
             TRNS,NO,  PGUP,UP,  PGDN, NO,  FN7,
                  HOME,LEFT,DOWN,RGHT,END, TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS, TRNS,RSFT,RCTL
    ),
    KEYMAP(  // layout: layer 5: Workman layout
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,Q,   D,   R,   W,   B,   TRNS,
        TRNS,A,   S,   H,   T,   G,
        TRNS,Z,   X,   M,   C,   V,   TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,J,   F,   U,   P,   4,   TRNS,
                  Y,   N,   E,   O,   I,   TRNS,
             TRNS,K,   L,   TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 6: Steno for Plover
        // left hand
        FN0, NO,  NO,  NO,  NO,  NO,  NO,  
        NO,  1,   2,   3,   4,   5,   NO,  
        NO,  Q,   W,   E,   R,   T,  
        NO,  A,   S,   D,   F,   G,   NO,
        NO,  NO,  NO,  NO,  NO,  
                                      FN9, NO,  
                                           NO,  
                                 C,   V,   NO,  
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  NO,  
             NO,  6,   7,   8,   9,   0,   NO,  
                  Y,   U,   I,   O,   P,   LBRC,
             NO,  H,   J,   K,   L,   SCLN,QUOT,
                       NO,  NO,  NO,  NO,  NO,  
        TRNS,TRNS,  
        TRNS,  
        NO,  N,   M   
    ),

    KEYMAP(  // layout: layer 7: transparent on edges, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,  
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,  
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),

    KEYMAP(  // layout: layer 8: Special function-driven commands
        // left hand
        FN11,FN11,FN11,FN11,FN11,FN11,FN11,
        FN11,FN11,FN11,FN11,FN11,FN11,FN11,
        LSFT,FN11,FN11,FN11,FN11,FN11,
        FN11,FN11,FN11,FN11,FN11,FN11,FN11,
        FN11,FN11,FN11,FN11,FN11,
                                      FN11,FN11,
                                           FN11,
                                 FN11,FN10,FN11,
        // right hand
             FN11,FN11,FN11,FN11,FN11,FN11,FN11,
             FN11,FN11,FN11,FN11,FN11,FN11,FN11,
                  FN11,FN11,FN11,FN11,FN11,RSFT,
             FN11,FN11,FN11,FN11,FN11,FN11,FN11,
                       FN11,FN11,FN11,FN11,FN11,
        FN11,FN11,
        FN11,
        FN11,FN11,FN11
    ),

    KEYMAP(  // layout: layer N: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
/*
    KEYMAP(  // layout: layer N: transparent on edges, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,  
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,  
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // layout: layer N: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
    ANY_KEY,
};

enum macro_id {
    PLOVER_SWITCH,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_SET(0, ON_PRESS),                  // FN0 - set layer0 only
    ACTION_LAYER_MOMENTARY(1),                      // FN1 - push Layer1
    ACTION_LAYER_TOGGLE(2),                         // FN2 - switch to Layer2
    ACTION_LAYER_MOMENTARY(3),                      // FN3 - push Layer3
    ACTION_LAYER_TAP_TOGGLE(4),                     // FN4 - movement tap/toggle
    ACTION_DEFAULT_LAYER_SET(5),                    // FN5 - switch to Layer5
    ACTION_LAYER_TAP_TOGGLE(2),                     // FN6 - numpad
    ACTION_FUNCTION(TEENSY_KEY),                    // FN7 - Teensy key
    ACTION_LAYER_TOGGLE(6),                         // FN8 - toggle Plover
    ACTION_MACRO(PLOVER_SWITCH),                    // FN9 - Suspend/resume Plover
    ACTION_LAYER_MOMENTARY(8),                      // FN10 - Trigger the AnyKey layer
    ACTION_FUNCTION(ANY_KEY),                       // FN11 - AnyKey functional layer
};

void simon_hotkey(keyrecord_t *record, action_t action)
{
    keyevent_t event = record->event;

    switch (action.kind.id) {
	/* Key and Mods */
	case ACT_LMODS:
	case ACT_RMODS:
	    {
		uint8_t mods = (action.kind.id == ACT_LMODS) ?  action.key.mods :
								action.key.mods<<4;
		if (event.pressed) {
		    if (mods) {
			add_weak_mods(mods);
			send_keyboard_report();
		    }
		    register_code(action.key.code);
		} else {
		    unregister_code(action.key.code);
		    if (mods) {
			del_weak_mods(mods);
			send_keyboard_report();
		    }
		}
	    }
	    break;
	default:
	    print("not supported.\n");
	    break;
    }
}

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;

    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
    else if (id == ANY_KEY) {
	uint8_t col = event.key.col;
	uint8_t row = event.key.row;
	print("col = "); pdec(col); print("\n");
	print("row = "); pdec(row); print("\n");

	action_t action = { .code = ACTION_NO };

        if (col == 3 && row == 10) { // W
	    action.code = ACTION_MODS_KEY(MOD_LALT, KC_F4);
	}
        else if (col == 1 && row == 2) { // ,
	    action.code = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC);
	}
        else if (col == 1 && row == 3) { // .
	    action.code = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC);
	}
	if (action.code != ACTION_NO) {
	    simon_hotkey(record, action);
	}
    }
}

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    keyevent_t event = record->event;

    switch (id) {
        case PLOVER_SWITCH:
		return (event.pressed ?
			MACRO( D(A), D(W), D(F), D(J), D(P), U(A), U(W), U(F), U(J), U(P), END) :
			MACRO_NONE);
    }
    return MACRO_NONE;
}

