#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // sets the interfacing pins

void setup()
{
Serial.begin(9600);
 lcd.begin(16, 2);  // initializes the 16x2 LCD
}

void loop()
{
  lcd.setCursor(8,1);        //sets the cursor at row 0 column 0
    if(Serial.available() > 0) {
    char data = Serial.read();
    lcd.print(data);
    /*
 if (data == 1){
     
  lcd.print("low"); 
 }
  */
    }

  lcd.setCursor(5,0);          //sets the cursor at row 1 column 2
  lcd.print("DENSITY");
}

