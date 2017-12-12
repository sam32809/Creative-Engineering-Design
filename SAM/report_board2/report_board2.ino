#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>

SdFat sd;
SFEMP3Shield MP3player;
void setup() {
Serial.begin(9600);
sd.begin(SD_SEL, SPI_HALF_SPEED);
MP3player.begin();
MP3player.setVolume(0x00,0x00);
Serial.println("UART");
}

void loop() {

while(Serial.available()){
  int data=Serial.read();
  switch(data){
  case 'a':MP3player.stopTrack();MP3player.playTrack(1);break;  
  case 'b':MP3player.stopTrack();MP3player.playTrack(2);break;
  case 'c':MP3player.stopTrack();MP3player.playTrack(3);break;
  case 'd':MP3player.stopTrack();MP3player.playTrack(4);break;
  case 'e':MP3player.stopTrack();MP3player.playTrack(5);break;
  case 'f':MP3player.stopTrack();MP3player.playTrack(6);break;
  case 'g':MP3player.stopTrack();MP3player.playTrack(7);break;
  case 'h':MP3player.stopTrack();MP3player.playTrack(8);break;
  case 'i':MP3player.stopTrack();MP3player.playTrack(9);break;
  case 'j':MP3player.stopTrack();MP3player.playTrack(10);break;
  case 'k':MP3player.stopTrack();MP3player.playTrack(11);break;
 }
  Serial.write(data);
 
}}
