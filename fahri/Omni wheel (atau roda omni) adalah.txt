Omni wheel (atau roda omni) adalah jenis roda yang memungkinkan gerakan multi-arah. Roda ini memiliki rol kecil di sekeliling lingkarannya yang berputar tegak lurus terhadap arah utama roda, sehingga memungkinkan pergerakan bebas ke segala arah tanpa harus memutar roda itu sendiri. Omni wheel sering digunakan dalam robotika untuk menciptakan platform yang bisa bergerak dalam segala arah (omnidirectional), seperti maju, mundur, ke samping, dan berputar, tanpa perlu memutar tubuh utama robot.

### Prinsip Dasar Omni Wheel

1. **Gerakan Maju/Mundur**: Semua roda bergerak ke arah yang sama.
2. **Gerakan Samping**: Roda di sisi kanan dan kiri bergerak berlawanan arah.
3. **Putar di tempat**: Roda diagonal bergerak ke arah yang berlawanan.

### Contoh Kode Penggerak 4 Roda Omni Wheel (Arduino)

Untuk menggerakkan 4 roda omni wheel menggunakan Arduino, kamu bisa menggunakan library seperti `AFMotor` atau langsung mengontrol motor driver melalui pin PWM dan digital.

Asumsi: 
- Setiap roda omni dihubungkan ke motor DC dengan motor driver (misalnya L298N).
- Motor-motor diatur dalam orientasi X (depan kiri, depan kanan, belakang kiri, belakang kanan).

```cpp
// Pin motor: sesuaikan dengan motor driver yang digunakan
#define motorFrontLeft1 5
#define motorFrontLeft2 6
#define motorFrontRight1 9
#define motorFrontRight2 10
#define motorBackLeft1 3
#define motorBackLeft2 4
#define motorBackRight1 7
#define motorBackRight2 8

void setup() {
  // Atur semua pin motor sebagai output
  pinMode(motorFrontLeft1, OUTPUT);
  pinMode(motorFrontLeft2, OUTPUT);
  pinMode(motorFrontRight1, OUTPUT);
  pinMode(motorFrontRight2, OUTPUT);
  pinMode(motorBackLeft1, OUTPUT);
  pinMode(motorBackLeft2, OUTPUT);
  pinMode(motorBackRight1, OUTPUT);
  pinMode(motorBackRight2, OUTPUT);
}

// Fungsi untuk menggerakkan motor
void moveForward() {
  // Motor bergerak maju
  digitalWrite(motorFrontLeft1, HIGH);
  digitalWrite(motorFrontLeft2, LOW);
  digitalWrite(motorFrontRight1, HIGH);
  digitalWrite(motorFrontRight2, LOW);
  digitalWrite(motorBackLeft1, HIGH);
  digitalWrite(motorBackLeft2, LOW);
  digitalWrite(motorBackRight1, HIGH);
  digitalWrite(motorBackRight2, LOW);
}

void moveBackward() {
  // Motor bergerak mundur
  digitalWrite(motorFrontLeft1, LOW);
  digitalWrite(motorFrontLeft2, HIGH);
  digitalWrite(motorFrontRight1, LOW);
  digitalWrite(motorFrontRight2, HIGH);
  digitalWrite(motorBackLeft1, LOW);
  digitalWrite(motorBackLeft2, HIGH);
  digitalWrite(motorBackRight1, LOW);
  digitalWrite(motorBackRight2, HIGH);
}

void moveLeft() {
  // Motor bergerak ke kiri
  digitalWrite(motorFrontLeft1, LOW);
  digitalWrite(motorFrontLeft2, HIGH);
  digitalWrite(motorFrontRight1, HIGH);
  digitalWrite(motorFrontRight2, LOW);
  digitalWrite(motorBackLeft1, HIGH);
  digitalWrite(motorBackLeft2, LOW);
  digitalWrite(motorBackRight1, LOW);
  digitalWrite(motorBackRight2, HIGH);
}

void moveRight() {
  // Motor bergerak ke kanan
  digitalWrite(motorFrontLeft1, HIGH);
  digitalWrite(motorFrontLeft2, LOW);
  digitalWrite(motorFrontRight1, LOW);
  digitalWrite(motorFrontRight2, HIGH);
  digitalWrite(motorBackLeft1, LOW);
  digitalWrite(motorBackLeft2, HIGH);
  digitalWrite(motorBackRight1, HIGH);
  digitalWrite(motorBackRight2, LOW);
}

void stopMotors() {
  // Berhentikan semua motor
  digitalWrite(motorFrontLeft1, LOW);
  digitalWrite(motorFrontLeft2, LOW);
  digitalWrite(motorFrontRight1, LOW);
  digitalWrite(motorFrontRight2, LOW);
  digitalWrite(motorBackLeft1, LOW);
  digitalWrite(motorBackLeft2, LOW);
  digitalWrite(motorBackRight1, LOW);
  digitalWrite(motorBackRight2, LOW);
}

void loop() {
  // Contoh gerakan: maju 2 detik, berhenti 1 detik, ke kanan 2 detik
  moveForward();
  delay(2000);
  
  stopMotors();
  delay(1000);
  
  moveRight();
  delay(2000);
  
  stopMotors();
}
```

### Penjelasan:
- Fungsi `moveForward()`, `moveBackward()`, `moveLeft()`, dan `moveRight()` mengontrol arah gerakan dengan mengatur rotasi setiap roda.
- Fungsi `stopMotors()` menghentikan semua motor.
- Dalam loop, ada contoh urutan gerakan: maju selama 2 detik, berhenti, lalu bergerak ke kanan.

Sesuaikan pin sesuai dengan skema motor driver yang kamu gunakan.