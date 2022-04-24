#include <AFMotor.h>

AF_DCMotor motor1(1), motor2(2), motor3(2), gripper(4);

int delay_speed = 1000;
int m1_speed = 50, m2_speed = 200, m3_speed = 200, m4_speed = 200;

void setup()
{
  motor1.setSpeed(m1_speed);  // BASE
  motor2.setSpeed(m2_speed);  // Right side -> BACK AND FORTH
  motor3.setSpeed(m3_speed);  // LEFT MOTOR -> UP AND DOWN
  gripper.setSpeed(m4_speed); // Gripper
}

void loop()
{
  motor1.run(FORWARD);
  delay(delay_speed);

  motor1.run(BACKWARD);
  delay(delay_speed);
}
