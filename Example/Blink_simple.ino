#include <MultiLED.h> //include library
#define PIN 13 //Pin yang di gunakan
/*
=============================================
MultiLED by "Badar Teknog"
Dowbload now library
https://github.com/BadarTeknog/MultiLED
=============================================
*/
MultiLED led;
void setup() {
    led.OUT(PIN);//pin 13 dijadikan output
}
void loop() {
led.Blink(PIN,1000);//jeda 1000ms
}