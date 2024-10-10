#include <PS4Controller.h>
int rx;
int ry;
int lx;
int ly;


void setup() {
  PS4.begin("e8:6b:ea:df:45:de");
  Serial.println("ready.");
  Serial.begin(57600);

}

void loop(){
  if (PS4.isConnected()) {
    readController();
  }
  delay(100);
  
  Serial.print(rx);
  Serial.print(",");
  Serial.print(ry);
  Serial.print(",");
  Serial.print(lx);
  Serial.print(",");
  Serial.print(ly);
  Serial.println(",");
}
void readController() {
  lx = PS4.LStickX();
  ly = PS4.LStickY();
  rx = PS4.RStickX();
  ry = PS4.LStickY();
}