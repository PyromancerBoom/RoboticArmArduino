#include <AFMotor.h>

AF_DCMotor base(1), motor2(2), motor3(3), gripper(4);

int common = 90;
int delay_speed = 2000;
int m1_speed = 105, m2_speed = common, m3_speed = 200, m4_speed = 220;

void setup()
{
  base.setSpeed(m1_speed);    // BASE
  motor2.setSpeed(m2_speed);  // Right side -> BACK AND FORTH
  motor3.setSpeed(m3_speed);  // LEFT MOTOR -> UP AND DOWN
  gripper.setSpeed(m4_speed); // Gripper   

  delay(delay_speed*1.5);

  //At  point A
  base.run(FORWARD);
  delay(delay_speed*0.5);
  base.run(RELEASE);

  // At point B
  motor2.run(BACKWARD);
  motor3.run(FORWARD);
  delay(delay_speed);

  gripper.run(BACKWARD);
  delay(delay_speed);

  motor2.run(FORWARD);
  motor3.run(BACKWARD);
  delay(delay_speed*2);
  
  base.run(FORWARD);
  delay(delay_speed);

  gripper.run(FORWARD);
  delay(delay_speed*0.5);
  
  base.run(RELEASE);
  gripper.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  
}

void loop(){}
