/*
 * Copyright © 2022 Chernov Maksim
 * GitHub - https://github.com/eternaldevru
 * Telegram - https://t.me/eternaldev_ru
 * 
 */

#include <EasyHID.h>

#define PEDAL_PIN 3

boolean flag;
boolean currentState;
uint32_t pedalTimer = 0;

void setup() {

  HID.begin();
  pinMode(PEDAL_PIN, INPUT_PULLUP);
  
}

void loop() {
  
  currentState = !digitalRead(PEDAL_PIN);
  
  if (currentState && !flag && millis() - pedalTimer > 100) {
    flag = true;
    Keyboard.press(KEY_LEFT_CONTROL, KEY_J);
    pedalTimer = millis();
  }
  if (!currentState && flag && millis() - pedalTimer > 100) {
    flag = false;  
    Keyboard.release(KEY_LEFT_CONTROL, KEY_J);
    pedalTimer = millis();
  }
  
  HID.tick();
  
}
