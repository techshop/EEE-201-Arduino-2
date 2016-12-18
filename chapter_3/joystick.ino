// hook up the thumbstick to analog input pins: A0 and A1
byte X = A0;
byte Y = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {

  // print the X & Y thumbstick values
  Serial.print(analogRead(X));
  Serial.print(' ');
  Serial.println(analogRead(Y));
}
