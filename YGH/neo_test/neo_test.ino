#include <Adafruit_NeoPixel.h>   

#define PIN 6                      
#define LEDNUM 24
#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDNUM, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
 Serial.begin(9600);
 strip.setBrightness(BRIGHTNESS);

pinMode(7,INPUT);  
pinMode(8,INPUT);
pinMode(9,INPUT);
pinMode(10,INPUT);
pinMode(11,INPUT);
pinMode(12,INPUT);
Serial.println("시작");
}

void loop() {                              
  strip.begin();                           // 네오픽셀 제어시작
  strip.show();                            // 네오픽셀 초기화
  if(digitalRead(7)==HIGH){
   Serial.println("7번 작동");
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
  }
   if(digitalRead(8)==HIGH){
   Serial.println("8번 작동");
   strip.setPixelColor(4, 255, 50, 0); 
   strip.setPixelColor(5, 255, 50, 0);
   strip.setPixelColor(6, 255, 50, 0);
   strip.setPixelColor(7, 255, 50, 0);
   strip.show();
   delay(1000);
   strip.setPixelColor(4, 0, 0, 0); 
   strip.setPixelColor(5, 0, 0, 0);
   strip.setPixelColor(6, 0 ,0 ,0);
   strip.setPixelColor(7, 0, 0, 0);


}
if(digitalRead(9)==HIGH){
   Serial.println("9번 작동");
   strip.setPixelColor(8,  200, 200, 0); 
   strip.setPixelColor(9,  200, 200, 0);
   strip.setPixelColor(10, 200, 200, 0);
   strip.setPixelColor(11, 200, 200, 0);
   strip.show();
   delay(1000);
   strip.setPixelColor(8, 0, 0, 0); 
   strip.setPixelColor(9, 0, 0, 0);
   strip.setPixelColor(10, 0, 0, 0);
   strip.setPixelColor(11, 0, 0, 0);

}
if(digitalRead(10)==HIGH){
   Serial.println("10번 작동");
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
}
if(digitalRead(11)==HIGH){
   Serial.println("11번 작동");
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
}
if(digitalRead(12)==HIGH){
   Serial.println("12번 작동");
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
}
}
