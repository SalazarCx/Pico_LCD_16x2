//Pico system library.
#include "pico/stdlib.h"

//Lcd project library.
#include "LCD_16x2.h"

int main() {
    stdio_init_all();
    LcdInit();
    LcdPutChar('o');
    
    while (1) {
    }
}
