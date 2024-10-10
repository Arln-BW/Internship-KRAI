/********************************************************************************************************************************8************************************

File dengan ekstensi .h adalah file header yang digunakan untuk mendeklarasikan fungsi, variabel, dan kelas yang dapat digunakan di file .ino atau file C/C++ lainnya.

**********************************************************************************************************************************************************************/

#include "Arduino.h"
// #include "motor.h"
#include "rangka_bawah.h"

RangkaBawah::RangkaBawah(
  motor motorFR,
  motor motorFL,
  motor motorBR,
  motor motorBL){
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
