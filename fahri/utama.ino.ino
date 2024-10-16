#include "motor.h"
#include "RangkaBawah.h"

motor motorFR (5, 36);
motor motorFL (6, 34);
motor motorBL (8, 30);
motor motorBR (9, 32);

RangkaBawah RB ( motorFR, motorFL, motorBR, motorBL);

void setup(){
  RB.setupPin();
}

void loop(){
  RB.maju();
}                             