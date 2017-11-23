#define Rx 3 
#define Tx 2 

SoftwareSerial BT(Tx,Rx);

void setup() {

 Serial.begin(9600); //시리얼 모니터의 통신 속도를 9600으로 설정 
 BT.begin(9600); //블루투스 모듈의 통신 속도를 9600으로 설정

}

void loop() {
  

}
