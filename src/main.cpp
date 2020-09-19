#include <Arduino.h>
#include <..\include\display_oled.h>



void setup(){
   sensor.begin();
   u8g2.begin();
   Serial.begin(9600);
   
   
}

void loop(){
   draw_page();
   Serial.println("Temperatura: ");
   Serial.print(sensor.getTempC());
   Serial.println();
}
