/*
  Rbg_led.h - Library for controlling RGB Led.
  Created by Michael Palma July 26, 2017.
*/
#ifndef Rgb_led_h
#define Rgb_led_h

#include "Arduino.h"

class Rgb_led
{
    public:   
        Rgb_led(int pinR, int pinG, int pinB);
        void setColor(char color);
    private:
        int _pinR;
        int _pinG;
        int _pinB;
        char color;
};

#endif
