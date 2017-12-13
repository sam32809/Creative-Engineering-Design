#include <Adafruit_NeoPixel.h>  
#define PIN 10                       
#define LEDNUM 24 
#define BRIGHTNESS 50 
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDNUM, PIN, NEO_GRB + NEO_KHZ800);

void setup(){
  Serial.begin(9600);
  Serial.println("UART");
  strip.setBrightness(BRIGHTNESS); 
  pinMode(A5,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A2,OUTPUT); 
  pinMode(A1,OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);  
  pinMode(11,INPUT); 
  pinMode(3,INPUT); 
}

void loop(){
strip.begin(); 
strip.show();   

 if(digitalRead(3)==HIGH){
 if(digitalRead(4)==HIGH){
  Serial.print("i");
 analogWrite(A0,255);
 strip.setPixelColor(0, 30, 0, 255);  
 strip.setPixelColor(1, 30, 0, 255); 
 strip.setPixelColor(2, 30, 0, 255); 
 strip.setPixelColor(3, 30, 0, 255); 
 strip.show(); 
 delay(500); 
 strip.setPixelColor(0, 0, 0, 0);  
 strip.setPixelColor(1, 0, 0, 0); 
 strip.setPixelColor(2, 0, 0, 0); 
 strip.setPixelColor(3, 0, 0, 0);
 delay(500);
 analogWrite(A0,0);
  }
 else{
  Serial.print("a");
 analogWrite(A5,255);
 strip.setPixelColor(0, 255, 0, 0);  
 strip.setPixelColor(1, 255, 0, 0); 
 strip.setPixelColor(2, 255, 0, 0); 
 strip.setPixelColor(3, 255, 0, 0); 
 strip.show(); 
 delay(500); 
 strip.setPixelColor(0, 0, 0, 0);  
 strip.setPixelColor(1, 0, 0, 0); 
 strip.setPixelColor(2, 0, 0, 0); 
 strip.setPixelColor(3, 0, 0, 0);
delay(500);
 analogWrite(A5,0);
 }
  }
  
 if(digitalRead(9)==HIGH){
     if(digitalRead(4)==HIGH) {
       Serial.print("j");
 analogWrite(A1,255);
 strip.setPixelColor(4, 255, 50, 30);  
 strip.setPixelColor(5, 255, 50, 30); 
 strip.setPixelColor(6, 255, 50, 30); 
 strip.setPixelColor(7, 255, 50, 30); 
 strip.show(); 
 delay(500); 
 strip.setPixelColor(4, 0, 0, 0);  
 strip.setPixelColor(5, 0, 0, 0); 
 strip.setPixelColor(6, 0, 0, 0); 
 strip.setPixelColor(7, 0, 0, 0);
 delay(500);
 analogWrite(A1,0);
  }
  else{ Serial.print("b");
  analogWrite(A4,255);
  strip.setPixelColor(4, 255, 50, 0);  
  strip.setPixelColor(5, 255, 50, 0); 
  strip.setPixelColor(6, 255, 50, 0); 
  strip.setPixelColor(7, 255, 50, 0); 
  strip.show(); 
  delay(500); 
 strip.setPixelColor(4, 0, 0, 0);  
 strip.setPixelColor(5, 0, 0, 0); 
 strip.setPixelColor(6, 0 ,0 ,0); 
 strip.setPixelColor(7, 0, 0, 0); 
delay(500);
 analogWrite(A4,0);
  }
  }
  
  if(digitalRead(7)==HIGH)
  {
    if(digitalRead(4)==HIGH){
  Serial.print("k");
 analogWrite(A3,255);
 strip.setPixelColor(8, 170, 255, 100);  
 strip.setPixelColor(9, 170, 255, 100); 
 strip.setPixelColor(10, 170, 255, 100); 
 strip.setPixelColor(11, 170, 255, 100); 
 strip.show(); 
 delay(500); 
 strip.setPixelColor(8, 0, 0, 0);  
 strip.setPixelColor(9, 0, 0, 0); 
 strip.setPixelColor(10, 0, 0, 0); 
 strip.setPixelColor(11, 0, 0, 0);
 delay(500);
 analogWrite(A3,0);
 }
 else{     
  Serial.print("c");
       analogWrite(A2,255);
     strip.setPixelColor(8,  200, 200, 0);  
    strip.setPixelColor(9,  200, 200, 0); 
    strip.setPixelColor(10, 200, 200, 0); 
    strip.setPixelColor(11, 200, 200, 0); 
    strip.show(); 
    delay(500); 
    strip.setPixelColor(8, 0, 0, 0);  
    strip.setPixelColor(9, 0, 0, 0); 
    strip.setPixelColor(10, 0, 0, 0); 
    strip.setPixelColor(11, 0, 0, 0); 
 delay(500);
     analogWrite(A2,0);
 }
  }
 
if(digitalRead(5)==HIGH){
    Serial.print("d");
    analogWrite(A0,255);
    strip.setPixelColor(12, 0, 200, 0); 
    strip.setPixelColor(13, 0, 200, 0); 
    strip.setPixelColor(14, 0, 200, 0); 
    strip.setPixelColor(15, 0, 200, 0); 
    strip.show(); 
    delay(500); 
    strip.setPixelColor(12, 0, 0, 0);  
    strip.setPixelColor(13, 0, 0, 0); 
    strip.setPixelColor(14, 0, 0, 0); 
    strip.setPixelColor(15, 0, 0, 0); 
   delay(500); 
 
    analogWrite(A0,0);
  }

  if(digitalRead(11)==HIGH){
     analogWrite(A1,255);
    Serial.print("e");
    strip.setPixelColor(16, 0, 0, 200);  
    strip.setPixelColor(17, 0, 0, 200); 
    strip.setPixelColor(18, 0, 0, 200); 
    strip.setPixelColor(19, 0, 0, 200); 
    strip.show(); 
    delay(500); 
    strip.setPixelColor(16, 0, 0, 0);  
    strip.setPixelColor(17, 0, 0, 0); 
    strip.setPixelColor(18, 0, 0, 0); 
    strip.setPixelColor(19, 0, 0, 0); 
   delay(500);
    
    analogWrite(A1,0);
  }
  
  if(digitalRead(8)==HIGH)
  {
    Serial.println("f");
    analogWrite(A3,255);
    strip.setPixelColor(20, 200, 0, 255);  
    strip.setPixelColor(21, 200, 0, 255); 
    strip.setPixelColor(22, 200, 0, 255); 
    strip.setPixelColor(23, 200, 0, 255); 
    strip.show(); 
    delay(500); 
    strip.setPixelColor(20, 0, 0, 0);  
    strip.setPixelColor(21, 0, 0, 0); 
    strip.setPixelColor(22, 0, 0, 0); 
    strip.setPixelColor(23, 0, 0, 0); 
    delay(500);
 
    analogWrite(A3,0);
    }
    
  
  if(digitalRead(6)==HIGH)
  {
   Serial.print("h");
   analogWrite(A5,255);
  strip.setPixelColor(0, 255, 0, 0);     
  strip.setPixelColor(1, 255, 0, 0); 
  strip.setPixelColor(2, 255, 0, 0); 
  strip.setPixelColor(3, 255, 0, 0); 
  strip.show(); 
  delay(500); 
 strip.setPixelColor(0, 0, 0, 0);  
 strip.setPixelColor(1, 0, 0, 0); 
 strip.setPixelColor(2, 0 ,0 ,0); 
 strip.setPixelColor(3, 0, 0, 0); 
delay(500);
 analogWrite(A5,0);
  }


 }
 
