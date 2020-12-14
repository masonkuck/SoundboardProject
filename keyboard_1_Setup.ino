/*              SETUP                   */
#include <Bounce2.h>

Bounce buttons[buttonCount];
void setup() {
  pinMode(LEDPin, OUTPUT);
  
  // Initalize all buttons at recommented interval.
  for (byte i = 0; i < buttonCount; i = i + 1) {
    buttons[i] = Bounce();
    buttons[i].attach(keyboardPins[i], INPUT_PULLUP);
    buttons[i].interval(25); 
  }
}
