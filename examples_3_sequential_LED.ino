int dizi[] ={2,3,4,5,6,7,8,9};
void setup()
{
	for(int i = 0;i<8;i++) pinMode(dizi[i],OUTPUT);

}
void loop()
{
	for(int i = 0;i<8;i++)
	{
		digitalWrite(dizi[i],HIGH);
		delay(1000);
		digitalWrite(dizi[i],LOW);
	}
	for(int i = 7;i>0;i--)
	{
		digitalWrite(dizi[i],HIGH);
		delay(1000);
		digitalWrite(dizi[i],LOW);
	}



}
