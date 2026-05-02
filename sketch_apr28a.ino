#include <Wire.h>

#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

int analogPin = A0;
int val = 0;
int lastVal = -1;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  // lcd.print("Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);
  if (val != lastVal) {
    lastVal = val;
    lcd.setCursor(0, 0);
    lcd.print(val * (5.0 / 1023.0));
    lcd.print("    ");
  }
}
