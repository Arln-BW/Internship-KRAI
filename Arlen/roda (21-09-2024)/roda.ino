/*
#define frontRight1 3 
#define frontRight2 5 

#define frontLeft1 6 
#define frontLeft2 9 

#define backRight1 10 
#define backRight2 11 

#define backLeft1 12 
#define backLeft2 13 

void setup (){
	Serial.begin(9600);
	pinMode(frontRight1, OUTPUT);
	pinMode(frontRight2, OUTPUT);
	
	pinMode(frontLeft1, OUTPUT);
	pinMode(frontLeft2, OUTPUT);
	
	pinMode(backRight1, OUTPUT);
	pinMode(backRight2, OUTPUT);
	
	pinMode(backLeft1, OUTPUT);
	pinMode(backLeft2, OUTPUT);
}

void loop(){
	//Ini perintah dari kontroller
	// String assign = Serial.readString();
	// controlMotors(assign);
	moveForward(); delay(2000);
	stop(); delay(1000);
}

void stop() {
	analogWrite(frontRight1, 0);
	analogWrite(frontRight2, 0);
	
	analogWrite(frontLeft1, 0);
	analogWrite(frontLeft2, 0);
	
	analogWrite(backRight1, 0);
	analogWrite(backRight2, 0);
	
	analogWrite(backLeft1, 0);
	analogWrite(backLeft2, 0);
}

void moveForward(){
	analogWrite(frontRight1, 100);
	analogWrite(frontRight2, 0);
	
	analogWrite(frontLeft1, 0);
	analogWrite(frontLeft2, 100);
	
	analogWrite(backRight1, 100);
	analogWrite(backRight2, 0);
	
	analogWrite(backLeft1, 0);
	analogWrite(backLeft2, 100);
}

void moveLeft() {
	analogWrite(frontRight1, 100);
	analogWrite(frontRight2, 0);
	
	analogWrite(frontLeft1, 100);
	analogWrite(frontLeft2, 0);
	
	analogWrite(backRight1, 0);
	analogWrite(backRight2, 255);
	
	analogWrite(backLeft1, 0);
	analogWrite(backLeft2, 255);
}

void moveRight() {
	analogWrite(frontRight1, 0);
	analogWrite(frontRight2, 255);
	
	analogWrite(frontLeft1, 0);
	analogWrite(frontLeft2, 255);
	
	analogWrite(backRight1, 255);
	analogWrite(backRight2, 0);
	
	analogWrite(backLeft1, 255);
	analogWrite(backLeft2, 0);
}

void moveBackward() {
	analogWrite(frontRight1, 0);
	analogWrite(frontRight2, 255);
	
	analogWrite(frontLeft1, 255);
	analogWrite(frontLeft2, 0);
	
	analogWrite(backRight1, 0);
	analogWrite(backRight2, 255);
	
	analogWrite(backLeft1, 255);
	analogWrite(backLeft2, 0);
}*/

// ====================
const int frontRight = 5;
const int frontLeft = 6;
const int backRight = 9;
const int backLeft = 8;

const int sfrontRight = 36;
const int sfrontLeft = 34;
const int sbackRight = 32;
const int sbackLeft = 30;

void setup(){
  Serial.begin(9600);
  pinMode(frontRight, OUTPUT);
  pinMode(frontLeft, OUTPUT);
  pinMode(backRight, OUTPUT);
  pinMode(backLeft,OUTPUT);

  pinMode(sfrontRight, OUTPUT);
  pinMode(sfrontLeft, OUTPUT);
  pinMode(sbackRight, OUTPUT);
  pinMode(sbackLeft, OUTPUT);
}

void loop(){
  moveRight(); delay(2000);
  stop(); delay(1000);
}

// function move

void moveRight(){
  analogWrite(frontRight, 100);
  digitalWrite(sfrontRight, LOW);

  analogWrite(frontLeft, 100);
  digitalWrite(sfrontLeft, LOW);

  analogWrite(backRight, 100);
  digitalWrite(sbackRight, HIGH);

  analogWrite(backLeft, 100);
  digitalWrite(sbackLeft, HIGH);
}

void stop(){
  analogWrite(frontRight, 0);
  digitalWrite(sfrontRight, LOW);

  analogWrite(frontLeft, 0);
  digitalWrite(sfrontLeft, LOW);

  analogWrite(backRight, 0);
  digitalWrite(sbackRight, HIGH);

  analogWrite(backLeft, 0);
  digitalWrite(sbackLeft, HIGH);
}