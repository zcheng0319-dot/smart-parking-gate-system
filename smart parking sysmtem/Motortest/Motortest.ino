#include <Servo.h>

Servo motor;

void setup() {
  Serial.begin(9600);
  Serial.println("Testing Servo on D9...");

  motor.attach(9);    
}

void loop() {
  Serial.println("Move 0");
  motor.write(0);     // Turn to 0 degrees
  delay(1500);

  Serial.println("Move 90");
  motor.write(90);    // Turn to 90 degrees
  delay(1500);

  Serial.println("Move 180");
  motor.write(180);   // Turn to 180 degrees
  delay(1500);
}

