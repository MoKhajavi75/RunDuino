// RunDuino, Arduino by MohamadKh75
// 2017-06-27
// ********************


#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);    //connected to pins

int i;
int j = 14;

void setup()
{
  lcd.begin(16, 2);
  
  for (i = 0  ; i<16 ; ++i)
    {
    lcd.clear();
    lcd.setCursor(i,0);
    lcd.print((char)126);

    lcd.setCursor(j,1);
    lcd.print((char)127);

    --j;
    delay(300);
    }


  j = 0;
  
  for (i = 15 ; i>-1 ; --i)
    {
    lcd.clear();
    lcd.setCursor(i,0);
    lcd.print((char)127);
    
    lcd.setCursor(j,1);
    lcd.print((char)126);

    ++j;
    delay(300);
    }

    delay(750);
    lcd.clear();
    lcd.setCursor(3,0);
    lcd.write("MohamadKh75");
}
 
void loop()
{
  // Nothing Here Yet!
}
