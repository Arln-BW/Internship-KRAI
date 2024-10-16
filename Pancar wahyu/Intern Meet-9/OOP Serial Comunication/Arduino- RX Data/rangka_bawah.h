#ifndef RB_H
#define RB_H
#include "motor.h"

class RangkaBawah{
  private:
   motor motorFR;
   motor motorFL;
   motor motorBR;
   motor motorBL;

  public:
   RangkaBawah(
    motor motorFR,
    motor motorFL,
    motor motorBR,
    motor motorBL 
    );

   void setupPin();
   void maju();
};
#endif

//motorFR (5, 36)
//motorFL (6 ,34)
//motorBL (8, 30)
//motorBr (9, 32)