// Kelas Motor
class Motor{
  private:

  public:
    int s1, s2, s3, s4;
    int pwm1, pwm2, pwm3, pwm4;

    motor1(int pwm1, int s1){
      this->pwm1 = pwm1;
      this->s1 = s1;
    }
    motor2(int pwm2, int s1){
      this->pwm2 = pwm2;
      this->s1 = s1;
    }
    motor3(int pwm3, int s3){
      this->pwm3 = pwm3;
      this->s3 = s3;
    }
    motor4(int pwm4, int s4){
      this->pwm4 = pwm4;
      this->s4 = s4;
    }

    pin(int pwm1, int pwm2, int pwm3, int pwm4, int s1, int s2, int s3, int s4) {}

    setup(int pwm1, int pwm2, int pwm3, int pwm4, int s1, int s2, int s3, int s4){
      this->pwm1 = pwm1;
      this->pwm2 = pwm2;
      this->pwm3 = pwm3;
      this->pwm4 = pwm4;

      pinMode(pwm1, OUTPUT);
      pinMode(pwm2, OUTPUT);
      pinMode(pwm3, OUTPUT);
      pinMode(pwm4, OUTPUT);

      this->s1 = s1;
      this->s2 = s2;
      this->s3 = s3;
      this->s4 = s4;
      
      pinMode(s1, OUTPUT);
      pinMode(s2, OUTPUT);
      pinMode(s3, OUTPUT);
      pinMode(s4, OUTPUT);
    }

    CW(int pwmValue){
      digitalWrite(this->s1, HIGH);
      analogWrite(this->pwm1, pwmValue);
    };

    CCW(int pwmValue){
      digitalWrite(this->s1, LOW);
      analogWrite(this->pwm1, pwmValue);
    }

};

// Kelas Rangka Bawah
class rb{
  private:
    int m1, m2, m3, m4;
    int s1, s2, s3, s4;
  public:
    Motor motor1, motor2, motor3, motor4;
    RB(int m1, int s1, int m2, int s2, int m3, int s3, int m4, int s4){
      this->m1 = m1;
      this->m2 = m2;
      this->m3 = m3;
      this->m4 = m4;
    }

    void setup(){
      motor1.setup(m1, m2, m3, m4, s1, s2, s3, s4);
      motor2.setup(m1, m2, m3, m4, s1, s2, s3, s4);
      motor3.setup(m1, m2, m3, m4, s1, s2, s3, s4);
      motor4.setup(m1, m2, m3, m4, s1, s2, s3, s4);
    };

    void moveRobot(int v_w1, int v_w2, int v_w3, int v_w4) {
      if (v_w1 > 0) motor1.CW(v_w1);
      else if (v_w1 < 0) motor1.CCW(-v_w1);

      if (v_w2 > 0) motor2.CW(v_w2);
      else if (v_w2 < 0) motor2.CCW(-v_w2);

      if (v_w3 > 0) motor3.CW(v_w3);
      else if (v_w3 < 0) motor3.CCW(-v_w3);

      if (v_w4 > 0) motor4.CW(v_w4);
      else if (v_w4 < 0) motor4.CCW(-v_w4);
    }
};

// Kelas Kinematika
class Kinematika{
  private:
  public:
};

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}