/********************************

File dengan ekstensi .h adalah file header yang digunakan untuk mendeklarasikan fungsi, variabel, dan kelas yang dapat digunakan di file .ino atau file C/C++ lainnya.

*********************************/

#include "Arduino.h"
#include "motor.h"

motor::motor(){

}

motor::motor(int pwmPin, int selPin){
  this->pwmPin = pwmPin;
  this->selPin = selPin;
}

void motor::setupPin(){
  pinMode(this->pwmPin, OUTPUT);
  pinMode(this->selPin, OUTPUT);
}

void motor::CW(int pwm){
  analogWrite(this->pwmPin, pwm);
  digitalWrite(this->selPin, HIGH);
}

void motor::CCW(int pwm){
  analogWrite(this->pwmPin, pwm);
  digitalWrite(this->selPin, LOW); 
}
