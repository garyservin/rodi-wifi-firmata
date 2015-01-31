#ifndef __HCSR04__
#define __HCSR04__

#include <Arduino.h>

class HCSR04
{
  public:
    HCSR04(int trig, int echo);
    void begin();
    int readCm();
    int readUs();

  private:
    int _trig;
    int _echo;
};

#endif

