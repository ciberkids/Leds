//
// Created by Matteo Favaro on 18/09/16.
//

#include "Led.h"


Led::Led(unsigned char const ledPin) : m_pin(ledPin)
{
    pinMode(ledPin, OUTPUT);
    m_status=false;
    off();
}

bool Led::status() const
{
  return m_status;
}

void Led::on()
{
  if (!m_status) {
    m_status = true;
    digitalWrite(m_pin, HIGH);
  }
}

void Led::off()
{
  if (m_status) {
    m_status = false;
    digitalWrite(m_pin, LOW);
  }
}

void Led::toggle()
{
  m_status = !m_status;
  digitalWrite(m_pin, m_status ? HIGH : LOW);
}