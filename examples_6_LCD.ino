#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,6,7);
void setup()
{
	lcd.begin(16,2);
}
void loop()
{
	lcd.course(0,1);
	lcd.print("Who Am i");
	lcd.course(1,1);
	lcd.print("İ don't Know");
}