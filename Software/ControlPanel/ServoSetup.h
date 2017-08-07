/*
 * ServoSetup.h
 *
 * Fluvio L Lobo Fenoglietto 07/26/2017
 */
 
// Import Libraries and/or Modules
#include <Servo.h>

// Variables
Servo 	myservo;
int 	servo_pin		= 8;		              // digital pin
int 	close_pos 		= 100;		          // degrees
int 	open_pos		= 0;		              // degrees

// Functions
void SetupServo() {
	myservo.attach(servo_pin);		        // attach servo object to digital pin
	if (myservo.read() != close_pos){
		Serial.println("Door open");
		Serial.println("Closing door");
		myservo.write(close_pos);
		delay(1000);
	}
}

void OpenDoor(){
	Serial.println("Opening door!");
	myservo.write(0);
	delay(1000);
}
