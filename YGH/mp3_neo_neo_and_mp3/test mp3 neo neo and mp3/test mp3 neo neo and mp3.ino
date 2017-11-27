/*  MP3player.stopTrack(); 멈춤
MP3player.setVolume(volume, volume);
MP3player.SetVolume(0x00, 0x00)*/
#include <SPI.h>
#include <SdFat.h>
#include <SdFatUtil.h>
#include <SFEMP3Shield.h>
SdFat sd;
SFEMP3Shield MP3player;

 #include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      16

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second



void setup(){
Serial.begin(9600);
sd.begin(SD_SEL, SPI_HALF_SPEED);
pixels.begin();
 

MP3player.begin();



}
void loop(){
Serial.println("I'm bored!");
delay(2000);
MP3player.playTrack(6);
pixels.setPixelColor(6, pixels.Color(0,150,0));
pixels.show();
 delay(delayval);


}
