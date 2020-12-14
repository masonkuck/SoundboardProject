/*               LOOP                   */


void loop() {
  // Check if each button fell, if so press associated key.
  for (byte i = 0; i < buttonCount; i = i + 1) {
    buttons[i].update();
    if (buttons[i].fell()){
      pressButton(keys[i]);
    }
  }
}

void pressButton(int key){
  digitalWrite(LEDPin, HIGH);
  Serial.println(key);
  
  Keyboard.press(modifierKey);
  Keyboard.press(key);
  Keyboard.send_now();
  
  Keyboard.releaseAll();
  Keyboard.send_now();

  delay(100);
  digitalWrite(LEDPin, LOW);
}
