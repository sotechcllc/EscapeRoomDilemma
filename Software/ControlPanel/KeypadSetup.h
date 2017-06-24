/*
 * KeypadSetup.h 
 *
 * Fluvio L Lobo Fenoglietto 06/24/2017
 */
 
 
/// Impoprt Libraries and/or Modules
#include "Keypad.h"

/// Keypad Variables
const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns

/// Key Definitions
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {22, 24, 26, 28}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {30, 32, 34, 36}; //connect to the column pinouts of the keypad

/// Initialize Keypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
