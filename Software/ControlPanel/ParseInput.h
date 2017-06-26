/*
 * ParseInput.h
 *
 * This script serves as a method to parse any input of keypad for further processing
 *
 * Fluvio L Lobo Fenoglietto 06/24/2017 
 */


//  Delete Last Input
//    The following fuction deletes the last input on the string 
String DeleteLastInput(String user_input) {
  
  input_len = user_input.length();
  user_input.remove(input_len - 1);
  Serial.println(user_input);
  return user_input;
  
} // End of DeleteLastInput()

//  Verify Password
//    The following fuction compares the current input to the stored algorithms
void VerifyPassword(int mode, String user_input) {

  switch (mode) {

    case 0:
      Serial.println("mode = 0");
      break;
    case 1:
      Serial.println("mode = 1");
      break;
    case 2:
      Serial.println("mode = 2");
      break;
    
  } // End of Mode switch

}

//  Consolidate Input
//    The following fuction concatenates the user input  
void ConsolidateInput(char KeyInput) {

  user_input += KeyInput;
  Serial.println(user_input);
  
} // End of ConsolidateInput

void ParseInput(int mode, char KeyInput) {

  switch (KeyInput) {

    case 'D': // Delete Last Input
      user_input = DeleteLastInput(user_input);
      break;
    case 'A': // Submit Input
      VerifyPassword(mode, user_input);
      break;
    default: // Consolidate Input
      ConsolidateInput(KeyInput);
      break;
    
  } // End of KeyInput switch
  
} // End of ParseInput()





 
