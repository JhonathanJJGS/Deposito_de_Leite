#include <Arduino.h>
//#include <..\lib\SimpleModBus\SimpleModbusSlave.h>
#include <..\lib\DS18B20\DS18B20.h>
#include <..\lib\OneWire\OneWire.h>
#include <..\lib\U8G2\U8g2lib.h>
#include <..\lib\HX711\HX711.h>

const int LOADCELL_DOUT_PIN = 2;
const int LOADCELL_SCK_PIN = 3;



U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);
HX711 W_CELL;
OneWire oneWire(4);
DS18B20 sensor(&oneWire);


void setup() {
   W_CELL.begin(LOADCELL_DOUT_PIN,LOADCELL_SCK_PIN);
   u8g2.begin();
   
   

}

void loop() {
  
}