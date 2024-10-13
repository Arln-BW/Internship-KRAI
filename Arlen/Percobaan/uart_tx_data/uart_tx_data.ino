#include "SerialTransfer.h"
#include <PS4Controller.h>
// int rx;
// int ry;
// int lx;
// int ly;


SerialTransfer myTransfer;

struct STRUCT {
  int rx = PS4.LStickX();;
  int ry = PS4.LStickY();;
  int lx = PS4.RStickX();;
  int ly = PS4.RStickY();;
} testStruct;

// char arr[] = "hello";


void setup()
{
  Serial.begin(57600);
  Serial0.begin(57600);
  myTransfer.begin(Serial0);

  PS4.begin("e8:6b:ea:df:45:de");
  Serial.println("ready.");

  // testStruct.z = '$';
  // testStruct.y = 4.5;

  // testStruct.lx = PS4.LStickX();
  // testStruct.ly = PS4.LStickY();
  // testStruct.rx = PS4.RStickX();
  // testStruct.ry = PS4.RStickY();
}


void loop()
{
  if (PS4.isConnected()) {
    readController();
  }
  delay(100);

  // use this variable to keep track of how many
  // bytes we're stuffing in the transmit buffer
  int sendSize = 0;

  ///////////////////////////////////////// Stuff buffer with struct
  sendSize = myTransfer.txObj(testStruct, sendSize);

  ///////////////////////////////////////// Stuff buffer with array
  // sendSize = myTransfer.txObj(arr, sendSize);

  ///////////////////////////////////////// Send buffer
  myTransfer.sendData(sendSize);
  delay(500);
}

void readController() {
  // Serial.println(lx);
  testStruct.lx = PS4.LStickX();
  testStruct.ly = PS4.LStickY();
  testStruct.rx = PS4.RStickX();
  testStruct.ry = PS4.RStickY();
}