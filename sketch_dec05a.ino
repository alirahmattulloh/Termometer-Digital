#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int inPin = 0;

void setup()
{
    Serial.begin(9600);
    lcd.begin(16, 2);
    lcd.print("Suhu :");
}

void loop()
{
    int value = analogRead(inPin);

    float millivolts = (value / 1024.0)*5000;

    float celcius = millivolts / 10;
    
    lcd.setCursor(0, 1);

    lcd.print(celcius); lcd.print(" C");
  
    delay(1000);
}  
