#include<AFMotor.h>

AF_DCMotor motor1(1);

int delay_speed = 1000;
int m1_speed = 200;

void setup(){
  motor1.setSpeed(m1_speed); // Left Side
  motor1.setSpeed(m1_speed); // Right side
  motor1.setSpeed(m1_speed); // Base
  motor1.setSpeed(255); // Gripper
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
