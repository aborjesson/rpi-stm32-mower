/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

void setup()
{
  Serial1.begin(9600);
  // initialize LED digital pin as an output.
  pinMode(PC13, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(PC13, HIGH);
  // wait for a second
  delay(500);
  // turn the LED off by making the voltage LOW
  digitalWrite(PC13, LOW);
   // wait for a second
  delay(500);

  Serial1.print("1");
}
