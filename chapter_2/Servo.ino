#include <Servo.h> // load the servo library

Servo panServo;  // create servo object to control a servo

void setup() {
  panServo.attach(10);  // attaches the servo on pin 10 to the servo object
}

void loop() {
  panServo.write(0); // move servo to position 0 (in degrees)
  delay(500);

  panServo.write(45); // move servo to position 45 (in degrees)
  delay(500);

  panServo.write(90); // move servo to position 90 (in degrees)
  delay(500);

  panServo.write(180); // move servo to position 180 (in degrees)
  delay(500);
}
