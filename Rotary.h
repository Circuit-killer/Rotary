/*
 * Rotary encoder library for Arduino.
 */

#ifndef Rotary_h
#define Rotary_h

#include "Arduino.h"

// Enable this to emit codes twice per step.
// #define HALF_STEP

// Enable weak pullups
#define ENABLE_PULLUPS

// Values returned by 'process'
// No complete step yet.
#define DIR_NONE 0x0
// Clockwise step.
#define DIR_CW 0x10
// Counter-clockwise step.
#define DIR_CCW 0x20

class Rotary
{
  public:
    Rotary();
    Rotary(char, char);
    unsigned char process();
    unsigned char processMan(boolean _pin2, boolean _pin1);
    unsigned char state;
  private:
    unsigned char pin1;
    unsigned char pin2;
};

#endif
 
