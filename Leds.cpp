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

void Leds::ledAllblink() {
  ledRedBlink();
  ledGreenBlink();
  ledWhiteBlink();
  delay(100);
  ledWhiteBlink();
  ledGreenBlink();
}

void Leds::ledRedBlink() {
  ledRedOn();
  delay(blinktime_/3);
  ledRedOff();
}
void Leds::ledRedLongBlink() {
  ledRedOn();
  delay(blinktime_);
  ledRedOff();
}
void Leds::ledGreenBlink() {
  ledGreenOn();
  delay(blinktime_/3);
  ledGreenOff();
}
void Leds::ledGreenLongBlink() {
  ledGreenOff();
  delay(blinktime_);
  ledGreenOn();
  delay(blinktime_);
  ledGreenOff();
}

void Leds::ledWhiteBlink() {
  ledWhiteOn();
  delay(blinktime_/3);
  ledWhiteOff();
}
void Leds::ledWhiteLongBlink() {
  ledWhiteOn();
  delay(blinktime_);
  ledWhiteOff();
}

void Leds::ledRedOn() {
  digitalWrite(redLedPin_, HIGH);
}
void Leds::ledRedOff() {
  digitalWrite(redLedPin_, LOW);
}

void Leds::ledGreenOn() {
  digitalWrite(greenLedPin_, HIGH);
}

void Leds::ledGreenOff() {
  digitalWrite(greenLedPin_, LOW);
}

void Leds::ledWhiteOn() {
  digitalWrite(whiteLedPin_, HIGH);
}
void Leds::ledWhiteOff() {
  digitalWrite(whiteLedPin_, LOW);
}


