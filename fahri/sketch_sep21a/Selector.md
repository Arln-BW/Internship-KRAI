#define motorFrontLeft1 6
#define motorFrontRight1 5
#define motorBackLeft1 8
#define motorBackRight1 9

//deklarasi selektor
#define smotorFrontLeft1 34
#define smotorFrontRight1 36
#define smotorBackLeft1 30
#define smotorBackRight1 32

void setup() {
  
  pinMode(motorFrontLeft1, OUTPUT);
  pinMode(motorFrontRight1, OUTPUT);
  pinMode(motorBackLeft1, OUTPUT);
  pinMode(motorBackRight1, OUTPUT);

  pinMode(smotorFrontLeft1, OUTPUT);
  pinMode(smotorFrontRight1, OUTPUT);
  pinMode(smotorBackLeft1, OUTPUT);
  pinMode(smotorBackRight1, OUTPUT);
  
}

void moveright() {
  // Motor bergerak maju
  analogWrite(motorFrontLeft1, 50);
  digitalWrite(smotorFrontLeft1, LOW);

  analogWrite(motorFrontRight1, 50);
  digitalWrite(smotorFrontRight1, LOW);

  analogWrite(motorBackLeft1, 50);
  digitalWrite(smotorBackLeft1, HIGH);

  analogWrite(motorBackRight1, 50);
  digitalWrite(smotorBackRight1, HIGH);
}

void motorstop(){
  analogWrite(motorFrontLeft1, 0);
  digitalWrite(smotorFrontLeft1, LOW);

  analogWrite(motorFrontRight1, 0);
  digitalWrite(smotorFrontRight1, HIGH);

  analogWrite(motorBackLeft1, 0);
  digitalWrite(smotorBackLeft1, LOW);

  analogWrite(motorBackRight1, 0);
  digitalWrite(smotorBackRight1, LOW);
}


void loop() {
  moveright();
  delay(4000);
  
  motorstop();
  delay(1000);

}
