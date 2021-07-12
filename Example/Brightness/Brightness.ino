#include <MultiLED.h> //include library
#define JEDA 5    //delay 200 ms
#define PIN 11   //Pin yang di gunakan (PWM)
/*
PIN PWM pada Arduino Uno/Nano (3,5,6,9,10,11)
=============================================
MultiLED by "Badar Teknog"
Dowbload now library
https://github.com/BadarTeknog/MultiLED
=============================================
*/
MultiLED led;
void setup() { 
    led.OUT(PIN); //Output
}
void loop() {
led.Brightness(PIN,JEDA);    
//led.Brightness_HIGH(PIN,JEDA);
//led.Brightness_LOW(PIN,JEDA);    
}