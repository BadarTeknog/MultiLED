#ifndef _MultiLED_H_
#define _MultiLED_H_
#include <Arduino.h> 
/*
=============================================
MultiLED by "Badar Teknog"
Dowbload now library
https://github.com/BadarTeknog/MultiLED
=============================================
*/
//class LED{public:LED();~LED();}
class MultiLED{ public: 
MultiLED();~MultiLED(); 
void OUT(char PIN);        
void Clear();            
void SPLIT_INT(char P0,char P1,int dly);
void SPLIT_OUT(char P0,char P1,int dly); 
void M_Blink(char PIN,int dlyM); 
void RunningUp(char P0,char P1,
char NUM,int dly);     
void RunningDown(char P0,char P1,
char NUM,int dly);         
void Running_Up(char P0,char P1,
int dly,char XY);     
void Running_Down(char P0,char P1,
int dly,char XY);    
void RunningUpp(char P0,char P1,
char NUM,int dly);     
void RunningDownn(char P0,char P1,
char NUM,int dly);             
void Blink(char PIn, int dly);
void OUT_Array(char P0,char P1);    
void Brightness(char Pin,int dly); 
void Brightness_HIGH(char Pin,int dly); 
void Brightness_LOW(char Pin,int dly); 
void RunningHighUp(char P0,char P1,
int dly);
void RunningHighDown(char P0,char P1,
int dly); 
void RunningLowUp(char P0,char P1,
int dly);
void RunningLowDown(char P0,char P1,
int dly); 
   // private: 
     };
#endif