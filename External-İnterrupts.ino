int dizi[]={13,12,11};
int interrupt = 2;
int interrupt_led = 10;
void setup()
{
  pinMode(interrupt_led,OUTPUT);
  pinMode(dizi[0],OUTPUT);
  pinMode(dizi[1],OUTPUT);
  pinMode(dizi[2],OUTPUT);
  pinMode(interrupt,INPUT);
  attachInterrupt(digitalPinToInterrupt(interrupt),intr,CHANGE);
  digitalWrite(interrupt_led,LOW);
}

void loop()
{
   digitalWrite(dizi[0],HIGH);
   delay(100);
   digitalWrite(dizi[0],LOW);
   digitalWrite(dizi[1],HIGH);
   delay(100);
   digitalWrite(dizi[1],LOW);
   digitalWrite(dizi[2],HIGH);
   delay(100);
   digitalWrite(dizi[2],LOW);
}
int sayac = 0;
void intr()
{
  if(sayac%2==0)
  {
    digitalWrite(interrupt_led,HIGH);    
  }
  else
  {
        digitalWrite(interrupt_led,LOW);
  }
  sayac++;
}
