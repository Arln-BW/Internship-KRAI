OOP adalah pemrograman yang berorientasi objek, nahh ini itu menggunakan konsep objek untuk merancang perangkat lunak. Pemrograman menggunakan OOP katanya lebih terorganisir, jadi dia lebih mudah dikelola dan diperbaiki. Terus pengguna bisa interaksi dengan objek tanpa tahu detail implementasinya, ((mungkin krna ada yg dibagian private??)),, gtaw kurang tau. Fyi ini githubnya aku asal upload lagi hehe, maff yeahhhkk

```
class Rizka {
public:
    Rizka(int pwmPin, int selectorPin) 
      : pwmPin(pwmPin), selectorPin(selectorPin) {
        pinMode(pwmPin, OUTPUT);
        pinMode(selectorPin, OUTPUT);
    }

    void setKecepatan(int kecepatan, bool arah) {
        analogWrite(pwmPin, kecepatan);
        digitalWrite(selectorPin, arah ? HIGH : LOW);
    }

    void berhenti() {
        analogWrite(pwmPin, 0);
    }

private:
    int pwmPin;
    int selectorPin;
};

Rizka motor_fr(PWM_fr, Pin_selektor_fr);
Rizka motor_rr(PWM_rr, Pin_selektor_rr);
Rizka motor_fl(PWM_fl, Pin_selektor_fl);
Rizka motor_rl(PWM_rl, Pin_selektor_rl);

void setup() {
}

void loop() {
    motor_fr.setKecepatan(50, false); 
    motor_rr.setKecepatan(50, true);  
    motor_fl.setKecepatan(50, false); 
    motor_rl.setKecepatan(50, true);  

    delay(5000);

    motor_fr.berhenti();
    motor_rr.berhenti();
    motor_fl.berhenti();
    motor_rl.berhenti();

    delay(5000);
}
```
