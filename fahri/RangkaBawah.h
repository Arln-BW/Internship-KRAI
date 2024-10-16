// #include "Arduino.h"
#include "motor.h"
#ifndef RB_H
#define RB_H

class RangkaBawah{
  private:
    motor  motorFR;
    motor  motorFL;
    motor  motorBR;
    motor  motorBL;

  public:
    RangkaBawah(
      motor  motorFR, 
      motor  motorFL, 
      motor  motorBR, 
      motor  motorBL 
      );

     void setupPin();
     void maju();
};
#endif


