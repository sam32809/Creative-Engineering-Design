#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>
#include <Adafruit_NeoPixel.h>

#define PIN 10            // 디지털핀 어디에 연결했는지 입력
#define LEDNUM 7          // 연결된 네오픽셀의 숫자입력 
#define BRIGHTNESS 100    // 네오픽셀의 밝기를 설정합니다. (0~255) 

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

void loop(){

  strip.begin();                           // 네오픽셀 제어시작 
  strip.show();                            // 네오픽셀 초기화
  
  static unsigned int a=6;

  while(Serial.available())
  {
    char data=Serial.read();

    if(data='1')
    {
      MP3player.playTrack(a);
      
    }
  }
}

