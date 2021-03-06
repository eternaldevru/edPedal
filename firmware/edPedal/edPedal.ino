/*
 * edPedal v.1.0
 * Copyright © 2022 Chernov Maksim
 * Released under the MIT License.
 * GitHub - https://github.com/eternaldevru
 * Telegram - https://t.me/eternaldev_ru
 * 
 */

#include <EasyHID.h>

#define PEDAL_PIN 3 // пин, к которому подключена педаль

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
    Keyboard.press(KEY_LEFT_CONTROL, KEY_J); // сочетание нажимаемых клавиш в Discord. Коды клавиш для скетча ищите в описании библиотеки EasyHID
    pedalTimer = millis();
  }
  if (!currentState && flag && millis() - pedalTimer > 100) {
    flag = false;  
    Keyboard.release(KEY_LEFT_CONTROL, KEY_J); // сочетание нажимаемых клавиш в Discord. Коды клавиш для скетча ищите в описании библиотеки EasyHID
    pedalTimer = millis();
  }
  
  HID.tick();
  
}
