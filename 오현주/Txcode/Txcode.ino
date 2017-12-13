#include <Adafruit_NeoPixel.h>  
#define PIN 10  //네오픽셀 핀을 설정하는 코드                   
#define LEDNUM 24  //사용할 네오픽셀의 수
#define BRIGHTNESS 50   //네오픽셀의 밝기 조절
Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDNUM, PIN, NEO_GRB + NEO_KHZ800);

void setup(){
  Serial.begin(9600);
  Serial.println("UART");  //시리얼 통신 준비를 확인하기 위해 시리얼 통신 창에 띄우는 코드
  strip.setBrightness(BRIGHTNESS);  //밝기 설정 
  pinMode(A5,OUTPUT);  //모터를 돌리는 코드
  pinMode(A4,OUTPUT);  
  pinMode(A3,OUTPUT);  
  pinMode(A2,OUTPUT); 
  pinMode(A1,OUTPUT);  
  pinMode(A0,OUTPUT);  
  pinMode(4,INPUT);   //버튼에 해당하는 코드
  pinMode(5,INPUT);  
  pinMode(6,INPUT);  
  pinMode(7,INPUT);  
  pinMode(8,INPUT);  
  pinMode(9,INPUT);  
  pinMode(11,INPUT); 
  pinMode(3,INPUT); 
}

