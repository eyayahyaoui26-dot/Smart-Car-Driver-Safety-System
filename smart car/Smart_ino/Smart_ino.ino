#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int MQ3_PIN = A0;
const int LED_PIN = 8;
const int BUZZER_PIN = 9;
const int ALCOHOL_THRESHOLD = 400;
void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Smart Car Ready");
  delay(2000);
  lcd.clear();
}
void loop() {
  int alcoholValue = analogRead(MQ3_PIN);
  if (Serial.available() > 0) {
    char signal = Serial.read();
    if (signal == '1') {
      triggerAlert("Drowsiness!", "Stay Awake!");
    }
  }
  if (alcoholValue > ALCOHOL_THRESHOLD) {
    triggerAlert("Alcohol Det.", "Do Not Drive!");
  } else {
    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);
    lcd.clear();
    lcd.print("Driver: Safe");
    delay(500);
  }
}
void triggerAlert(String line1, String line2) {
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(BUZZER_PIN, HIGH);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(line1);
  lcd.setCursor(0, 1);
  lcd.print(line2);
  delay(1000);
}
