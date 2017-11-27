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
SoftwareSerial BTSerial(10,11); //(TX,RX)



void setup(){
Serial.begin(9600);
sd.begin(SD_SEL, SPI_HALF_SPEED);
MP3player.begin();
BTSerial.begin(9600);


}
void loop(){

int a=1;
MP3player.playTrack(6);

if(BTSerial.available())
{
  char c=BTSerial.read();
 

   

  if(c='1'){
    MP3player.playTrack(a);
     Serial.write(c);
  }
  if(c='2'){
    a--;
     Serial.write(c);
  }
  if(c='3'){
    a++;
     Serial.write(c);
  }

  if(c='4')
  {
    MP3player.pauseMusic();
     Serial.write(c);
  }

  if(a<1)
{
  a=9;
}

if(a>9)
{
  a=1;
}
 
 delay(100);
  

}
}