void loop(){
strip.begin();  //네오픽셀 연결 시작
strip.show();  //네오픽셀 초기화

 if(digitalRead(3)==HIGH){
 if(digitalRead(4)==HIGH){
  Serial.print("i"); //핀번호 3과 4에 해당하는 신호가 들어왔을 때 i에 해당하는 신호를 보냄
 analogWrite(A0,255);  //모터를 돌리는 코드
 strip.setPixelColor(0, 30, 0, 255);  //네오픽셀에서 빨간색이 나오게 하는 코드
 strip.setPixelColor(1, 30, 0, 255); 
 strip.setPixelColor(2, 30, 0, 255); 
 strip.setPixelColor(3, 30, 0, 255); 
 strip.show();  //네오픽셀 초기화
 delay(500); 
 strip.setPixelColor(0, 0, 0, 0);  //네오픽셀에 불빛이 들어오지 않게 하는 코드
 strip.setPixelColor(1, 0, 0, 0); 
 strip.setPixelColor(2, 0, 0, 0); 
 strip.setPixelColor(3, 0, 0, 0);
 delay(500);
 analogWrite(A0,0);  //모터를 끄는 코드
  }
 else{
  Serial.print("a");  //버튼이 3만 눌렸을 때 a를 전송하는 코드
 analogWrite(A5,255);  //모터를 돌리게 하는 코드
 strip.setPixelColor(0, 255, 0, 0);  //네오픽셀에 빨간색이 나오도록 하는 코드
 strip.setPixelColor(1, 255, 0, 0); 
 strip.setPixelColor(2, 255, 0, 0); 
 strip.setPixelColor(3, 255, 0, 0); 
 strip.show(); 
 delay(500); 
 strip.setPixelColor(0, 0, 0, 0);  
 strip.setPixelColor(1, 0, 0, 0); 
 strip.setPixelColor(2, 0, 0, 0); 
 strip.setPixelColor(3, 0, 0, 0);
delay(500);
 analogWrite(A5,0);
 }
  }
  
 if(digitalRead(9)==HIGH){
     if(digitalRead(4)==HIGH) {
       Serial.print("j");  //핀번호에 해당되는 9와 4가 신호가 들어왔을때 j를 출력하는 코드
 analogWrite(A1,255);  //모터가 돌아가게 하는 코드
 strip.setPixelColor(4, 255, 50, 30);  // 네오픽셀에 분홍색이 나오게 하는 코드
 strip.setPixelColor(5, 255, 50, 30); 
 strip.setPixelColor(6, 255, 50, 30); 
 strip.setPixelColor(7, 255, 50, 30); 
 strip.show(); 
 delay(500); 
 strip.setPixelColor(4, 0, 0, 0);  
 strip.setPixelColor(5, 0, 0, 0); 
 strip.setPixelColor(6, 0, 0, 0); 
 strip.setPixelColor(7, 0, 0, 0);
 delay(500);
 analogWrite(A1,0);
  }
  else{ Serial.print("b"); //핀번호 9에 해당되는 신호가 들어왔을 때 신호 b를 보내는 코드
  analogWrite(A4,255);  //모터를 돌리는 코드
  strip.setPixelColor(4, 255, 50, 0);  //네오픽셀에 주황색을 나오게 하는 코드
  strip.setPixelColor(5, 255, 50, 0); 
  strip.setPixelColor(6, 255, 50, 0); 
  strip.setPixelColor(7, 255, 50, 0); 
  strip.show(); 
  delay(500); 
 strip.setPixelColor(4, 0, 0, 0);  
 strip.setPixelColor(5, 0, 0, 0); 
 strip.setPixelColor(6, 0 ,0 ,0); 
 strip.setPixelColor(7, 0, 0, 0); 
delay(500);
 analogWrite(A4,0);
  }
  }
  
  if(digitalRead(7)==HIGH)
  {
    if(digitalRead(4)==HIGH){
  Serial.print("k");  //핀번호에 7번과 4번에 신호가 들어오면 k를 보냄
 analogWrite(A3,255);
 strip.setPixelColor(8, 170, 255, 100);  //네오픽셀에 민트색 불빛이 나오게 함
 strip.setPixelColor(9, 170, 255, 100); 
 strip.setPixelColor(10, 170, 255, 100); 
 strip.setPixelColor(11, 170, 255, 100); 
 strip.show(); 
 delay(500); 
 strip.setPixelColor(8, 0, 0, 0);  
 strip.setPixelColor(9, 0, 0, 0); 
 strip.setPixelColor(10, 0, 0, 0); 
 strip.setPixelColor(11, 0, 0, 0);
 delay(500);
 analogWrite(A3,0);
 }
 else{     
  Serial.print("c");  //핀번호 7만 들어올 경우 신호 c를 보냄
       analogWrite(A2,255);  
     strip.setPixelColor(8,  200, 200, 0);  //네오픽셀에 노랑색 불빛을 들어오게 함
    strip.setPixelColor(9,  200, 200, 0); 
    strip.setPixelColor(10, 200, 200, 0); 
    strip.setPixelColor(11, 200, 200, 0); 
    strip.show(); 
    delay(500); 
    strip.setPixelColor(8, 0, 0, 0);  
    strip.setPixelColor(9, 0, 0, 0); 
    strip.setPixelColor(10, 0, 0, 0); 
    strip.setPixelColor(11, 0, 0, 0); 
 delay(500);
     analogWrite(A2,0);
 }
  }
 
if(digitalRead(5)==HIGH){
    Serial.print("d"); //핀번호 5번에 신호가 들어올 경우 d라는 신호를 보냄
    analogWrite(A0,255);
    strip.setPixelColor(12, 0, 200, 0);  //네오픽셀에 녹색빛을 나오게 함
    strip.setPixelColor(13, 0, 200, 0); 
    strip.setPixelColor(14, 0, 200, 0); 
    strip.setPixelColor(15, 0, 200, 0); 
    strip.show(); 
    delay(500); 
    strip.setPixelColor(12, 0, 0, 0);  
    strip.setPixelColor(13, 0, 0, 0); 
    strip.setPixelColor(14, 0, 0, 0); 
    strip.setPixelColor(15, 0, 0, 0); 
   delay(500); 
 
    analogWrite(A0,0);
  }

  if(digitalRead(11)==HIGH){
     analogWrite(A1,255);  
    Serial.print("e");  //핀번호 11번에 신호가 들어올 경우 신호 e를 보냄
    strip.setPixelColor(16, 0, 0, 200);  
    strip.setPixelColor(17, 0, 0, 200); 
    strip.setPixelColor(18, 0, 0, 200); 
    strip.setPixelColor(19, 0, 0, 200); 
    strip.show(); 
    delay(500); 
    strip.setPixelColor(16, 0, 0, 0);  
    strip.setPixelColor(17, 0, 0, 0); 
    strip.setPixelColor(18, 0, 0, 0); 
    strip.setPixelColor(19, 0, 0, 0); 
   delay(500);
    
    analogWrite(A1,0);
  }
  
  if(digitalRead(8)==1)
  {
    Serial.println("f");  //핀번호에 8번이 들어올 경우 신호 f를 보냄
    analogWrite(A3,255);
    strip.setPixelColor(20, 200, 0, 255);  //네오픽셀에 보라색 빛을 나오게 함
    strip.setPixelColor(21, 200, 0, 255); 
    strip.setPixelColor(22, 200, 0, 255); 
    strip.setPixelColor(23, 200, 0, 255); 
    strip.show(); 
    delay(500); 
    strip.setPixelColor(20, 0, 0, 0);  
    strip.setPixelColor(21, 0, 0, 0); 
    strip.setPixelColor(22, 0, 0, 0); 
    strip.setPixelColor(23, 0, 0, 0); 
    delay(500);
 
    analogWrite(A3,0);
    }
    
  
  if(digitalRead(6)==HIGH)
  {
   Serial.print("h");  //핀번호 6번에 신호가 들어올 경우 신호 h를 보냄
   analogWrite(A5,255);
  strip.setPixelColor(0, 255, 0, 0);  //네오픽셀에 빨간색 불빛을 나오게 함
  strip.setPixelColor(1, 255, 0, 0); 
  strip.setPixelColor(2, 255, 0, 0); 
  strip.setPixelColor(3, 255, 0, 0); 
  strip.show(); 
  delay(500); 
 strip.setPixelColor(0, 0, 0, 0);  
 strip.setPixelColor(1, 0, 0, 0); 
 strip.setPixelColor(2, 0 ,0 ,0); 
 strip.setPixelColor(3, 0, 0, 0); 
delay(500);
 analogWrite(A5,0);
  }
 }



