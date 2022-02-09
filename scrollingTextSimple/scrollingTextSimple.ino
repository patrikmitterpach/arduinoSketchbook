#include <LiquidCrystal.h>
#include <string.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const short displayWidth = 16;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(displayWidth, 2);
}


void loop() {
  char string[16] = "@mitterpach";  

  lcd.setCursor(displayWidth, 1);
  lcd.autoscroll();

  for (int i = 0; i < strlen(string) + displayWidth; i++) {
    if (i < strlen(string))
      lcd.print(string[i]);
    else
      lcd.print(" ");
    delay(200);
  }

  lcd.noAutoscroll();
  lcd.clear();
}
