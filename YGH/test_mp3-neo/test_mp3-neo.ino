#include <SoftwareSerial.h>

/*  MP3player.stopTrack(); 멈춤
MP3player.setVolume(volume, volume);
MP3player.SetVolume(0x00, 0x00)*/
#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>

SdFat sd;
SFEMP3Shield MP3player;


void setup(){
Serial.begin(9600);
sd.begin(SD_SEL, SPI_HALF_SPEED);
MP3player.begin();

}
void loop(){
 
Serial.println("I'm bored!");
delay(2000);
MP3player.playTrack(6);

}
