#include <Arduino.h>
#define LED_BUILTIN 2
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(115200);
  Serial.println("Hello world");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  digitalWrite(LED_BUILTIN,HIGH);
  Serial.println("Hello world from loop");
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);
}