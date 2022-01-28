int buton = 0;
int led = 13;
#traffic lights example
void setup()
{
	pinMode(buton,INPUT);
	pinMode(led,OUTPUT);
}
void loop()
{
	digitalWrite(led[0],HIGH);
	delay(2000);
	digitalWrite(led[0],LOW);
	digitalWrite(led[1],HIGH);
	delay(2000);
	digitalWrite(led[1],LOW);
	digitalWrite(led[2],HIGH);
	delay(5000);
	digitalWrite(led[2],LOW);
}
