#include "HCSR04.h"

HCSR04::HCSR04(int trig, int echo)
{
  _trig = trig;
  _echo = echo;
}

void HCSR04::begin()
{
  pinMode (_echo, INPUT);
  pinMode (_trig, OUTPUT);
}

int HCSR04::readCm()
{
  return readUs() / 29;
}

// Returns the number of micro seconds it took to reach an object/2 (one way trip)
int HCSR04::readUs()
{
  digitalWrite(_trig, LOW);
  delayMicroseconds(2);
  digitalWrite(_trig, HIGH);
  delayMicroseconds(5);
  digitalWrite(_trig, LOW);

  return pulseIn(_echo, HIGH, 2048) / 2; // ~35.5cm max
}

