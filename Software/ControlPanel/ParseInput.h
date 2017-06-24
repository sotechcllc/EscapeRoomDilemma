/*
 * ParseInput.h
 *
 * This script serves as a method to parse any input of keypad for further processing
 *
 * Fluvio L Lobo Fenoglietto 06/24/2017 
 */

void ConsolidateInput(char KeyInput) {

  user_input = concat(user_input, KeyInput);
  Serial.println(user_input);
  
}

void ParseInput(char KeyInput) {

  ConsolidateInput(KeyInput);
  // Print Input
  // Compare to Password List
  Serial.println(KeyInput);
  
} // End of ParseInput()



void VerifyPassword(int mode, char KeyInput) {

}



 
