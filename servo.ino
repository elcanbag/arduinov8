#include <Servo.h>

Servo myservo;
int potPin = A0;
int val = 0;

void setup() {
  myservo.attach(9);
}

void loop() {
  val = analogRead(potPin);
  val = map(val, 0, 1023, 0, 180);
  myservo.write(val);
  delay(15);
}
