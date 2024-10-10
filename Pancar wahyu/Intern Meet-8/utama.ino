/**************************************************************************************************************************************************

File dengan ekstensi .ino adalah file utama dari sketch Arduino. Ini adalah file yang berisi kode program yang akan dijalankan oleh mikrokontroler.

***************************************************************************************************************************************************/

#include "motor.h"
#include "rangka_bawah.h"

motor motorFR(5, 36);
motor motorFL(6, 34);
motor motorBR(9, 32) ;
motor motorBL(8, 30);

RangkaBawah RB(motorFR,
  motorFL,
  motorBR,
  motorBL);

void setup(){
  RB.setupPin();
  // motorFR.setupPin();
  // motorFL.setupPin();
}

void loop() {
  RB.maju();
  // motorFL.CW(100);
}
