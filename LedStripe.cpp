//
// Created by Matteo Favaro on 18/09/16.
//

#include "LedStripe.h"


class LedStrip(Leds... params)
: m_leds(std::make_tuple(params)
    {}

template<int i>
void LedStrip::on()
{
  std::get<i>(m_leds).on();
}

template<int i>
void LedStrip::off()
{
  std::get<i>(m_leds).off();
}

template<int i>
void LedStrip::toggle()
{
  std::get<i>(m_leds).toggle();
}