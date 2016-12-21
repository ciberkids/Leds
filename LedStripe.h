//
// Created by Matteo Favaro on 18/09/16.
//

#ifndef ARDUINO_MCWW_LEDSTRIPE_H
#define ARDUINO_MCWW_LEDSTRIPE_H

#include "Led.h"

class LedStrip
{
 Led m_leds[3];

 public:

  class LedStrip(Leds... params);

  template<int i>
  void on();

  template<int i>
  void off();

  template<int i>
  void toggle();

};


int main()
{
  LedStrip<Led, Led, Led> strip(Led(2), Led(3), Led(4));

  enum : int LedColors {Red = 1, Green = 2, Blue = 3};

  strip.on<Red>();
  strip.on<Blue>();
}


#endif //ARDUINO_MCWW_LEDSTRIPE_H
