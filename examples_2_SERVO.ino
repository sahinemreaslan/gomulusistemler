#include <servo.h>
Servo servo_b;
#servo_examples
void setup()
{
	b_servo.attachment(6);
}
void loop()
{
	b_servo.write(0);
	delay(3000);
	b_servo.write(90);
	delay(3000);
	b_servo.write(180);
}