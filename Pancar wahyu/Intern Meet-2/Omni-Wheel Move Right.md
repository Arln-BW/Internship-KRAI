## Program Omni-Wheel Move Right

```
'''cpp

// deklarasi pin PWM

#define DepanKanan 5 // roda 1 maju

#define DepanKiri 6 // roda 1 mundur

#define BelakangKanan 9 // roda 2 maju

#define BelakangKiri 8 // roda 2 mundur

  

// deklarasi pin selector

#define sDepanKanan 36 // selector

#define sDepanKiri 34 // selector

#define sBelakangKanan 32 // selector

#define sBelakangKiri 30 // selector

  

void setup() {

  Serial.begin(9600);

  pinMode(DepanKanan, OUTPUT);

  pinMode(DepanKiri, OUTPUT);

  pinMode(BelakangKanan, OUTPUT);

  pinMode(BelakangKiri, OUTPUT);

  

  pinMode(sDepanKanan, OUTPUT);

  pinMode(sDepanKiri, OUTPUT);

  pinMode(sBelakangKanan, OUTPUT);

  pinMode(sBelakangKiri, OUTPUT);

}

  

void loop() {

  

  moveRight();

  delay(2000);

  stop();

  delay(1000);

}

  

void moveRight() {

  analogWrite(DepanKanan, 50);

  digitalWrite(sDepanKanan, LOW);

  

  analogWrite(DepanKiri, 50);

  digitalWrite(sDepanKiri, LOW);

  

  analogWrite(BelakangKanan, 50);

  digitalWrite(sBelakangKanan, HIGH);

  

  analogWrite(BelakangKiri, 50);

  digitalWrite(sBelakangKiri, HIGH);

}

  

void stop() {

  analogWrite(DepanKanan, 0);

  digitalWrite(sDepanKanan, LOW);

  

  analogWrite(DepanKiri, 0);

  digitalWrite(sDepanKiri, LOW);

  

  analogWrite(BelakangKanan, 0);

  digitalWrite(sBelakangKanan, HIGH);

  

  analogWrite(BelakangKiri, 0);

  digitalWrite(sBelakangKiri, HIGH);

}

'''
```