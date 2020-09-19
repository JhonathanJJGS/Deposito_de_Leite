#include <..\lib\DS18B20\DS18B20.h>
#include <..\lib\OneWire\OneWire.h>


OneWire oneWire(2);
DS18B20 sensor(&oneWire);



float getTemperaturaC(){
    sensor.requestTemperatures();
    return sensor.getTempC();
}