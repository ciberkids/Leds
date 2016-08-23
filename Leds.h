//
// Created by Matteo Favaro on 29/07/16.
//

#ifndef ARDUINO_MCWW_LEDS_H
#define ARDUINO_MCWW_LEDS_H

#include <Arduino.h>

typedef void (*CmdCallback)();


class Leds {
  uint8_t const redLedPin_;
  uint8_t const greenLedPin_;
  uint8_t const whiteLedPin_;
  int16_t const blinktime_; // in milliseconds

 public:
  Leds(uint8_t const redLedPin, uint8_t const greenLedPin, uint8_t const whiteLedPin, uint8_t const blinktime)    ;
  void ledRedOn();
  void ledRedOff();
  void ledGreenOn();
  void ledGreenOff();
  void ledWhiteOn();
  void ledWhiteOff();
  void ledAllblink();
  void ledRedBlink();
  void ledRedLongBlink();
  void ledGreenBlink();
  void ledGreenLongBlink();
  void ledWhiteBlink();
  void ledWhiteLongBlink();

};


#endif //ARDUINO_MCWW_LEDS_H
