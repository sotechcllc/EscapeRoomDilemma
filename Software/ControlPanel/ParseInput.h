/*
 * ParseInput.h
 *
 * This script serves as a method to parse any input of keypad for further processing
 *
 * Fluvio L Lobo Fenoglietto 06/24/2017 
 */

//  Delete Last Input
//    The following function deletes the last user input character  


//  Consolidate Input
//    The following fuction concatenates the user input  
void ConsolidateInput(char KeyInput) {

  user_input += KeyInput;
  
  Serial.println(user_input);

  // Delete Last Character
  if (KeyInput == 'D') {
    int input_len = user_input.length();        // Determine length of user input
    Serial.println(input_len);
    user_input.remove(input_len - 2);
    Serial.println(user_input);
  }
  
}

void ParseInput(char KeyInput) {

  ConsolidateInput(KeyInput);
  // Print Input
  // Compare to Password List
  Serial.println(KeyInput);
  
} // End of ParseInput()



void VerifyPassword(int mode, char KeyInput) {

}



 
