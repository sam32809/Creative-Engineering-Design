#include <SD.h>                      // need to include the SD library
#define SD_ChipSelectPin 4  //using digital pin 4 on arduino nano 328
#include <TMRpcm.h>           //  also need to include this library...
#include <SPI.h> 
TMRpcm tmrpcm;   // create an object for use in this sketch

void setup(){
  Serial.begin(9600);

 
  tmrpcm.speakerPin = 6; //11 on Mega, 9 on Uno, Nano, etc
 
  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
  return;   // don't do anything more if not
  }
 tmrpcm.volume(5);      Serial.print("oh");
 delay(5000);
 tmrpcm.play("9.wav"); //the sound file "1" will play each time the arduino powers up, or is reset
 Serial.print("ygh224");
}
 
void loop(){  

}


