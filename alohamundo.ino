#include <Arduino.h>
#include <Wire.h>
#include <U8g2lib.h>
 
U8G2_SSD1306_128X64_NONAME_F_SW_I2C 
u8g2 (U8G2_R0, /*clock=*/14,/*data=*/12,U8X8_PIN_NONE); 
 
void setup (void) {
u8g2.begin(); 
}

void loop (void) {
 u8g2.clearBuffer(); 
 u8g2.setFont(u8g2_font_7x14B_tr);
 u8g2.drawStr(0,10, "Hello, ideaspark") ;
 u8g2.sendBuffer();
delay(1000); 
}
