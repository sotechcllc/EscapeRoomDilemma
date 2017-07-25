/*
 * ScenarioSetup.h
 *
 * The following script contains the variables and information pertaining to the scenario/game
 *
 * Fluvio Lobo Fenoglietto 06/24/2017
 */

/// Scenario Variables

int mode                      = 0;                // Initial mode, "want to play?"
//                            = 1;                // First password
//                            = 2;                // Second password
//                            = 3;                // Third password
//                            = 4;                // Fourth password
//                            = 5;                // Fifth password

String  user_input            = "";
int     input_len             = 0;

String  password_zero         = "1";
char    password_one[3]       = "29";
char    password_two[4]       = "367";
char    password_three[5]     = "2451";
char    password_four[5]      = "*318";
char    password_five[5]      = "###0";

/// Ending Sequence
// The following function simulates a "ending routine" after submitting the correct password to the last 
void EndingSequence() {

  tft.fillScreen(RA8875_GREEN);
  tft.textMode();
  
  char title[19] = "SEQUENCE COMPLETED";
  tft.textSetCursor(100, 200);
  tft.textColor(RA8875_RED, RA8875_GREEN);
  tft.textEnlarge(4);  
  tft.textWrite(title);

  delay(200);
  
} // End of loadingSequence()


/// Scenario FIVE
// Five password
void ScenarioFive() {
  
  tft.fillScreen(RA8875_BLACK);
  tft.textMode();
  
  char title[19] = "ENTER SEQUENCE 5:";
  tft.textSetCursor(100, 150);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(title);

  char display_input[10];
  user_input.toCharArray(display_input,10);
  tft.textSetCursor(100, 225);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(display_input);
  
} // End of ScenarioFive() function

/// Scenario FOUR
// Fourth password
void ScenarioFour() {
  
  tft.fillScreen(RA8875_BLACK);
  tft.textMode();
  
  char title[19] = "ENTER SEQUENCE 4:";
  tft.textSetCursor(100, 150);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(title);

  char display_input[10];
  user_input.toCharArray(display_input,10);
  tft.textSetCursor(100, 225);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(display_input);
  
} // End of ScenarioFour() function

/// Scenario THREE
// Third password
void ScenarioThree() {
  
  tft.fillScreen(RA8875_BLACK);
  tft.textMode();
  
  char title[19] = "ENTER SEQUENCE 3:";
  tft.textSetCursor(100, 150);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(title);

  char display_input[10];
  user_input.toCharArray(display_input,10);
  tft.textSetCursor(100, 225);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(display_input);
  
} // End of ScenarioThree() function

/// Scenario TWO
// First password
void ScenarioTwo() {
  
  tft.fillScreen(RA8875_BLACK);
  tft.textMode();
  
  char title[19] = "ENTER SEQUENCE 2:";
  tft.textSetCursor(100, 150);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(title);

  char display_input[10];
  user_input.toCharArray(display_input,10);
  tft.textSetCursor(100, 225);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(display_input);
  
} // End of ScenarioTwo() function

/// Scenario ONE
// First password
void ScenarioOne() {
  
  tft.fillScreen(RA8875_BLACK);
  tft.textMode();
  
  char title[19] = "ENTER SEQUENCE 1:";
  tft.textSetCursor(100, 150);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(title);

  char display_input[10];
  user_input.toCharArray(display_input,10);
  tft.textSetCursor(100, 225);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(display_input);
  
} // End of ScenarioOne() function

void InitScreen() {

  tft.fillScreen(RA8875_MAGENTA);

  /* Switch to text mode */  
  tft.textMode();

  /* Render some text! */
  char title[15] = "SURGICAL UNIT ";
  char instruction_zero[28] = "Begin Activation Sequence?";
  char instruction_one[31] = "Y(1)/N(0) | ENTER(A)/DELETE(D)";

  /* Change the cursor location and color ... */  
  tft.textSetCursor(50, 100);
  tft.textColor(RA8875_RED, RA8875_MAGENTA);
  tft.textEnlarge(3);
  tft.textWrite(title);
  
  tft.textSetCursor(50, 175);
  tft.textEnlarge(2);
  tft.textWrite(instruction_zero);

  tft.textSetCursor(50, 225);
  tft.textEnlarge(1);
  tft.textWrite(instruction_one);

  char display_input[10];
  user_input.toCharArray(display_input,10);
  tft.textSetCursor(50, 300);
  tft.textColor(RA8875_RED, RA8875_BLUE);
  tft.textEnlarge(3);  
  tft.textWrite(display_input);
  
} // End of InitScreen()

// Incorrect Screen
//  The following function generates a momentary CORRECT message on the screen with a loading mechanic, similar to the Loading Screen function
void IncorrectSequence() {

  tft.fillScreen(RA8875_RED);                             // Clear screen
  tft.textMode();                                           // Enable text mode
  
  char title[11] = "INCORRECT ";
  tft.textSetCursor(200, 150);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(title);

  int horiz_shift = 32;
  int horiz_pos = 200;
  for (int i=0; i<8; i++) {
    int new_horiz_pos = horiz_pos + horiz_shift*(i);
    char loading_symbol[2] = "=";
    tft.textSetCursor(new_horiz_pos, 225);
    tft.textColor(RA8875_BLUE, RA8875_RED);
    tft.textEnlarge(3);
    tft.textWrite(loading_symbol);
    delay(150);
  } // End of loading graphics loop

} // End of CorrectSequence()

// Correct Screen
//  The following function generates a momentary CORRECT message on the screen with a loading mechanic, similar to the Loading Screen function
void CorrectSequence() {

  tft.fillScreen(RA8875_GREEN);                             // Clear screen
  tft.textMode();                                           // Enable text mode
  
  char title[9] = "CORRECT ";
  tft.textSetCursor(200, 150);
  tft.textColor(RA8875_RED, RA8875_GREEN);
  tft.textEnlarge(3);  
  tft.textWrite(title);

  int horiz_shift = 32;
  int horiz_pos = 200;
  for (int i=0; i<8; i++) {
    int new_horiz_pos = horiz_pos + horiz_shift*(i);
    char loading_symbol[2] = "=";
    tft.textSetCursor(new_horiz_pos, 225);
    tft.textColor(RA8875_RED, RA8875_GREEN);
    tft.textEnlarge(3);
    tft.textWrite(loading_symbol);
    delay(250);
  } // End of loading graphics loop

} // End of CorrectSequence()

/// Loading Sequence
// The following function simulates a "start-up routine" after submitting an answer to the startup screen
void LoadingSequence() {

  tft.fillScreen(RA8875_RED);
  tft.textMode();
  
  char title[19] = "STARTING SEQUENCE ";
  tft.textSetCursor(100, 150);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(title);

  char spacing[19] = "                  ";
  tft.textSetCursor(100, 225);
  tft.textColor(RA8875_BLUE, RA8875_RED);
  tft.textEnlarge(3);  
  tft.textWrite(spacing);

  int horiz_shift = 32;
  int horiz_pos = 100;
  for (int i=0; i<18; i++) {
    int new_horiz_pos = horiz_pos + horiz_shift*(i);
    char loading_symbol[2] = "=";
    tft.textSetCursor(new_horiz_pos, 300);
    tft.textColor(RA8875_BLUE, RA8875_RED);
    tft.textEnlarge(3);
    tft.textWrite(loading_symbol);
    delay(200);
  } // End of loading graphics loop
  
} // End of loadingSequence()
