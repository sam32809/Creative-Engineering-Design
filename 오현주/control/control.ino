#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>
SdFat sd;
SFEMP3Shield MP3player;

#include <Adafruit_NeoPixel.h>   // 네오픽셀 라이브러리를 불러옵니다. 
#define PIN 6                      // 디지털핀 어디에 연결했는지 입력 
#define LEDNUM 7                  // 연결된 네오픽셀의 숫자입력 
#define BRIGHTNESS 200               // 네오픽셀의 밝기를 설정합니다. (0~255) 
 
 
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDNUM, PIN, NEO_GRB + NEO_KHZ800); 

 
 
 void setup() { 

   strip.setBrightness(BRIGHTNESS); 
   Serial.begin(9600);
   sd.begin(SD_SEL, SPI_HALF_SPEED);
   MP3player.begin();
   MP3player.playTrack(1);
  
 } 
 
 
 void loop() {                              // 이 안에 입력한 내용들이 반복 실행됩니다 
    
    MP3player.playTrack(2);
    delay(200);
    strip.begin();
    strip.show();  
   strip.setPixelColor(0, 200, 0, 0);     // (A,R,G,B,W) A번째 LED를 RGBW (0~255) 만큼의 밝기로 켭니다. 
   strip.setPixelColor(1, 200, 0, 0); 
   strip.setPixelColor(2, 200, 0, 0); 
   strip.setPixelColor(3, 200, 0, 0);
   delay(200);


 } 
 
 

