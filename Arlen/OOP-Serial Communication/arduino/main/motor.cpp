#include "Arduino.h"
#include "motor.h"

Motor::Motor(){

}

void Motor::setupPin(){
  pinMode(this->pwmPin, OUTPUT);
  pinMode(this->selPin, OUTPUT);
}

Motor::Motor(int pwmPin, int selPin){
  this->pwmPin = pwmPin;
  this->selPin = selPin;
}

void Motor::CW(int pwm){
  analogWrite(this->pwmPin, pwm);
  digitalWrite(this->selPin, HIGH);
}

void Motor::CCW(int pwm){
  analogWrite(this->pwmPin, pwm);
  digitalWrite(this->selPin, LOW);
}
