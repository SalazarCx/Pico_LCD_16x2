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
#define LCD_INIT 0x03
#define LCD_MOD_4BITS 0x02
#define LCD_INTERFACE 0x28
#define LCD_MOD_SET 0x06
#define DISPLAY_OFF 0x08
#define DISPLAY_CLEAR 0x01

// Functions to control the Lcd display.
void LcdInit(void);
void LcdWriteBits(uint8_t);
void LcdInstructions(uint8_t);
void LcdPutChar(char);


#endif /* LCD_H_ */