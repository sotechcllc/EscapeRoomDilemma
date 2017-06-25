/*
 * ParseInput.h
 *
 * This script serves as a method to parse any input of keypad for further processing
 *
 * Fluvio L Lobo Fenoglietto 06/24/2017 
 */



void VerifyPassword(int mode, String user_input) {

  switch (mode) {
    
  } // End of Mode switch

}

//  Consolidate Input
//    The following fuction concatenates the user input  
void ConsolidateInput(char KeyInput) {

  switch (KeyInput) {

    case 'D': // Delete Last Input
      input_len = user_input.length();
      user_input.remove(input_len - 1);
      Serial.println(user_input);
      break;
    case 'A': // Submit Input
      
    default:
      user_input += KeyInput;
      Serial.println(user_input);
      break;
    
  } // End of KeyInput switch
  
} // End of ConsolidateInput

void ParseInput(char KeyInput) {

  ConsolidateInput(KeyInput);
  // Print Input
  // Compare to Password List
  //Serial.println(KeyInput);
  
} // End of ParseInput()





 
