/*
   Code for CASE line following robot that will be attending the Robot Championship in Sweden 2019.
   Authors:
   Oskar Johansson - email@email.com
   Isak Åslund - aslundisak@gmail.com
*/

/*
   Things to implement:
   LED - ok
   Button - ok
   Motor - ok
   Encoder - ok
   Control - (Control loop for maintaining a certain speed and acceleration)
   Sensors - (Setup and basic commands for reading data from the sensors)
   Algorithm - (The algorithm used to decide how to drive the robot, this will probably not be needed in the start since the controller will take care of it. Only if we need more advanced techics.
*/


// Important - Rember to only include library files such as <Wire.h> in this file (the main file) because of how the compiler works in Arduino IDE.
#include "led.h"
#include "button.h"
#include "motor.h"
#include "encoder.h"


void setup() {
  // put your setup code here, to run once:
  ledSetup();
  buttonSetup();
  motorSetup();
  encoderSetup();

}

void loop() {

}