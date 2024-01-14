/*
  LCD_16x2.c
*/

// Lcd project library.
#include "LCD_16x2.h"

void LcdInit(){

  // Initialise a GPIO.
  gpio_init(RS_PIN); 
  gpio_init(E_PIN);
  gpio_init(DB4_PIN);
  gpio_init(DB5_PIN);
  gpio_init(DB6_PIN);
  gpio_init(DB7_PIN);

  // Set GPIOs as output.
  gpio_set_dir(RS_PIN, GPIO_OUT); 
  gpio_set_dir(E_PIN, GPIO_OUT); 
  gpio_set_dir(DB4_PIN, GPIO_OUT); 
  gpio_set_dir(DB5_PIN, GPIO_OUT); 
  gpio_set_dir(DB6_PIN, GPIO_OUT); 
  gpio_set_dir(DB7_PIN, GPIO_OUT); 

  LcdWriteBits();

};

void LcdInstructions(uint8_t command){

};

void LcdPutChar(char character){

};

void LcdWriteBits(uint8_t data){

};