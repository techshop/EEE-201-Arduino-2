#include <Servo.h> // load the servo library

Servo servo;  // create servo object to control a servo

void setup() {
  servo.attach(10);  // attaches the servo on pin 10 to the servo object
}

void loop() {
  servo.write(0); // move servo to position 0 (in degrees)
  delay(500);
  
  servo.write(45); // move servo to position 45 (in degrees)
  delay(500);
  
  servo.write(90); // move servo to position 90 (in degrees)
  delay(500);
  
  servo.write(180); // move servo to position 180 (in degrees)
  delay(500);
}

