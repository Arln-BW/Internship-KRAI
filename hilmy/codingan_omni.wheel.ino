// Deklarasi pin motor untuk driver BTS7960
int SFR = 36;
int SFL = 34;
int SRR = 32;
int SRL = 30;


int PWM_FR = 5;
int PWM_FL = 6;
int PWM_RR = 9;
int PWM_RL = 8;

void setup() {
  // Set semua pin PWM sebagai output
  pinMode(PWM_FR, OUTPUT);
  pinMode(PWM_FL, OUTPUT);
  pinMode(PWM_RR, OUTPUT);
  pinMode(PWM_RL, OUTPUT);

  pinMode(SFR, OUTPUT);
  pinMode(SFL, OUTPUT);
  pinMode(SRR, OUTPUT);
  pinMode(SRL, OUTPUT);

}


void loop() {

    //bergerak ke KANAN
  // MOTOR FR CCW
  digitalWrite(SFR, LOW);
  analogWrite(PWM_FR, 50);
  // MOTOR FL CCW
  digitalWrite(SFL, LOW);
  analogWrite(PWM_FL, 50);
  // MOTOR RR CW
  digitalWrite(SRR, HIGH);
  analogWrite(PWM_RR, 50);
  // MOTOR RL CW
  digitalWrite(SRL, HIGH);
  analogWrite(PWM_RL, 50);
  delay(1000);

  analogWrite(PWM_FR, 0);
  analogWrite(PWM_FL, 0);
  analogWrite(PWM_RR, 0);
  analogWrite(PWM_RL, 0);
  delay(1000);


}
