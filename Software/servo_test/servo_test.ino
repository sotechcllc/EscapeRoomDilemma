/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int fix_pos = 100;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  int init_pos = myservo.read();
  if (init_pos != fix_pos)
  {
    Serial.println("Sending to 120");
    myservo.write(fix_pos);
    delay(1000);
    //myservo.detach();
    //Serial.println(myservo.read());
  }
}

void loop() {

  delay(10000);
  Serial.println("Re-attaching servo");
  //myservo.attach(9);
  Serial.println("Opening door!!");
  myservo.write(0);
  //myservo.detach();
  
}

