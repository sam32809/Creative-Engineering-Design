#include <SoftwareSerial.h>
#include <DFPlayer_Mini_Mp3.h>

SoftwareSerial BT(2,3);
 
void setup () {
    Serial.begin (9600);
    mp3_set_serial (Serial);      // DFPlayer-mini mp3 module 시리얼 세팅
    delay(1);                     // 볼륨값 적용을 위한 delay
    mp3_set_volume (30);          // 볼륨조절 값 0~30
}
 
void loop () {  
    if(BTSerial.available()){
      char data=BTSerial.available.read();
      Serial.write(data);      
    }
    if(data=='1')
    {
      mp3_play (); 
    }
    if(data=='2'){
      mp3_pause ();
    }
    if(date=='3'){
      mp3_prev ();
    }
    if(data=='4'){
      mp3_next ();
    }
    if(data=='5'){
      mp3_stop();
    }
    

}

