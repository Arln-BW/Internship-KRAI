#include "SerialTransfer.h"
#include <PS4Controller.h>

SerialTransfer esp32;

void setup() {
  esp32.begin(Serial0);
  Serial.begin(115200);
  Serial0.begin(9600, SERIAL_8N1, 16, 17); // (RX = 16, TX = 17)
  // pinMode(D2, INPUT); // Sebagai RX
  // pinMode(D1, OUTPUT); // Sebagai TX
  PS4.begin("e8:6b:ea:df:45:de");
}

void loop() {
  uint16_t sendSize = 65534;
  // int movement = 0; // untuk debugging
  // if (movement == 0) {
  //   Serial.println(movement);
  //   esp32.txObj(movement, sendSize);
  //   esp32.sendData(movement, sendSize);
  //   delay(50);
  // }

  if (PS4.isConnected()) {
    uint8_t movement = 0; // yang asli
    if (PS4.Up()){
      movement = 1;
    } else if (PS4.Down()){
      movement = 2;
    } else if (PS4.Right()) {
      movement = 3;
    } else if (PS4.Left()) {
      movement = 4;
    }

    if (movement > 0) {
      esp32.txObj(movement, sendSize);
      esp32.sendData(movement, sendSize);
      delay(50);
    }
    Serial.println(movement);
    delay(50);
  }
}
