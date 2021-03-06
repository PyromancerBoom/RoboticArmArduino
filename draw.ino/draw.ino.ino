#include <AFMotor.h>

AF_DCMotor base(1), motor2(2), motor3(3), gripper(4);

int common = 100;
int delay_speed = 900;
int m1_speed = common, m2_speed = common, m3_speed = 200, m4_speed = 100;

void setup()
{
  base.setSpeed(m1_speed);    // BASE
  motor2.setSpeed(m2_speed);  // Right side -> BACK AND FORTH
  motor3.setSpeed(m3_speed);  // LEFT MOTOR -> UP AND DOWN
  gripper.setSpeed(m4_speed); // Gripper
  
  gripper.run(FORWARD);
  delay(delay_speed);
}

void loop()
{
  base.run(FORWARD);
  delay(delay_speed);

  base.run(BACKWARD);
  delay(delay_speed);

  motor2.run(FORWARD);
  delay(delay_speed);

  motor2.run(BACKWARD);
  delay(delay_speed);

  motor3.run(FORWARD);
  delay(delay_speed);

  motor3.run(BACKWARD);
  delay(delay_speed);
  
}
