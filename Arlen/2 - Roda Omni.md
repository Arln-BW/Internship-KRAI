---
## Omni Wheel
Roda yang dirancang untuk bergerak ke segala arah. Prinsip kerja dari omni wheel terletak pada kombinasi roda utama yang besar dengan roda kecil yang terpasang di sepanjang kelilingnya. Roda kecil ini dipasang tegak lurus terhadap arah rotasi roda utama, memungkinkan gerakan lateral (ke samping) tanpa perlu mengubah orientasi roda.

#### **Menggunakan Komunikasi Serial (UART)**

Komunikasi serial antara ESP32 dan Arduino adalah metode yang paling sederhana dan efektif. Anda hanya perlu menghubungkan beberapa pin pada ESP32 dan Arduino.

#### **Langkah-langkah Koneksi Serial:**

1. **Hubungkan Pin ESP32 ke Arduino:**
    - **TX Pin** ESP32 ke **RX Pin** Arduino.
    - **RX Pin** ESP32 ke **TX Pin** Arduino.
    - **GND Pin** ESP32 ke **GND Pin** Arduino.

> [!NOTE] Catatan
>Bisa menggunakan level shifter untuk memastikan kompatibilitas antara logika 3.3V ESP32 dan 5V Arduino. Jika Arduino menggunakan logika 3.3V (misalnya Arduino Due), maka tidak diperlukan level shifter.

2. **Pastikan Baud Rate Sama**: Pastikan baud rate pada ESP32 dan Arduino diatur sama agar komunikasi serial berjalan dengan lancar.
### Program ESP32

```cpp
#include <BluetoothSerial.h> // Untuk Bluetooth
BluetoothSerial SerialBT; // Inisialisasi Bluetooth

void setup() {
  Serial.begin(9600); // Serial untuk komunikasi dengan Arduino
  SerialBT.begin("Robot"); // Nama Bluetooth Device
  Serial.println("Bluetooth started! Waiting for connection...");
}

void loop() {
  if (SerialBT.available()) {
    String controlSignal = SerialBT.readString(); // Membaca sinyal dari kontroler
    Serial.println("Received control signal: " + controlSignal);
    Serial.write(controlSignal.c_str()); // Mengirim sinyal ke Arduino ke Serial
  }
}

```
### Program Arduino

```cpp
#define motorA1 3 // roda 1 maju
#define motorA2 5 // roda 1 mundur
#define motorB1 6 // roda 2 maju
#define motorB2 9 // roda 2 mundur
#define motorC1 10 // roda 3 maju
#define motorC2 11 // roda 3 mundur
#define motorD1 12 // roda 4 maju
#define motorD2 13 // roda 4 mundur

void setup(){
	Serial.begin(9600);
	pinMode(motorA1, OUTPUT);
	pinMode(motorA2, OUTPUT);
	pinMode(motorB1, OUTPUT);
	pinMode(motorB2, OUTPUT);
	pinMode(motorC1, OUTPUT);
	pinMode(motorC2, OUTPUT);
	pinMode(motorD1, OUTPUT);
	pinMode(motorD2, OUTPUT);
}

void loop(){
	//Ini perintah dari kontroller
	String assign = Serial.readString();
	controlMotors(assign);
}

void controlMotors(String command) {
	 if (assign == "forward") moveForward();
	 else if (assign == "backward") moveBackward();
	 else if (assign == "left") moveLeft();
	 else if (assign == "right") moveRight();
	 else if (assign == "stop") stopAllMotors();
}

void moveForward() {
  analogWrite(motorA1, 255);
  analogWrite(motorA2, 0);
  analogWrite(motorB1, 255);
  analogWrite(motorB2, 0);
  analogWrite(motorC1, 255);
  analogWrite(motorC2, 0);
  analogWrite(motorD1, 255);
  analogWrite(motord2, 0);
}

void moveBackward() {
  analogWrite(motorA1, 0);
  analogWrite(motorA2, 255);
  analogWrite(motorB1, 0);
  analogWrite(motorB2, 255);
  analogWrite(motorC1, 0);
  analogWrite(motorC2, 255);
  analogWrite(motorD1, 0);
  analogWrite(motord2, 255);
}

void moveLeft() {
  analogWrite(motorA1, 0);
  analogWrite(motorA2, 255);
  analogWrite(motorB1, 255);
  analogWrite(motorB2, 0);
  analogWrite(motorC1, 0);
  analogWrite(motorC2, 255);
  analogWrite(motorD1, 255);
  analogWrite(motord2, 0);
}
  
void moveRight() {
  analogWrite(motorA1, 255);
  analogWrite(motorA2, 0);
  analogWrite(motorB1, 0);
  analogWrite(motorB2, 255);
  analogWrite(motorC1, 255);
  analogWrite(motorC2, 0);
  analogWrite(motorD1, 0);
  analogWrite(motord2, 255);
}
void stopAllMotors() {
  analogWrite(motorA1, 0);
  analogWrite(motorA2, 0);
  analogWrite(motorB1, 0);
  analogWrite(motorB2, 0);
  analogWrite(motorC1, 0);
  analogWrite(motorC2, 0);
  analogWrite(motorD1, 0);
  analogWrite(motord2, 0);
}
```
