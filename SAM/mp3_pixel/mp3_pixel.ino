#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>
#include <Adafruit_NeoPixel.h>

#define PIN 10            // 디지털핀 어디에 연결했는지 입력
#define LEDNUM 12          // 연결된 네오픽셀의 숫자입력 
#define BRIGHTNESS 200    // 네오픽셀의 밝기를 설정합니다. (0~255) 

SdFat sd;
SFEMP3Shield MP3player;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDNUM, PIN, NEO_GRB + NEO_KHZ800); 

void setup() {
  Serial.begin(9600);
  sd.begin(SD_SEL, SPI_HALF_SPEED);
  strip.setBrightness(BRIGHTNESS);
  MP3player.begin();
  MP3player.setVolume(0x00,0x00);

}

void loop() {

  static unsigned int a=6;
  
  MP3player.playTrack(a);
  Serial.println("hello");
  strip.begin();                           // 네오픽셀 제어시작 
  strip.show();                            // 네오픽셀 초기화 
  strip.setPixelColor(0, 200, 0, 0);     // (A,R,G,B,W) A번째 LED를 RGBW (0~255) 만큼의 밝기로 켭니다. 
  strip.setPixelColor(1, 200, 0, 0); 
  strip.setPixelColor(2, 200, 0, 0); 
  strip.setPixelColor(3, 200, 0, 0); 
  strip.setPixelColor(4, 0, 200, 0);     // (A,R,G,B,W) A번째 LED를 RGBW (0~255) 만큼의 밝기로 켭니다. 
  strip.setPixelColor(5, 0, 200, 0); 
  strip.setPixelColor(6, 0, 200, 0); 
  strip.setPixelColor(7, 0, 200, 0);
  strip.setPixelColor(8, 0, 0, 200);     // (A,R,G,B,W) A번째 LED를 RGBW (0~255) 만큼의 밝기로 켭니다. 
  strip.setPixelColor(9, 0, 0, 200); 
  strip.setPixelColor(10, 0, 0, 200); 
  strip.setPixelColor(11, 0, 0, 200);
  delay(5000);

  MP3player.stopTrack();
  delay(500);
  
  a++;

  if(a>9)
  {
    a=1;
  }
  
}
