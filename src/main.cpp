#include <Arduino.h>
#include <..\include\display_oled.h>
#include <..\include\step_motor.h>



void setup(){
   sensor.begin();
   u8g2.begin();
   Serial.begin(9600);
   pinMode(ENA, OUTPUT);
   pinMode(MS1, OUTPUT);
   pinMode(MS2, OUTPUT);
   pinMode(MS3, OUTPUT);
   pinMode(STP, OUTPUT);
   pinMode(DIR, OUTPUT);
   digitalWrite(SLP, HIGH);   // Sleep desabilitado 
   digitalWrite(DIR, HIGH);  // Sentido Horário habilitado
   digitalWrite(RST, HIGH);  // RST habilitado 
   Serial.begin(9600); 
}

void loop(){
   draw_page();
   Serial.println("Temperatura: ");
   Serial.print(sensor.getTempC());
   Serial.println();
}
