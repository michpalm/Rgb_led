/*
  Rbg_led.cpp - Library for controlling RGB Led.
  Created by Michael Palma July 26, 2017.
*/

#include "Arduino.h"
#include "Rgb_led.h" 

//Constructor for rgb_led
Rgb_led::Rgb_led(int pinR, int pinG, int pinB)
{
    pinMode(pinR, OUTPUT);
    pinMode(pinG, OUTPUT);
    pinMode(pinB, OUTPUT);  
    _pinR = pinR;
    _pinG = pinG;
    _pinB = pinB;
}

//Function to set the LED based on char
void Rgb_led::setColor(char color)
{
  //Set all pins to 0, only change the one needed
  analogWrite(_pinR, 0);
  analogWrite(_pinG, 0);
  analogWrite(_pinB, 0); 
  switch (color) {
    case 'r':
      //Red
      analogWrite(_pinR, 255);
      break;
    case 'g':
      //Green
      analogWrite(_pinG, 255);
      break;
    case 'b':  
      //Blue
      analogWrite(_pinB, 255); 
      break;
    default: 
      //Stays off!
    break;
  }
}
