#ifndef motor_H
#define motor_H

class motor {
  private:
    int pwmpin; //deklarasi pin pwm
    int selpin; //deklarasi pin selector

  public:
    motor (int pwmpin, int selpin);
    motor();
    void cw (int pwmpin);
    void ccw (int pwmpin);
    void setupPin ();  
};
#endif