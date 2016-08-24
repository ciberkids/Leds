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
  void ledRedOn() const;
  void ledRedOff() const;
  void ledGreenOn() const;
  void ledGreenOff() const;
  void ledWhiteOn() const;
  void ledWhiteOff() const;
  void ledAllblink() const;
  void ledAllOff() const;
  void ledRedBlink() const;
  void ledRedLongBlink() const;
  void ledRedThreeLongBlink() const;
  void ledGreenBlink() const;
  void ledGreenLongBlink() const;
  void ledGreenThreeLongBlink() const;
  void ledWhiteBlink() const;
  void ledWhiteLongBlink() const;
  void ledWhiteThreeLongBlink() const;

};


#endif //ARDUINO_MCWW_LEDS_H
