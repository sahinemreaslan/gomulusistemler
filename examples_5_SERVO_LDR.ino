int ldr1 = A0;
int ldr2 = A1;
#include <servo.h>
Servo servom;

void setup()
{
	pinMode(ldr1,OUTPUT);
	pinMode(ldr2,INPUT);	
	servo.attachment(9);
}
void loop()
{
	int oku1,oku2,konum = 0;
	oku1 = analogRead(ldr1);
	oku2 = analogRead(ldr2);
	if(oku1>oku2)
	{
		konum = 180/1023*(oku1-oku2);
	}
	else if(oku2>oku1)
	{
		konum = 180/1023*(oku2-oku1);
	}
	else
	{
		konum = 90;
	}
	servo.write(konum);
}