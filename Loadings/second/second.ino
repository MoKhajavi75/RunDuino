// RunDuino, Arduino by MohamadKh75
// 2017-06-27
// ********************


#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);    //connected to pins


int i;
float perc=0;
String sign = "%";

void setup()
{
  lcd.begin(16, 2);
  lcd.clear();
  
  for (int i = 0  ; i<16 ; ++i)
    {
    lcd.setCursor(i,0);
    lcd.print((char)511);
    perc += 6.25;
    
    lcd.setCursor(6,1);
    lcd.print(int(perc) + sign);
    
    delay(300);
    }

    delay(1000);
    lcd.clear();
    lcd.setCursor(3,0);
    lcd.write("MohamadKh75");
}
 
void loop()
{
  // Nothing Here Yet!
}
