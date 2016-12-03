// manual square wave to control servo

#define pin 10 // data pin to control servo


// pulse width (in microseconds)
// 500us is servo position 0 degrees
// 1500us is servo position 90 degrees
// 2500us is servo position 180 degrees
int pulsewidth = 2500; 

int period = 25000; // wave period in microseconds

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {

  // turn pulse on for pulsewidth duration
  digitalWrite(pin, HIGH);
  delayMicroseconds(pulsewidth);

  // turn pulse off
  digitalWrite(pin, LOW);
  delayMicroseconds(period - pulsewidth);

}
