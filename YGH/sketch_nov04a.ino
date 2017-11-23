#include <Adafruit_NeoPixel.h>

#define PIN 13

//네오픽셀을 사용하기 위해 객체 하나를 생성한다. 
//첫번째 인자값은 네오픽셀의 LED의 개수
//두번째 인자값은 네오픽셀이 연결된 아두이노의 핀번호
//세번째 인자값은 네오픽셀의 타입에 따라 바뀌는 flag
Adafruit_NeoPixel strip = Adafruit_NeoPixel(80, PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  strip.begin(); //네오픽셀을 초기화하기 위해 모든LED를 off시킨다
  strip.show(); 
  pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(3,INPUT);// put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  //아래의 순서대로 NeoPixel을 반복한다.
  if(digitalRead(4)==HIGH)
{Serial.print("4\n");
 colorWipe(strip.Color(255, 0, 0), 50); //빨간색 출력
delay(500);
}  
else if(digitalRead(5)==HIGH)
{Serial.print("5\n");
 colorWipe(strip.Color(0, 255, 0), 50); //녹색 출력
delay(500);
}  
else if(digitalRead(6)==HIGH)
{Serial.print("6\n");
colorWipe(strip.Color(0, 0, 255), 50); //버튼을 누르는 것 까지는 문제가 없는데 버튼을 연속으로 빠르게 누르면 처음에 한 번 작동한뒤 그 뒤의 버튼 누르는 것에는 반응하지 않습니다. 아마 delay 동안 작동하다가 문제가 생긴 것 같은데 플주님께 도움을 구합니다.
delay(150);
colorWipe(strip.Color(0, 0, 0), 0);

}  
else if(digitalRead(3)==HIGH)
{Serial.print("3\n");
delay(500);
}  
 



}
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<4; i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}

