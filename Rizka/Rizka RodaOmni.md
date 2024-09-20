Roda omni adalah jenis roda yang dirancang untuk memberikan mobilitas/cara kerja yang lebih besar pada kendaraan atau robot. 
Roda omni memiliki rol kecil pada rodanya yang terpasang pada bagian samping roda utama, yang menjadikan roda bergerak kesamping tanpa harus memutar roda, yang membuat roda omni bergerak secara fleksibel.

---
const int motorAForward = 5;  
const int motorABackward = 6; 
const int motorBForward = 9;  
const int motorBBackward = 10; 
const int motorCForward = 11; 
const int motorCBackward = 12; 
const int motorDForward = 3;  
const int motorDBackward = 4; 

void setup() {
  pinMode(motorAForward, OUTPUT);
  pinMode(motorABackward, OUTPUT);
  pinMode(motorBForward, OUTPUT);
  pinMode(motorBBackward, OUTPUT);
  pinMode(motorCForward, OUTPUT);
  pinMode(motorCBackward, OUTPUT);
  pinMode(motorDForward, OUTPUT);
  pinMode(motorDBackward, OUTPUT);
}

void loop() {
  moveForward();
  delay(2000);
  
  turnLeft();
  delay(1000);

  moveBackward();
  delay(2000);

  stopMotors();
  delay(1000); 
}

void moveForward() {
  digitalWrite(motorAForward, HIGH);
  digitalWrite(motorABackward, LOW);
  digitalWrite(motorBForward, HIGH);
  digitalWrite(motorBBackward, LOW);
  digitalWrite(motorCForward, HIGH);
  digitalWrite(motorCBackward, LOW);
  digitalWrite(motorDForward, HIGH);
  digitalWrite(motorDBackward, LOW);
}

void moveBackward() {
  digitalWrite(motorAForward, LOW);
  digitalWrite(motorABackward, HIGH);
  digitalWrite(motorBForward, LOW);
  digitalWrite(motorBBackward, HIGH);
  digitalWrite(motorCForward, LOW);
  digitalWrite(motorCBackward, HIGH);
  digitalWrite(motorDForward, LOW);
  digitalWrite(motorDBackward, HIGH);
}

void turnLeft() {
  digitalWrite(motorAForward, LOW);
  digitalWrite(motorABackward, HIGH);
  digitalWrite(motorBForward, HIGH);
  digitalWrite(motorBBackward, LOW);
  digitalWrite(motorCForward, HIGH);
  digitalWrite(motorCBackward, LOW);
  digitalWrite(motorDForward, LOW);
  digitalWrite(motorDBackward, HIGH);
}

void stopMotors() {
  digitalWrite(motorAForward, LOW);
  digitalWrite(motorABackward, LOW);
  digitalWrite(motorBForward, LOW);
  digitalWrite(motorBBackward, LOW);
  digitalWrite(motorCForward, LOW);
  digitalWrite(motorCBackward, LOW);
  digitalWrite(motorDForward, LOW);
  digitalWrite(motorDBackward, LOW);
}
---

