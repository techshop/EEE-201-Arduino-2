## EEE-201 Chapter 1

In the [Arduino 1](https://github.com/techshop/EEE-105-Arduino-1) class, we covered the topic of [pulse width modulation](https://github.com/techshop/EEE-105-Arduino-1/tree/master/chapter_3#part-2---pwm-digital-output) (PWM); we will revisit that concept in this chapter and see how it is used to control servos.  We'll be covering the following concepts:
- pulse width, voltage and period
- duty cycle
- servo control

## Table of contents

* [Part 1 - pulse width modulation](#part-1---pulse-width-modulation)
* [Part 2 - controlling a servo](#part-2---controlling-a-servo)

## Part 1 - pulse width modulation

We [previously learned](https://github.com/techshop/EEE-105-Arduino-1/tree/master/chapter_3#part-2---pwm-digital-output) that PWM is a method of using a digital output pin (which can only be `LOW` or `HIGH`) and turning it into a quasi-analog output pin which can have almost any value between 0V to 5V; the figure below shows how this is achieved:

<p align="center">
    <img src="https://raw.githubusercontent.com/techshop/EEE-201-Arduino-2/master/chapter_1/PWM.png">
</p>

A PWM is a signal (square wave) made up of a repetitive pattern pulses or cycles, in the example above the pulses come in every 2ms: the start/end of the pulse in designated by the voltage changing from 0V to 5V.  These pulses are often designated in units of frequency which is just the inverse of the pulse period; in this case, 1/0.002s = 500 Hz.  The amount of time the signal is at 5V defines the duty cycle or pulse width; for example, if the pulse is at 5V for 1ms, the duty cycle equates to 50% (1ms/2ms).  At a 50% duty the cycle, the average voltage during the entire cycle will be 50% of the pulse voltage (5V * 50% = 2.5V).  In this way, by adjusting the pulse width, we can adjust the voltage on the output pin.

## Part 2 - controlling a servo
