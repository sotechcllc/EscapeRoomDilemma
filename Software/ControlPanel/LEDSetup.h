/*
 * LEDSetup.h
 *
 * Fluvio L Lobo Fenoglietto 07/26/2017
 */
 
 // Define Digital Pins for LEDs
 const int LED1 = 42;
 const int LED2 = 40;
 const int LED3 = 38;
 const int LED4 = 41;
 const int LED5 = 39;
 
 void LEDSetup() {
	 
	 pinMode(LED1, OUTPUT);
	 pinMode(LED2, OUTPUT);
	 pinMode(LED3, OUTPUT);
	 pinMode(LED4, OUTPUT);
	 pinMode(LED5, OUTPUT);
	 
 } // End of LEDSetup()