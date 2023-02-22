#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

#define SCLK 14
#define DIN 13
#define DC 2
#define CS 15
#define RST 0

Adafruit_PCD8544 lcd = Adafruit_PCD8544(SCLK, DIN, DC, CS, RST);

void setup() {
  lcd.begin();
  lcd.setContrast(50);
  lcd.clearDisplay();
  lcd.setCursor(0, 0);
  lcd.println("Hello, World!");
  lcd.display();
}

void loop() {
  
}