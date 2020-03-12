/* Sweep
  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013
  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 90;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10);  // attaches the servo on pin 10 to the servo object
  
  myservo.write(90);              // tell servo to go to centre
  
  myservo2.write(97);              // tell servo to go to centre
  delay(100);
}

int low = 60;
int high = 90;
int movespeed=30;
void loop() {
  for (pos = low; pos <= high; pos += 1) { // goes from low to high
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(movespeed);                       // waits to achieve position
  }
  for (pos = low; pos <= high; pos += 1) { // goes from low to high
    // in steps of 1 degree
    myservo2.write(pos+2);              // tell servo to go to position in variable 'pos'
    delay(movespeed);                       // waits to achieve position
  }
  for (pos = high; pos >= low; pos -= 1) { // goes from high to low
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(movespeed);                       // waits to achieve position
  }
  for (pos = high; pos >= low; pos -= 1) { // goes from high to low
    // in steps of 1 degree
    myservo2.write(pos+2);              // tell servo to go to position in variable 'pos'
    delay(movespeed);                       // waits to achieve position
  }
  movespeed+=10;

}
