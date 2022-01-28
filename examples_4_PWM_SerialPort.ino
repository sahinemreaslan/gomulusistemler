int dizi[] ={5,6,7,8,9};
void loop()
{
	for(int i = 0;i<5;i++) pinMode(dizi[i],OUTPUT);
	serial.begin(9600);
}
void setup()
{
	int oku;
	if(serial.avaliable() > 0)
	{
		oku = serial.parseInt();// to integer value
	}
	digitalWrite(oku,HIGH);
	for(int i = 0;i<5;i++)
	{
		if( oku == dizi[i]) continue;
		else
		{
			digitalWrite(dizi[i],LOW);
		}
	}

}