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
char    password_third[5]     = "2451";
char    password_four[5]      = "*318";
char    password_five[5]      = "###0";


/// Scenario ONE
// First password
void scenarioOne() {
  
  tft.fillScreen(RA8875_BLACK);
  
}

/// SCENE: Starting
// The following function simulates a "start-up routine" after submitting an answer to the startup screen
void loadingSequence() {

  //tft.fillScreen(RA8875_BLACK);
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
    delay(500);
  } // End of loading graphics loop

  scenarioOne();
  
} // End of loadingSequence()
