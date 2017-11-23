void setup() {   

pinMode(2, INPUT);  // 디지털 2번핀을 입력모드로 설정.                   
pinMode(3, INPUT);  
pinMode(4, INPUT);  
pinMode(5, INPUT);
pinMode(6, INPUT);
pinMode(8, OUTPUT);  // 디지털 8번핀을 출력 모드로 설정
} 

 

void loop() {

if (digitalRead(3) == HIGH) 
 {    // 만약 3번핀에 HIGH신호가 입력되면
 tone (8, 361.6, 100);             // 3번핀에 주파수 신호 361.6을 출력
 }
 
else if (digitalRead(2) == HIGH) {
 tone (8, 329.6, 100);
}

else if (digitalRead(4) == HIGH) 
 {   // 그게아니라 4번에 HIGH 신호가 입력되면
 tone (8, 393.7, 100);            // 3번핀에 주파수 신호 393.7을 출력
 }

else if (digitalRead(5) == HIGH) 
{  
 tone (8, 440, 100);}
 else if (digitalRead(6) == HIGH) 
 {
 tone (8, 493.9, 100);}
}
