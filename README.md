# Step
Footsteps power generation 
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define PIEZO_PIN A0        // Analog pin connected to piezo through the rectifier, cap, and voltage divider
#define STEP_THRESHOLD 80   // Threshold for step detection (adjust as per your sensor/circuit)
#define MIN_BETWEEN_STEPS 100   // Min time between step counts to prevent double-counting (ms)

LiquidCrystal_I2C lcd(0x27, 16, 2); // Change 0x27 to 0x3F if your LCD uses different address

unsigned long lastStepTime = 0;
unsigned int stepCount = 0;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Footstep Power");
  lcd.setCursor(0, 1);
  lcd.print("Init...");
  delay(2000);
  lcd.clear();

  pinMode(PIEZO_PIN, INPUT);
}

void loop() {
  int sensorValue = analogRead(PIEZO_PIN);
  float voltage = (sensorValue / 1023.0) * 5.0; // Convert ADC value to voltage

  // Step detection with debouncing
  if(sensorValue > STEP_THRESHOLD && (millis() - lastStepTime > MIN_BETWEEN_STEPS)) {
    stepCount++;
    lastStepTime = millis();
  }

  // Display step count and voltage on LCD
  lcd.setCursor(0,0);
  lcd.print("Steps: ");
  lcd.print(stepCount);
  lcd.print("   "); // Clear trailing chars

  lcd.setCursor(0,1);
  lcd.print("Volt: ");
  lcd.print(voltage, 2);
  lcd.print("V    "); // Clear trailing chars

  delay(100);
}
