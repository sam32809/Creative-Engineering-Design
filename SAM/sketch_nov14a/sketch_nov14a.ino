#include <SD.h>                      // need to include the SD library
#define SD_ChipSelectPin 4  //using digital pin 4 on arduino nano 328
#include <TMRpcm.h>           //  also need to include this library...
#include <SPI.h>
#include <SoftwareSerial.h>
TMRpcm tmrpcm;   // create an object for use in this sketch



void setup() {
  Serial.begin(9600);

  char c = Serial.read();
  tmrpcm.speakerPin = 9; //11 on Mega, 9 on Uno, Nano, etc

  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
    return;   // don't do anything more if not
  }
  tmrpcm.setVolume(5);
  Serial.print("hi1");
  tmrpcm.play("1.mp3");
  tmrpcm.play("2.mp3");
  tmrpcm.play("3.mp3"); //the sound file "1" will play each time the arduino powers up, or is reset
  tmrpcm.play("4.mp3");
  tmrpcm.play("8.mp3");
  tmrpcm.play("9.mp3");
}

void loop() {
 static char a[5]={'3','.','w','a','v'};

  if (Serial.available()) {

    char c = Serial.read();

    if (c == '3') { 
      tmrpcm.play("3.wav");
      Serial.println("3.wav");
      delay(10);}
    

    else if (c == '9'){
      tmrpcm.play("9.wav");
      Serial.println("9.wav");
      delay(10);}

    else if (c=='1')
    {
      if(a[0]=='3')
      {
        a[0]='2';
        tmrpcm.play(a);
        Serial.println("2.wav");
        delay(10);
      }
      else if(a[0]=='2')
      {
        a[0]='1';
        tmrpcm.play(a);
        Serial.println("1.wav");
        delay(10);
      }
      else if(a[0]=='1')
      {
        a[0]='9';
        tmrpcm.play(a);
        Serial.println("9.wav");
        delay(10);
      }
      else if(a[0]=='9')
      {
        a[0]='8';
        tmrpcm.play(a);
        Serial.println("8.wav");
        delay(10);
      }
      else if(a[0]=='8')
      {
        a[0]='4';
        tmrpcm.play(a);
        Serial.println("4.wav");
        delay(10);
      }
      else if(a[0]=='4')
      {
        a[0]='3';
        tmrpcm.play(a);
        Serial.println("3.wav");
        delay(10);
      }
    }

    else if (c=='2')
    {
      if(a[0]=='3')
      {
        a[0]='4';
        tmrpcm.play(a);
        Serial.println("4.wav");
        delay(10);
      }
      else if(a[0]=='4')
      {
        a[0]='8';
        tmrpcm.play(a);
        Serial.println("8.wav");
        delay(10);
      }
      else if(a[0]=='8')
      {
        a[0]='9';
        tmrpcm.play(a);
        Serial.println("9.wav");
        delay(10);
      }
      else if(a[0]=='9')
      {
        a[0]='1';
        tmrpcm.play(a);
        Serial.println("1.wav");
        delay(10);
      }
      else if(a[0]=='1')
      {
        a[0]='2';
        tmrpcm.play(a);
        Serial.println("2.wav");
        delay(10);
      }
      else if(a[0]=='2')
      {
        a[0]='3';
        tmrpcm.play(a);
        Serial.println("3.wav");
        delay(10);
      }
    }

    else{
      tmrpcm.stopPlayback();
      Serial.println("Stop");
    }
    
}
}


