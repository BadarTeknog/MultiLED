#include "MultiLED.h"
unsigned long MLS1,MLS2;
/*
=============================================
MultiLED made by "Badar Teknog"
Dowbload now library
https://github.com/BadarTeknog/MultiLED
=============================================
*/
char xixi;
//constructor
MultiLED::MultiLED(){
  //setup  
}
//destructor
MultiLED::~MultiLED(){
}    
//===========================================
void MultiLED::SPLIT_OUT(
char P1,char P2,int dly){
    char u=P2-(P1);
 for (byte i=u/2+P1; i>P1-1; i--) {
   digitalWrite(i,HIGH);  
   digitalWrite((P1)+(P2-i),HIGH);
    delay(dly);} }
//===========================================
void MultiLED::SPLIT_INT(
char P1,char P2,int dly){
    char u=P2-(P1);
 for (byte i=P1; i<u/2+P1+1; i++) {
   digitalWrite(i,HIGH);  
   digitalWrite((P1)+(P2-i),HIGH);
    delay(dly);} }
//===========================================
void MultiLED::Clear(){
for (byte i=0; i<=49; i++){
    digitalWrite(i,LOW);}}
//===========================================
void MultiLED::OUT(char pin){
        pinMode(pin,OUTPUT);}
//===========================================
void MultiLED::OUT_Array(
char P1,char P2){
  for (byte KR=P1; KR<=P2; KR++){
  pinMode(KR,OUTPUT);}}
//===========================================
void MultiLED::Blink(char pin,int dly){
    digitalWrite(pin,HIGH);
    delay(dly);
    digitalWrite(pin,LOW);
    delay(dly); }
//===========================================
void MultiLED::M_Blink(char pin, int dlyM){
  MLS1=millis();     
  if((MLS1-MLS2)>=dlyM){
  MLS2=MLS1; xixi=!xixi;           
  digitalWrite(pin,xixi); }}
//===========================================
void MultiLED::RunningHighUp(char P2,char 
P1,int dly){char KR;
  for (KR=P2; KR<=P1; KR++){
  digitalWrite(KR,HIGH);  
  delay(dly); }}
//===========================================
void MultiLED::RunningHighDown(char P2,char
P1,int dly){char KR;
  for (KR=P1; KR>=P2; KR--){
  digitalWrite(KR,HIGH);  
  delay(dly); }}
//===========================================
void MultiLED::RunningLowUp(char P2,char 
P1,int dly){char KR;
  for (KR=P2; KR<=P1; KR++){
  digitalWrite(KR,LOW);  
  delay(dly); }}
//===========================================
void MultiLED::RunningLowDown(char P2,char 
P1,int dly){char KR;
  for (KR=P1; KR>=P2; KR--){
  digitalWrite(KR,LOW);  
  delay(dly); }}
//===========================================
void MultiLED::RunningUp(char P1,char 
P2,char NUM,int dly){char KR;
  for (KR=P1; KR<=P2; KR++){
  digitalWrite((KR-NUM),LOW);
  digitalWrite(KR,HIGH);    
  if(KR>=P2){
  for (byte i=(P2-NUM);i<=P2;i++){
  digitalWrite(i,LOW);if(i<P2)delay(dly);}}
  if(KR<P2)delay(dly);}}
//===========================================
void MultiLED::RunningDown(char P1,char 
P2,char NUM,int dly){char KR;
  for (KR=P2; KR>=P1; KR--){
  digitalWrite((KR+NUM),LOW);
  digitalWrite(KR,HIGH);    
  if(KR<=P1){        
  for (byte i=(P1+NUM);i>=P1; i--){
  digitalWrite(i,LOW);if(i>P1)delay(dly);}}
  if(KR>P1)delay(dly);}}
//===========================================
void MultiLED::RunningUpp(char P1,char 
P2,char NUM,int dly){char KR;
  for (KR=P1; KR<=P2; KR++){
  digitalWrite((KR-NUM),LOW);
  digitalWrite(KR,HIGH);    
  if(KR>=P2){
  for (byte i=(P2-NUM);i<=P2;i++){
  digitalWrite(i,LOW);delay(dly);}}
  if(KR<P2)delay(dly);}}
//===========================================
void MultiLED::RunningDownn(char P1,char 
P2,char NUM,int dly){char KR;
  for (KR=P2; KR>=P1; KR--){
  digitalWrite((KR+NUM),LOW);
  digitalWrite(KR,HIGH);    
  if(KR<=P1){        
  for (byte i=(P1+NUM);i>=P1; i--){
  digitalWrite(i,LOW);delay(dly);}}
  if(KR>P1)delay(dly);}}
//===========================================
void MultiLED::Brightness(char pin,int dly){
  for (byte i=0; i<255; i++){  
  analogWrite(pin,i);delay(dly);}
  for (byte i=255; i>0; i--){  
  analogWrite(pin,i);delay(dly);}   }
//===========================================
void MultiLED::Brightness_HIGH(char pin,int dly){
  for (byte i=0; i<255; i++){  
  analogWrite(pin,i);delay(dly);}   }
//===========================================
void MultiLED::Brightness_LOW(char pin,int dly){
  for (byte i=255; i>0; i--){  
  analogWrite(pin,i);delay(dly);}   }
//===========================================