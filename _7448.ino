void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,1);
digitalWrite(12,1);
digitalWrite(11,0);
digitalWrite(10,0);
 
delay(1000); 
  

}
