#include <MultiLED.h> //include library
#define DLY 100 //delay 100 ms
#define P1 2  //pin awal
#define P2 10 //pin akhir
/*
=============================================
MultiLED by "Badar Teknog"
Dowbload now library
https://github.com/BadarTeknog/MultiLED
=============================================
led.RunningUp/Down(Pin awal,pin akhir,jeda);
led.OUT_Array(Pin awal,Pin akhir);
*/

MultiLED led;
void setup() { 
    led.OUT_Array(P1,P2);
}
void loop() {     
led.Running_Up(P1,P2,DLY,HIGH);
led.Running_Down(P1,P2,DLY,LOW);  
      
led.Running_Down(P1,P2,DLY,HIGH);    
led.Running_Up(P1,P2,DLY,LOW);
    
led.Running_Up(P1,P2,DLY,HIGH);
led.Running_Up(P1,P2,DLY,LOW);
   
led.Running_Down(P1,P2,DLY,HIGH);   
led.Running_Down(P1,P2,DLY,LOW);     
        
}