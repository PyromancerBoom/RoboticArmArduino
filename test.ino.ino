#include<AFMotor.h>

AF_DCMotor motor1(1);

int delay_speed = 1000;

void setup(){
  motor1.setSpeed(200);
}

void forward(){
  
}

void loop(){
  motor1.run(FORWARD);
  delay(delay_speed);

  motor1.run(RELEASE);
  delay(delay_speed);
  
  motor1.run(BACKWARD);
  delay(delay_speed);
  
  motor1.run(RELEASE);
  delay(delay_speed);
}
