/*
  LCD_16x2.c
*/

// Lcd project library.
#include "LCD_16x2.h"
#include "hardware/gpio.h"
#include "pico/time.h"

void LcdInit(void){

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

  // Initializing by Instruction, 4-bits mode.
  LcdWriteBits(LCD_INIT);
  sleep_us(4100);
  LcdWriteBits(LCD_INIT);
  sleep_us(100);
  LcdWriteBits(LCD_INIT);
  LcdWriteBits(LCD_MOD_4BITS);
  LcdInstructions(LCD_INTERFACE);
  LcdInstructions(DISPLAY_OFF);
  LcdInstructions(DISPLAY_CLEAR);
  LcdInstructions(LCD_MOD_SET);
};

void LcdWriteBits(uint8_t data){
  gpio_put(DB4_PIN, (data & 0x01) != 0);
  gpio_put(DB5_PIN, (data & 0x02) != 0);
  gpio_put(DB6_PIN, (data & 0x04) != 0);
  gpio_put(DB7_PIN, (data & 0x08) != 0);
  gpio_put(E_PIN, 1);
  gpio_put(E_PIN, 0);
};

void LcdInstructions(uint8_t command){
  gpio_put(RS_PIN, 0);
  LcdWriteBits(command >> 4);
  LcdWriteBits(command & 4);
};

void LcdPutChar(char character){
  gpio_put(RS_PIN, 1);
  LcdWriteBits(character >> 4);
  LcdWriteBits(character & 4);
};

