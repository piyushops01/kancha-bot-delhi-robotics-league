#include <string.h>

#define m1 2
#define m2 3
#define m3 4
#define m4 5

#define n1 7
#define n2 8
#define n3 9
#define n4 10

String x;

void setup() {
  // put your setup code here, to run once:
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);

pinMode(n1,OUTPUT);
pinMode(n2,OUTPUT);
pinMode(n3,OUTPUT);
pinMode(n4,OUTPUT);

Serial.begin(9600);
}

void loop(){

while (Serial.available()){
x = Serial.read();

if( x == "F"){
void forward();
}

if(x == 'b'){
void backward();
}

if(x == 'r'){
void right();
}

if(x == 'l'){
void left();
}

if(x == 'drf'){
void diagnoalrightforward();
}

if(x == 'dlf'){
void diagnoalleftforward();
}

if(x == 'dlb'){
void diagnoalleftbackward();
}

if(x == 'drb'){
void diagnoalrightbackward();
}

if(x == 'al'){
void arcleft();
}

if(x == 'ar'){
void arcright();
}

if(x == 'hr'){
void horizontalright();
}

if(x=='hl'){
void horizontalleft();
}

if(x=='n'){
void null();
}
}

}


void right() {

   digitalWrite(m1,0);
   digitalWrite(m2,1);
   digitalWrite(m3,1);
   digitalWrite(m4,0);
   digitalWrite(n1,1);
   digitalWrite(n2,0);
   digitalWrite(n3,0);
   digitalWrite(n4,1);
     
}

void left() {

   digitalWrite(m1,1);
   digitalWrite(m2,0);
   digitalWrite(m3,0);
   digitalWrite(m4,1);
   digitalWrite(n1,0);
   digitalWrite(n2,1);
   digitalWrite(n3,1);
   digitalWrite(n4,0);
    
}

void diagnoalrightforward() {

   digitalWrite(m1,1);
   digitalWrite(m2,0);
   digitalWrite(m3,0);
   digitalWrite(m4,0);
   digitalWrite(n1,0);
   digitalWrite(n2,0);
   digitalWrite(n3,0);
   digitalWrite(n4,1);
   
}

void diagnoalleftbackward() {

   digitalWrite(m1,0);
   digitalWrite(m2,1);
   digitalWrite(m3,0);
   digitalWrite(m4,0);
   digitalWrite(n1,0);
   digitalWrite(n2,0);
   digitalWrite(n3,1);
   digitalWrite(n4,0);
     
}

void backward() {

  
  digitalWrite(m1,0);
  digitalWrite(m2,1);
  digitalWrite(m3,0);
  digitalWrite(m4,1);
  digitalWrite(n1,1);
  digitalWrite(n2,0);
  digitalWrite(n3,1);
  digitalWrite(n4,0);
    
}

void forward() {

  
  digitalWrite(m1,1);
  digitalWrite(m2,0);
  digitalWrite(m3,1);
  digitalWrite(m4,0);
  digitalWrite(n1,0);
  digitalWrite(n2,1);
  digitalWrite(n3,0);
  digitalWrite(n4,1);
    
}

void arcleft() {

  
  digitalWrite(m1,0);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,0);
  digitalWrite(n1,0);
  digitalWrite(n2,1);
  digitalWrite(n3,1);
  digitalWrite(n4,0);
   
}

void arcright() {

  
  digitalWrite(m1,0);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,0);
  digitalWrite(n1,1);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,1);
    
}

void diagnoalrightbackward() {

  
  digitalWrite(m1,0);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,1);
  digitalWrite(n1,1);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
   
}

void diagnoalleftforward() {

  
  digitalWrite(m1,0);
  digitalWrite(m2,0);
  digitalWrite(m3,1);
  digitalWrite(m4,0);
  digitalWrite(n1,0);
  digitalWrite(n2,1);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
   
    
}

void horizontalright() {

  
  digitalWrite(m1,1);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,1);
  digitalWrite(n1,1);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,1);
    
    
}

void horizontalleft() {

  
  digitalWrite(m1,0);
  digitalWrite(m2,1);
  digitalWrite(m3,1);
  digitalWrite(m4,0);
  digitalWrite(n1,0);
  digitalWrite(n2,1);
  digitalWrite(n3,1);
  digitalWrite(n4,0);
     
    
}

void null() {

  
  digitalWrite(m1,0);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,0);
  digitalWrite(n1,0);
  digitalWrite(n2,0);
  digitalWrite(n3,0);
  digitalWrite(n4,0);
    
    
}
