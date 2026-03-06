#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define PIEZO_PIN A0
#define STEP_THRESHOLD 80
#define MIN_BETWEEN_STEPS 100

LiquidCrystal_I2C lcd(0x27, 16, 2);

unsigned long lastStepTime = 0;
unsigned int stepCount = 0;

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Footstep Power");

  lcd.setCursor(0,1);
  lcd.print("Init...");
  delay(2000);
  lcd.clear();

  pinMode(PIEZO_PIN, INPUT);
}

void loop() {

  int sensorValue = analogRead(PIEZO_PIN);
  float voltage = (sensorValue / 1023.0) * 5.0;

  if(sensorValue > STEP_THRESHOLD && millis() - lastStepTime > MIN_BETWEEN_STEPS){
      stepCount++;
      lastStepTime = millis();
  }

  lcd.setCursor(0,0);
  lcd.print("Steps: ");
  lcd.print(stepCount);
  lcd.print("   ");

  lcd.setCursor(0,1);
  lcd.print("Volt: ");
  lcd.print(voltage,2);
  lcd.print("V   ");

  delay(100);
}
