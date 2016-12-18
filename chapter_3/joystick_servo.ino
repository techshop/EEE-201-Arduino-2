#include <Servo.h>

// hook up the thumbstick to analog input pins: A0 and A1
byte joystickXpin = A0;
byte joystickYpin = A1;

// the pins to control our servos
byte panPin = 3;
byte tiltPin = 6;

// the position of the joystick
int joystickXval = 0;
int joystickYval = 0;

// servo position (in degrees)
byte panPos = 0;
byte tiltPos = 0;

// instantiate our servo objects
Servo servoPan;
Servo servoTilt;

void setup() {
  Serial.begin(9600);

  // attach the servos to their pins
  servoPan.attach(panPin);
  servoTilt.attach(tiltPin);
}

void loop() {

  // get the joystick position
  joystickXval = analogRead(joystickXpin);
  joystickYval = analogRead(joystickYpin);

  // convert joystick into servo position
  // this converst values from the input
  // range [0-1023] to the range [0-180]
  panPos = map(joystickXval, 0, 1023, 0, 180);
  tiltPos = map(joystickYval, 0, 1023, 0, 180);

  // set servo position
  servoPan.write(panPos);
  servoTilt.write(tiltPos);

  delay(10); // for stability
}
