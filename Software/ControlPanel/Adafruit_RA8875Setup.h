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

#include "ScenarioSetup.h"

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

    // Initialization screen
    InitScreen();
  
} // End of RA8875Setup
