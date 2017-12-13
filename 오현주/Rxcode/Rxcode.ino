#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>

SdFat sd;
SFEMP3Shield MP3player;
void setup() {
Serial.begin(9600);
sd.begin(SD_SEL, SPI_HALF_SPEED); //sd카드를 초기화시키는 코드
MP3player.begin();  //mp3 shield를 초기화하는 코드
MP3player.setVolume(0x00,0x00);  //음량조절
Serial.println("UART");  //통신을 확인하는 코드
}

void loop() {

while(Serial.available()){
  int data=Serial.read();
  switch(data){
  case 'a':MP3player.stopTrack();MP3player.playTrack(1);break;  //트랙 1번을 재생시키는 코드
  case 'b':MP3player.stopTrack();MP3player.playTrack(2);break;  //트랙 2번을 재생시키는 코드
  case 'c':MP3player.stopTrack();MP3player.playTrack(3);break;  //트랙 3번을 재생시키는 코드
  case 'd':MP3player.stopTrack();MP3player.playTrack(4);break;  //트랙 4번을 재생시키는 코드
  case 'e':MP3player.stopTrack();MP3player.playTrack(5);break;  //트랙 5번을 재생시키는 코드
  case 'f':MP3player.stopTrack();MP3player.playTrack(6);break;  //트랙 6번을 재생시키는 코드
  case 'g':MP3player.stopTrack();MP3player.playTrack(7);break;  //트랙 7번을 재생시키는 코드
  case 'h':MP3player.stopTrack();MP3player.playTrack(8);break;  //트랙 8번을 재생시키는 코드
  case 'i':MP3player.stopTrack();MP3player.playTrack(9);break;  //트랙 9번을 재생시키는 코드
  case 'j':MP3player.stopTrack();MP3player.playTrack(10);break;  //트랙 10번을 재생시키는 코드
  case 'k':MP3player.stopTrack();MP3player.playTrack(11);break;  //트랙 11번을 재생시키는 코드
 }
  Serial.write(data);   //수신 받은 신호를 시리얼통신창에 띄우는 코드
 
}}

