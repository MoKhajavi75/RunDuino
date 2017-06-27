// RunDuino, Arduino by MohamadKh75
// 2017-06-27
// ********************


#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);    //connected to pins


void setup()
{
  lcd.begin(16, 2);
  
  for (int i = 0 ; i<16 ; ++i)
    {
    lcd.clear();
    lcd.setCursor(i,0);
    lcd.print((char)126);
    delay(300);
    }

  for (int i = 14 ; i>-1 ; --i)
    {
    lcd.clear();
    lcd.setCursor(i,0);
    lcd.print((char)127);
    
    if (i==0)
      {
      delay(250);
      continue;
      }
    delay(300);
    }

    lcd.clear();
    lcd.setCursor(3,0);
    lcd.write("MohamadKh75");
}
 
void loop()
{
  // Nothing Here Yet!
}
