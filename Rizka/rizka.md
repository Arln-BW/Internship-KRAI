```cpp

//Deklarasi pin motor untuk driver BTS 79760
int PWM_fr  = 5; // kanan depan
int PWM_rr  = 9; // kanan belakang
int PWM_fl  = 6; // kiri depan
int PWM_rl = 8; // kiri belakang
int Pin_selektor_fr = 36;
int Pin_selektor_rr = 32;
int Pin_selektor_fl = 34;
int Pin_selektor_rl = 30;

void setup() {
  pinMode(PWM_fr, OUTPUT);
  pinMode(PWM_rr, OUTPUT);
  pinMode(PWM_fl, OUTPUT);
  pinMode(PWM_rl, OUTPUT);
  pinMode(Pin_selektor_fr, OUTPUT);
  pinMode(Pin_selektor_rr, OUTPUT);
  pinMode(Pin_selektor_fl, OUTPUT);
  pinMode(Pin_selektor_rl, OUTPUT);
  }

void loop() {
// untuk_fr
  analogWrite(PWM_fr, 50);
  digitalWrite(Pin_selektor_fr, LOW);

// untuk_rr
  analogWrite(PWM_rr, 50);
  digitalWrite(Pin_selektor_rr, HIGH);

// untuk_fl
  analogWrite(PWM_fl, 50);
  digitalWrite(Pin_selektor_fl, LOW);

// untuk_rl
  analogWrite(PWM_rl, 50);
  digitalWrite(Pin_selektor_rl, HIGH);
delay(5000);

// untuk berhenti
  analogWrite(PWM_fr, 0);
  analogWrite(PWM_rr, 0);
  analogWrite(PWM_fl, 0);
  analogWrite(PWM_rl, 0);
delay(5000);
  
}
```
