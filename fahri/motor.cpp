#include "Arduino.h"
#include "motor.h"

motor::motor(){
  
}

motor::motor(int pwmpin, int selpin){
  this->pwmpin = pwmpin;
  this->selpin = selpin; 
}

void motor::setupPin(){
  pinMode(this->pwmpin, OUTPUT);
  pinMode(this->selpin, OUTPUT);
}

void motor::cw(int pwm){
  analogWrite(this->pwmpin, pwm);
  digitalWrite(this->selpin, HIGH);
}

void motor::ccw(int pwm){
  analogWrite(this->pwmpin, pwm);
  digitalWrite(this->selpin, LOW);
}


