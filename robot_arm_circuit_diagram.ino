// C++ code
//
#include <Servo.h>

int position = 0;

int i = 0;

Servo servo_8;

Servo servo_9;

Servo servo_10;

Servo servo_11;

Servo servo_12;

void setup()
{
  servo_8.attach(8, 500, 2500);

  servo_9.attach(9, 500, 2500);

  servo_10.attach(10, 500, 2500);

  servo_11.attach(11, 500, 2500);

  servo_12.attach(12, 500, 2500);

}

void loop()
{
  position = 0;
  for (position = 0; position <= 180; position += 90) {
    servo_8.write(position);
    servo_9.write(position);
    servo_10.write(position);
    servo_11.write(position);
    servo_12.write(position);
    delay(2000); // Wait for 2000 millisecond(s)
  }
  for (position = 180; position >= 0; position -= 90) {
    servo_8.write(position);
    servo_9.write(position);
    servo_10.write(position);
    servo_11.write(position);
    servo_12.write(position);
    delay(2000); // Wait for 2000 millisecond(s)
  }
}