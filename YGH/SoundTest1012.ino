void setup() {
 pinMode(2,OUTPUT);
 pinMode(3,INPUT);
 pinMode(4,INPUT); 
 pinMode(5,INPUT); 


}

void loop() {
 if (digitalRead(3)==HIGH){
  tone(2,329.6);
 }
 else if (digitalRead(4)==HIGH){
  tone(2, 361.6);
 }
 else if (digitalRead(5)==HIGH){
 tone(2, 440.0);

 }
else{
 noTone(2);
}

}
