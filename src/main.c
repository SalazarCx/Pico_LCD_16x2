//Pico system library.
#include "pico/stdlib.h"


//Lcd project library.
#include "LCD_16x2.h"

int main() {
    stdio_init_all();
    LcdInit();
    
    while (1) {
        LcdPutChar('o');
        sleep_ms(1000);
    }
}
