/*               CONSTANTS                    */

const int buttonCount = 9;
const int LEDPin = 13;
const int keyboardPins[buttonCount] = { 4, 5, 6, 7, 8 ,9, 10, 11, 12 };

// REF: https://www.pjrc.com/teensy/td_keyboard.html
const int keys[buttonCount] = { KEYPAD_1, KEYPAD_2, KEYPAD_3, KEYPAD_4, KEYPAD_5, KEYPAD_6, KEYPAD_7, KEYPAD_8, KEYPAD_9 };
const int modifierKey = MODIFIERKEY_CTRL; // MODIFIERKEY_SHIFT or MODIFIERKEY_CTRL
