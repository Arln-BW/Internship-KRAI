#include "Arduino.h"
// #include "motor.h"
#include "Arduino.h"
#include "rangkaBawah.h"

RangkaBawah::RangkaBawah(Motor motorFR, Motor motorFL, Motor motorBR, Motor motorBL){
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
  motorFR.CW(100);
  motorFL.CCW(100);
  motorBR.CW(100);
  motorBL.CCW(100);
}
void RangkaBawah::mundur(){
  motorFR.CCW(100);
  motorFL.CW(100);
  motorBR.CCW(100);
  motorBL.CW(100);
}
void RangkaBawah::kanan(){
  motorFR.CCW(100);
  motorFL.CCW(100);
  motorBR.CW(100);
  motorBL.CW(100);
}
void RangkaBawah::kiri(){
  motorFR.CW(100);
  motorFL.CW(100);
  motorBR.CCW(100);
  motorBL.CCW(100);
}