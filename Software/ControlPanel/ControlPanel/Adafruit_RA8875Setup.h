/*
 * ScreenSetup.h
 *
 * Fluvio L Lobo Fenoglietto 06/24/2017
 */

/// Import Libraries and/or Modules 
#include <SPI.h>
#include "Adafruit_GFX.h"
#include "Adafruit_RA8875.h"

/// Define Screen Pins to Arduino Mega 2650
// Connect SCLK to Digital Pin #52 (Hardware SPI clock)
// Connect MISO to Digital Pin #50 (Hardware SPI MISO)
// Connect MOSI to Digital Pin #51 (Hardware SPI MOSI)
#define RA8875_INT 3
#define RA8875_CS 10
#define RA8875_RESET 9

Adafruit_RA8875 tft = Adafruit_RA8875(RA8875_CS, RA8875_RESET);
uint16_t tx, ty;

void RA8875Setup() {
	
	Serial.println("RA8875 start");
	/* Initialise the display using 'RA8875_480x272' or 'RA8875_800x480' */
	if (!tft.begin(RA8875_800x480)) {
		Serial.println("RA8875 Not Found!");
		while (1);
		}

    tft.displayOn(true);
    tft.GPIOX(true);      // Enable TFT - display enable tied to GPIOX
    tft.PWM1config(true, RA8875_PWM_CLK_DIV1024); // PWM output for backlight
    tft.PWM1out(255);
    tft.fillScreen(RA8875_BLACK);

    /* Switch to text mode */  
    tft.textMode();
	
    /* Set a solid for + bg color ... */
  
    /* ... or a fore color plus a transparent background */

  
    /* Set the cursor location (in pixels) */
    tft.textSetCursor(10, 10);
  
    /* Render some text! */
    char string[15] = "Hello, World! ";
    tft.textTransparent(RA8875_WHITE);
    tft.textWrite(string);
    tft.textColor(RA8875_WHITE, RA8875_RED);
    tft.textWrite(string);
    tft.textTransparent(RA8875_CYAN);
    tft.textWrite(string);
    tft.textTransparent(RA8875_GREEN);
    tft.textWrite(string);
    tft.textColor(RA8875_YELLOW, RA8875_CYAN);
    tft.textWrite(string);
    tft.textColor(RA8875_BLACK, RA8875_MAGENTA);
    tft.textWrite(string);

    /* Change the cursor location and color ... */  
    tft.textSetCursor(100, 100);
    tft.textTransparent(RA8875_RED);
    /* If necessary, enlarge the font */
    tft.textEnlarge(1);
    /* ... and render some more text! */
    tft.textWrite(string);
    tft.textSetCursor(100, 150);
    tft.textEnlarge(2);
    tft.textWrite(string);
  
} // End of RA8875Setup
