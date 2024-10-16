#include "Arduino.h"
// #include "motor.h"
#include "RangkaBawah.h"

RangkaBawah::RangkaBawah(motor motorFR,motor motorFL,motor motorBR,motor motorBL){
    this->motorFR = motorFR;
    this->motorFL = motorFL;
    this->motorBR = motorBR;
    this->motorBL = motorBL;
  }

void RangkaBawah::setupPin(){
  motorFR.setupPin();
  motorFL.setupPin();
  motorBR.setupPin();
  motorBL.setupPin();
}  

void RangkaBawah::maju(){
  motorFR.cw(100);
  motorFL.ccw(100);
  motorBR.cw(100);
  motorBL.ccw(100);

}