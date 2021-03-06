/*
 * Control Panel
 * 
 * The following algorithm control lights based on a keypad input visualized on a 5" screen
 * The algorithm was designed for Chaz Grove at Escape Room Dilemma LLC
 * 
 * Fluvio L Lobo Fenoglietto 06/24/2017
 */


/// Import Libraries and/or Modules
#include "KeypadSetup.h"
#include "ServoSetup.h"
#include "Adafruit_RA8875Setup.h"
#include "LEDSetup.h"
#include "ParseInput.h"

void setup() {

  Serial.begin(9600);                 // Setup serial communication
  RA8875Setup();                      // Setup screen
  LEDSetup();                         // Setup LEDs
  SetupServo();                       // Setup Servo

}

void loop() {

  char customKey = customKeypad.getKey();
  
  if (customKey){
    mode = ParseInput(mode, customKey);
  }

}
