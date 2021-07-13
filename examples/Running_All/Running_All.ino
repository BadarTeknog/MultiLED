#include <MultiLED.h> //include library
#define DLY 50 //delay 100 ms
#define P1 2  //pin awal
#define P2 10 //pin akhir

/*
=============================================
MultiLED by "Badar Teknog"
Dowbload now library
https://github.com/BadarTeknog/MultiLED
=============================================
*/

MultiLED led;
void setup() { 
    led.OUT_Array(P1,P2);
}
void loop() {
led.RunningUp(P1,P2,1,DLY);
led.RunningDown(P1,P2,1,DLY);  
led.RunningUpp(  P1,P2,1,DLY);
led.RunningDownn(  P1,P2,1,DLY);       
led.RunningUp(P1,P2,5,DLY);
led.RunningDown(P1,P2,5,DLY);  
led.RunningUpp(  P1,P2,5,DLY);
led.RunningDownn(  P1,P2,5,DLY);   
led.Running_Up(P1,P2,DLY,HIGH);
led.Running_Down(P1,P2,DLY,LOW);  
led.Running_Down(P1,P2,DLY,HIGH);    
led.Running_Up(P1,P2,DLY,LOW);
led.Running_Up(P1,P2,DLY,HIGH);
led.Running_Up(P1,P2,DLY,LOW); 
led.Running_Down(P1,P2,DLY,HIGH);
led.Running_Down(P1,P2,DLY,LOW);     
}