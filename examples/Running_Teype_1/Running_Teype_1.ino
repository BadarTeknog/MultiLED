#include <MultiLED.h> //include library
#define DLY 50 //delay 100 ms
#define P1 2  //pin awal
#define P2 10 //pin akhir
#define GR 5 //jumlah led yang bergerak

/*
=============================================
MultiLED by "Badar Teknog"
Dowbload now library
https://github.com/BadarTeknog/MultiLED
=============================================
led.RunningUp/Down(Pin awal,pin akhir,perulangan,jeda);
led.OUT_Array(Pin awal,Pin akhir);
*/

MultiLED led;
void setup() { 
led.OUT_Array(P1,P2);
}
void loop() {
led.RunningUp(P1,P2,GR,DLY);
led.RunningDown(P1,P2,GR,DLY);  
    
led.RunningUpp(P1,P2,GR,DLY);
led.RunningDownn(P1,P2,GR,DLY);  
}
