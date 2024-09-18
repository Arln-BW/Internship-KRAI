## BTS7960 Motor Driver
Merupakan pengendali motor DC berbasis H-Brige yang digunakan untuk mengendalikan motor dengan arus tinggi hingga 43A. Motor driver ini memiliki dua saluran dengan kemampuan menangani arus besar dan dilengkapi dengan proteksi terhadap arus lebih (overcurrent protection), suhu lebih (overtemperature protection), serta tegangan balik (back-voltage protection).

### Fitur Utama BTS7960:
1. **Arus maksimum**: 43A
2. **Tegangan input**: 6V hingga 27V DC
3. **Proteksi**: Arus lebih, suhu lebih, dan tegangan balik
4. **Antarmuka kontrol**: PWM (Pulse Width Modulation) dan digital untuk mengontrol arah putaran motor
5. **Menggunakan IC BTS7960**: Berfungsi sebagai pengendali motor dengan kemampuan h-bridge.
### Pin-Pin BTS7960:
1. **RPWM dan LPWM**: Digunakan untuk mengontrol kecepatan motor menggunakan sinyal PWM.
2. **R_EN dan L_EN**: Digunakan untuk mengaktifkan atau menonaktifkan saluran kanan dan kiri motor.
3. **VCC dan GND**: Daya untuk logika driver (biasanya 5V).
4. **Motor + dan Motor -**: Terhubung ke terminal motor.
5. **Vmotor**: Sumber daya untuk motor.


| BST 7960 Pin | BST 7960 Pin |
| ------------ | ------------ |
| 1 (RPWM)     |              |
| 2 (LPWM)     |              |
| 3 (R_EN)     |              |
| 4 (L_EN)     |              |
| 5 (R_IS)     |              |
| 6 (L_IS)     |              |
| 7 (VCC)      |              |
| 8 (GND)      |              |
### Cara Kerja BTS7960:
- Sinyal **RPWM** dan **LPWM** menentukan arah putaran motor. Jika RPWM diberikan sinyal PWM sementara LPWM tetap 0, motor akan berputar ke satu arah. Sebaliknya, jika LPWM diberikan sinyal PWM dan RPWM tetap 0, motor akan berputar ke arah sebaliknya.
- **R_EN** dan **L_EN** digunakan untuk mengaktifkan atau menonaktifkan penggerak motor kanan dan kiri.

```cpp
/*========================================================================== // Author : Handson Technology // Project : BTD7960 Motor Control Board driven by Arduino. // Description : Speed and direction controlled by a potentiometer attached // to analog input A0. One side pin of the potentiometer (either one) to // ground; the other side pin to +5V // Source-Code : BTS7960.ino // Program: Control DC motors using BTS7960 H Bridge Driver. //=====================================================================
//Connection to the BTS7960 board: 
// BTS7960 Pin 1 (RPWM) to Arduino pin 5(PWM) 
// BTS7960 Pin 2 (LPWM) to Arduino pin 6(PWM) 
// BTS7960 Pin 3 (R_EN), 4 (L_EN), 7 (VCC) to Arduino 5V pin 
// BTS7960 Pin 8 (GND) to Arduino GND 
// BTS7960 Pin 5 (R_IS) and 6 (L_IS) not connected*/
int SENSOR_PIN = 0; // center pin of the potentiometer 
int RPWM_Output = 5; // Arduino PWM output pin 5; connect to IBT-2 pin 1 (RPWM) 
int LPWM_Output = 6; // Arduino PWM output pin 6; connect to IBT-2 pin 2 (LPWM) 

void setup() {
	pinMode(RPWM_Output, OUTPUT);
	pinMode(LPWM_Output, OUTPUT);
}

void loop () {
	int sensorValue = analogRead(sensorValue - 511)/2
}
```
