## EEE-201 Chapter 2

Now that we know what sort of signal a servo requires in order to be controlled, let's learn how to do that with an Arduino.  We'll also be looking into how to make this process a lot easier through the use of the Servo library; and we'll be diving into more programming by learning several new control structures.

## Table of contents

* [Part 1 - square wave on the Arduino](#part-1---square-wave-on-the-Arduino)
* [Part 2 - Arduino libraries](#part-2---Arduino-libraries)
* [Part 3 - Control structures](#part-3---control-structures)


## Part 1 - square wave on the Arduino

[SquareWave.ino](https://github.com/techshop/EEE-201-Arduino-2/blob/master/chapter_2/SquareWave.ino)

## Part 2 - Arduino libraries


[Servo.ino](https://github.com/techshop/EEE-201-Arduino-2/blob/master/chapter_2/Servo.ino)

## Part 3 - control structures

[Sweep.ino](https://github.com/techshop/EEE-201-Arduino-2/blob/master/chapter_2/Sweep.ino)

```C
void loop() {
    while (pos < 180) {
        pos += 1;
        // in steps of 1 degree
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
      }
      while (pos > 0) {
        pos -= 1;
        myservo.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
      }
}
```

[for vs while](https://stackoverflow.com/questions/2950931/for-vs-while-in-c-programming)

talk about `break` and `continue`
