/***************************************

motor.h hanya untuk deklarasi

****************************************/

#include <Arduino.h>
#ifndef MOTOR_H
#define MOTOR_H

class motor{
  private:
   int pwmPin;  //deklarasi pin PWM
   int selPin;  //deklarasi pin Selector
  
  public:
   motor(int pwmPin, int selPin);
   motor();
   void CW(int pwmPin);
   void CCW(int pwmPin);
   void setupPin();
};
#endif