//
// Created by Matteo Favaro on 18/09/16.
//

#ifndef ARDUINO_MCWW_LED_H
#define ARDUINO_MCWW_LED_H

#include <Arduino.h>

class Led
{
  unsigned char m_pin;
  bool m_status;

 public:
  Led(unsigned char const ledPin);

  bool status() const;

  void on();

  void off();

  void toggle();
};


#endif //ARDUINO_MCWW_LED_H
