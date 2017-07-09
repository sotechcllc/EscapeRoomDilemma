/*
 * ParseInput.h
 *
 * This script serves as a method to parse any input of keypad for further processing
 *
 * Fluvio L Lobo Fenoglietto 06/24/2017 
 */

//  Delete Entire Input
//    The following fuction deletes the entire input string
String DeleteInput(String user_input) {

  //input_len = user_input.length();
  //user_input.remove(input_len - 3);
  //Serial.println(user_input);
  user_input = "";
  return user_input;
  
} // End of DeleteLastInput()

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
int VerifyPassword(int mode, String user_input) {
  
  switch (mode) {

    case 0:
      Serial.println("mode = 0");
      if (user_input.equals(password_zero)) {
        Serial.println("Correct input, moving to mode = 1");
        loadingSequence();
        mode = 1;
      }
      break;
    case 1:
      Serial.println("mode = 1");
      if (user_input.equals(password_one)) {
        Serial.println("Correct input, moving to mode = 2");
        // correct message
        scenarioTwo();
        mode = 2;
      } else {
        Serial.println("Incorrect input, still in mode = 1");
        Serial.println("Resetting user input...");
      }
      break;
    case 2:
      Serial.println("mode = 2");
      break;
    
  } // End of Mode switch

  return mode;

}

//  Consolidate Input
//    The following fuction concatenates the user input  
void ConsolidateInput(char KeyInput) {

  user_input += KeyInput;
  Serial.println(user_input);
  
} // End of ConsolidateInput

/*
 * Parse Input
 *  The Parse Input function operates on the user input based on the key pressed
 *  D   - Delete last input (continuos)
 *  A   - Submit input
 *  def - Consolidate input (build input string) 
 */
int ParseInput(int mode, char KeyInput) {

  switch (KeyInput) {

    case 'D': // Delete Last Input
      user_input = DeleteLastInput(user_input);
      break;
    case 'A': // Submit Input
      mode = VerifyPassword(mode, user_input);      // Upon submission, the program compares the input with the hard-coded passwords
      user_input = DeleteInput(user_input);         // Regardless of the correct/incorrect submission, the user input is deleted completely
      break;
    default: // Consolidate Input
      ConsolidateInput(KeyInput);
      break;
    
  } // End of KeyInput switch

  switch (mode) {

    case 1:
      scenarioOne();
      break;
    case 2:
      scenarioTwo();
      break;
    default:
      break;
    
  } // End of mode switch

  return mode;
  
} // End of ParseInput()





 
