# Ini punya Rizkaaa
## Rangkuman BTS 7960
BTS 7960 merupakan modul driver motor DC (arus listrik searah)
BTS 7960 menggunakan IC H-Bridge, yaitu sirkuit terintegrasi yang digunakan untuk mengontrol arah dan kecepatan motor DC dengan memungkinkan aliran arus dalam kedua arah.
BTS 7960 banyak digunakan untuk mengatur motor berdaya besar.
BTS 7960 mampu mengendalikan motor hingga 43A pada tegangan 24V
Komponen utama BTS 7960:
BTS7960 Chip: IC H-Bridge dari Infineon yang mampu mengendalikan motor dalam dua arah (forward dan reverse).
Input PWM: Untuk mengontrol kecepatan motor melalui sinyal PWM
Protection Features: fitur proteksi seperti over-temperature protection dan current-limiting untuk mencegah kerusakan akibat beban berlebih.
Pins dan Port: pin input untuk PWM, pin untuk arah putaran motor, dan pin untuk sumber daya.
Spesifikasi BTS 7960:
Tegangan operasional: 6V hingga 27V
Arus maksimal: 43A 
Cara kerja BTS 7960:
Kontrol Arah: Motor dapat berputar maju atau mundur tergantung pada sinyal input arah (IN1 dan IN2).
Kontrol Kecepatan: Kecepatan motor diatur melalui sinyal PWM yang diterapkan pada pin PWM1 atau PWM2.
Kelebihan BTS 7960:
Kemampuan arus yang tinggi
Mudah diintegrasikan dengan mikrokontroler seperti Arduino atau Raspberry Pi
Adanya proteksi
Pengaplikasian BTS 7960:
Kendaraan robotik, sistem otomatisasi industri, alat transportasi listrik

## Listing program supaya BTS7960 memutar kekana  lalu kekiri

```cpp
// Deklarasi pin
const int R_EN = 8;  // Enable arah kanan
const int L_EN = 7;  // Enable arah kiri
const int RPWM = 9;  // PWM untuk kanan
const int LPWM = 10; // PWM untuk kiri

void setup() {
//pin menjadi output karena dia membutuhkan energi dari controller
  pinMode(R_EN, OUTPUT);
  pinMode(L_EN, OUTPUT);
  pinMode(RPWM, OUTPUT);
  pinMode(LPWM, OUTPUT);
//mua-mula semjua pin mati
  digitalWrite(R_EN, LOW);
  digitalWrite(L_EN, LOW);
  analogWrite(RPWM, 0);
  analogWrite(LPWM, 0);
}

void loop() {
  // Putar motor ke kanan
  digitalWrite(R_EN, HIGH);  
  digitalWrite(L_EN, LOW);  
  analogWrite(RPWM, 200);   
  analogWrite(LPWM, 0);     
  delay(3000);               
  
  analogWrite(RPWM, 0);
  delay(1000);               

//Putar motor ke kiri
  digitalWrite(R_EN, LOW);   
  digitalWrite(L_EN, HIGH);  
  analogWrite(RPWM, 0);      
  analogWrite(LPWM, 200);   
  delay(3000);              

  analogWrite(LPWM, 0);
  delay(1000);              
}
```

aku juga buat simulasi arduinonya pake tinkercad, cuma bukan pake komponen BTS 7960 soalnya komponennya gaada 
aku pake komponen pengganti L293D
https://www.tinkercad.com/things/1xS6eZRKESu-rizka-driver-motor-pengganti-bts7960-?sharecode=8O-H1boAbYPD-KZVqMPsnxjeum1lM_DtQEwG3vKgOg0



