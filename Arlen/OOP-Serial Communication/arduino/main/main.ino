#include "motor.h"
#include "rangkaBawah.h"
#include "SerialTransfer.h"

SerialTransfer arduino;

Motor motorFR(5, 36);
Motor motorFL(6, 34);
Motor motorBR(9, 32);
Motor motorBL(8, 30);

RangkaBawah RB(motorFR, motorFL, motorBR, motorBL);

void setup() {
  arduino.begin(Serial1);
  Serial.begin(115200);
  Serial1.begin(115200);
  RB.setupPin();
}

void loop() {
  if(arduino.available()){
    int value;
    uint16_t recSize = 600;
    arduino.rxObj(value, recSize);

    if (value == 1){
      RB.maju();
    } else if (value == 2) {
      RB.mundur();
    } else if (value == 3) {
      RB.kanan();
    } else if (value == 4) {
      RB.kiri();
    }
  }
  // RB.maju();
}
