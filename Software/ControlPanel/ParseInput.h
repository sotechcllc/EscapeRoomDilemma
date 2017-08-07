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
        LoadingSequence();
        ScenarioOne();
        mode = 1;
      }
      break;
    case 1:
      Serial.println("mode = 1");
      if (user_input.equals(password_one)) {
        Serial.println("Correct input, moving to mode = 2");
        digitalWrite(LED1, HIGH);
        CorrectSequence();
        ScenarioTwo();
        mode = 2;
      } else {
        Serial.println("Incorrect input, still in mode = 1");
        Serial.println("Resetting user input...");
        IncorrectSequence();
      }
      break;
    case 2:
      Serial.println("mode = 2");
      if (user_input.equals(password_two)) {
        Serial.println("Correct input, moving to mode = 3");
        digitalWrite(LED2, HIGH);
        CorrectSequence();
        ScenarioThree();
        mode = 3;
      } else {
        Serial.println("Incorrect input, still in mode = 2");
        Serial.println("Resetting user input...");
        IncorrectSequence();
      }
      break;
    case 3:
      Serial.println("mode = 3");
      if (user_input.equals(password_three)) {
        Serial.println("Correct input, moving to mode = 4");
        digitalWrite(LED3, HIGH);
        CorrectSequence();
        ScenarioFour();
        mode = 4;
      } else {
        Serial.println("Incorrect input, still in mode = 3");
        Serial.println("Resetting user input...");
        IncorrectSequence();
      }
      break;
    case 4:
      Serial.println("mode = 4");
      if (user_input.equals(password_four)) {
        Serial.println("Correct input, moving to mode = 5");
        digitalWrite(LED4, HIGH);
        CorrectSequence();
        ScenarioFive();
        mode = 5;
      } else {
        Serial.println("Incorrect input, still in mode = 4");
        Serial.println("Resetting user input...");
        IncorrectSequence();
      }
      break;
    case 5:
      Serial.println("mode = 5");
      if (user_input.equals(password_five)) {
        Serial.println("Correct input, process completed");
        digitalWrite(LED5, HIGH);
        EndingSequence();
        //ScenarioFour();
        mode = 6;
      } else {
        Serial.println("Incorrect input, still in mode = 5");
        Serial.println("Resetting user input...");
        IncorrectSequence();
      }
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

    case 0:
      InitScreen();
      break;
    case 1:
      ScenarioOne();
      break;
    case 2:
      ScenarioTwo();
      break;
    case 3:
      ScenarioThree();
      break;
    case 4:
      ScenarioFour();
      break;
    case 5:
      ScenarioFive();
      break;
    case 6:
      EndingSequence();
      break;
    default:
      break;
    
  } // End of mode switch

  return mode;
  
} // End of ParseInput()





 
