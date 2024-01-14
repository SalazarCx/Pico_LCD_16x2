/*
  LCD_16x2.h
*/

#ifndef LCD_H_

#define LCD_H_

#include <stdint.h>

// Define the pins.
#define RS_PIN 5
#define E_PIN 4
#define DB4_PIN 0
#define DB5_PIN 1
#define DB6_PIN 2
#define DB7_PIN 3

// Define the instructions for Lcd display.

// Functions to control the Lcd display.
void LcdInit(void);
void LcdInstructions(uint8_t);
void LcdPutChar(char);
void LcdWriteBits(uint8_t);

#endif /* LCD_H_ */