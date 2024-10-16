#include "motor.h"
#ifndef RB_H
#define RB_H

/*
skanandepan = 36, kanandepan = 5
skiridepan = 34, kiridepan = 6
skananbelakang = 32, kananbelakang = 9
skiribelakang = 30, kiribelakang = 8
*/

class RangkaBawah{
  private:
    Motor motorFR;
    Motor motorFL;
    Motor motorBR;
    Motor motorBL;
  public:
    RangkaBawah(
      Motor motorFR,
      Motor motorFL,
      Motor motorBR,
      Motor motorBL
    );

    void setupPin();
    void maju();
    void mundur();
    void kanan();
    void kiri();
};
#endif