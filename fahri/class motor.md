## Diperlukan

### 1. Class Motor
- constructor(pin yang dibutuhkan)
- setup(setPinMode)
- CW(pwm)
- CCW(pwm)

cpp
/* konsep kelas*/
class Motor {

public:
	Pin(int pwm1, int pwm2, int pwm3, int pwm4, int s1, int s2, int s3, int s4){}
	
	setUp(){
	}
	
	CW(){
		
	}
	
	CCW(){
		
	}
}

//membuat objek dari class Motor
Motor robot;
robot.jenis = "asdfadf";

/*Encapsulation*/
class Motor {
private:
	int pwm;

public:
	void setPWM(int )
}

### 2. Class RB
- const(motor1, motor2, motor3, motor4)
- setup
- moveRobot(v_w1, v_w2, v_w3, v_w4)

cpp
class RangkaBawah {
public:
}

### 3. Class Kinematika
- invers(alpha, v_x, v_y, omega)