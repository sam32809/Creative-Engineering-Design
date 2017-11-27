int A=digitalRead(8);
int B=digitalRead(9);
int C=digitalRead(10);
int D=digitalRead(11);
int E=digitalRead(12);
int F=digitalRead(13);

void setup(){
  Serial.begin(9600);
  Serial.println("UART");
}
void loop(){
  if('A'==1){
    Serial.println("8번핀");
  }
 if('B'==1){
    Serial.println("9번핀");
  }
 if('C'==1){
    Serial.println("10번핀");
  }
 if('D'==1){
    Serial.println("11번핀");
  }
 if('E'==1){
    Serial.println("12번핀");
  }
 if('F'==1){
     Serial.println("12번핀");
  }
  delay(1000);
}

