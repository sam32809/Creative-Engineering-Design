void setup() {
  // put your setup code here, to run once:
pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(4, INPUT);
pinMode(5, INPUT);
pinMode(6, INPUT);
pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(2)==HIGH)
{
  tone(8, 329.6, 100);
}
else if(digitalRead(3)==HIGH)
{
  tone(8, 361.6, 100);
}
else if(digitalRead(4)==HIGH)
{
  tone(8, 393.7, 100);
}
else if(digitalRead(5)==HIGH)
{
  tone(8, 440, 100);

}
else if(digitalRead(6)==HIGH)
{
  tone(8, 493.9, 100);

}
}
