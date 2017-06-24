/*
 * Control Panel
 * 
 * The following algorithm control lights based on a keypad input visualized on a 5" screen
 * The algorithm was designed for Chaz Grove at Escape Room Dilemma LLC
 * 
 * Fluvio L Lobo Fenoglietto 06/24/2017
 */


/// Import Libraries and/or Modules
#include "Keypad.h"


/// Keypad Variables
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {22, 24, 26, 28}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {30, 32, 34, 36}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup() {

  Serial.begin(9600);

}

void loop() {

  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }

}
