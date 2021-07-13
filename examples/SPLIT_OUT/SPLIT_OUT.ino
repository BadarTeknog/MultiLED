#include <MultiLED.h> //include library
#define DLY 200 //delay 200 ms
/*
=============================================
MultiLED by "Badar Teknog"
Dowbload now library
https://github.com/BadarTeknog/MultiLED
=============================================
*/
MultiLED led;
void setup() { 
    led.OUT_Array(2,10);
}
void loop() {
led.SPLIT_OUT(2,10,DLY);
led.Clear();
delay(DLY);
}