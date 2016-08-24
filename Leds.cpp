//
// Created by Matteo Favaro on 29/07/16.
//

#include "Leds.h"

Leds::Leds( uint8_t redLedPin,
            uint8_t greenLedPin,
            uint8_t whiteLedPin,
            uint8_t blinktime) : redLedPin_(redLedPin),
                                       greenLedPin_(greenLedPin),
                                       whiteLedPin_(whiteLedPin),
                                       blinktime_(blinktime) {
  pinMode(redLedPin_,OUTPUT);
  pinMode(greenLedPin_,OUTPUT);
  pinMode(whiteLedPin_,OUTPUT);
  ledRedOff();
  ledGreenOff();
  ledWhiteOff();
}

void Leds::ledAllblink() const {
  ledRedBlink();
  ledGreenBlink();
  ledWhiteBlink();
  delay(100);
  ledWhiteBlink();
  ledGreenBlink();
}
void Leds::ledAllOff() const {
  ledRedOff();
  ledGreenOff();
  ledWhiteOff();
}

void Leds::ledRedBlink() const {
  ledRedOn();
  delay(blinktime_/3);
  ledRedOff();
}
void Leds::ledRedLongBlink() const {
  ledRedOff();
  ledRedOn();
  delay(blinktime_);
  ledRedOff();
}
void Leds::ledRedThreeLongBlink() const {
  for(int i = 0; i < 3; i++)
    ledRedLongBlink();
}
void Leds::ledGreenBlink() const {
  ledGreenOn();
  delay(blinktime_/3);
  ledGreenOff();
}
void Leds::ledGreenLongBlink() const {
  ledGreenOff();
  ledGreenOn();
  delay(blinktime_);
  ledGreenOff();
}
void Leds::ledGreenThreeLongBlink() const {
  for(int i = 0; i < 3; i++)
    ledGreenLongBlink();
}

void Leds::ledWhiteBlink() const {
  ledWhiteOn();
  delay(blinktime_/3);
  ledWhiteOff();
}
void Leds::ledWhiteLongBlink() const {
  ledWhiteOff();
  ledWhiteOn();
  delay(blinktime_);
  ledWhiteOff();
}
void Leds::ledWhiteThreeLongBlink() const {
  for(int i = 0; i < 3; i++)
    ledRedLongBlink();
}

void Leds::ledRedOn() const {
  digitalWrite(redLedPin_, HIGH);
}
void Leds::ledRedOff() const {
  digitalWrite(redLedPin_, LOW);
}

void Leds::ledGreenOn() const {
  digitalWrite(greenLedPin_, HIGH);
}

void Leds::ledGreenOff() const {
  digitalWrite(greenLedPin_, LOW);
}

void Leds::ledWhiteOn() const {
  digitalWrite(whiteLedPin_, HIGH);
}
void Leds::ledWhiteOff() const {
  digitalWrite(whiteLedPin_, LOW);
}


