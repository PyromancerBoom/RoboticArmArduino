#include <AFMotor.h>

AF_DCMotor base(1), motor2(2), motor3(3), gripper(4);

int common = 95;
int delay_speed = 2000;
int m1_speed = common, m2_speed = common, m3_speed = common, m4_speed = common;

void vertical_line_down(){
  motor3.run(FORWARD);
}

void vertical_line_up(){
  motor3.run(BACKWARD);
}

void right(){
  base.run(FORWARD);
}

void left(){
  base.run(BACKWARD);
}

void square(){
  vertical_line_down();
  delay(delay_speed);
  right();
  delay(delay_speed);
  left();
  delay(delay_speed);
  vertical_line_up();
  delay(delay_speed);
}

void L(){
  vertical_line_down();
  delay(delay_speed*1.5);
  right();
  delay(delay_speed*1.5);
}

void setup()
{
  base.setSpeed(m1_speed);    // BASE
  motor2.setSpeed(m2_speed);  // Right side -> BACK AND FORTH
  motor3.setSpeed(m3_speed);  // LEFT MOTOR -> UP AND DOWN
  gripper.setSpeed(m4_speed); // Gripper
  gripper.run(BACKWARD);
  delay(delay_speed*1.5);

  square();

  L();
  

  
  delay(delay_speed*0.5);
  base.run(RELEASE);
  gripper.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  
}

void loop(){}
