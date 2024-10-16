// #include "Arduino.h"
#ifndef MOTOR_H
#define MOTOR_H
class Motor{
  private:
    int pwmPin;
    int selPin;

  public:
    Motor(int pwmPin, int selPin);
    Motor();
    void CW(int pwmPin);
    void CCW(int pwmPin);
    void setupPin();
};
#endif