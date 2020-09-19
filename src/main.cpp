#include <Arduino.h>
//#include <..\lib\SimpleModBus\SimpleModbusSlave.h>
#include <..\lib\HX711\HX711.h>
#include <..\lib\etherShield\ETHER_28J60\ETHER_28J60.h>
#include <..\include\display_oled.h>

const int LOADCELL_DOUT_PIN = 2;
const int LOADCELL_SCK_PIN = 3;





HX711 W_CELL;








void setup() {
   W_CELL.begin(LOADCELL_DOUT_PIN,LOADCELL_SCK_PIN);
   u8g2.begin();
   
   

}

void loop() {
   draw_page();
}

