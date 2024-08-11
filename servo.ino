#include <Servo.h>

Servo servo;  // create servo object to control a servo

void setup() {
  servo.attach(9);  // attaches the servo on pin 9 to the servo object
  servo.write(0);   // rotate slowly servo to 0 degrees immediately
}

void loop() {
  for (int pos = 0; pos <= 180; pos += 1) {  // rotate slowly from 0 degrees to 180 degrees, one by one degree
    // in steps of 1 degree
    servo.write(pos);  // control servo to go to position in variable 'pos'
    delay(10);         // waits 10ms for the servo to reach the position
  }

  for (int pos = 180; pos >= 0; pos -= 1) {  // rotate from 180 degrees to 0 degrees, one by one degree
    servo.write(pos);                        // control servo to go to position in variable 'pos'
    delay(10);                               // waits 10ms for the servo to reach the position
  }
}







