## EEE-201 Chapter 3

Let's complete our project by learning how to control our servos manually through the use of a joystick; we'll look at how to use arrays to make our motion more smooth.  Finally, we'll be putting on laser diode on the servos and controlling it through various means.

## Table of contents

* [Part 1 - 2-axis joystick](#part-1---2-axis-joystick)
* [Part 2 - smoothing the joystick](#part-2---smoothing-the-joystick)
* [Part 3 - putting it all together](#part-3---putting-it-all-together)


## Part 1 - 2-axis joystick

We begin by first getting the joystick working; hook it up as shown in the diagram below:
<img src="https://raw.githubusercontent.com/techshop/EEE-201-Arduino-2/master/chapter_3/Chapter_3-Part_1_bb.png">

Load the sketch named [joystick.ino](https://github.com/techshop/EEE-201-Arduino-2/blob/master/chapter_3/joystick.ino) onto your Arduino and then open up the serial monitor. You should see the values on it change as you push the joystick around.

You can even open up the serial plotter (Tools > Serial Plotter) to visualize the joystick position
<img src="https://raw.githubusercontent.com/techshop/EEE-201-Arduino-2/master/chapter_3/joystick.png">

## Part 2 - smoothing the joystick

When looking at how your joystick values change, you may have noticed that the values are very sensitive to small changes to the joystick, and that those changes are "sharp" - we can smooth out the joystick values through the use of an array.  You can think of an [array](https://www.arduino.cc/en/Reference/Array) as a list of values. Each value has a defined location within the array, and can be accessed by this position - a simple analogy is a train with multiple train cars, each train car holds a single number and that number can be acquired by its position within the train.

Upload the sketch [smooth.ino](https://github.com/techshop/EEE-201-Arduino-2/blob/master/chapter_3/smooth.ino) and inspect the serial plotter again - you should see that the joystick value (this sketch only logs one of the directions, not both) has been smoothed out.

## Part 3 - putting it all together

Now that we know how to use our joystick, let's use it to control our pan/tilt servo unit; we will hook the servos and the joystick together as shown in the figure below:
<img src="https://raw.githubusercontent.com/techshop/EEE-201-Arduino-2/master/chapter_3/Chapter_3-Part_3_bb.png">

Upload the sketch [joystick_servo.ino](https://github.com/techshop/EEE-201-Arduino-2/blob/master/chapter_3/joystick_servo.ino) and start controlling your servos!
