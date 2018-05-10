void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
}
int brightness=0;
int fadeAmount=5;
void loop() {
  // put your main code here, to run repeatedly:
  
analogWrite(3,brightness);
brightness=brightness +fadeAmount;
if (brightness==255){
  fadeAmount=-fadeAmount;

}
if (brightness==0){
  fadeAmount=-fadeAmount;
  delay (10);
}
delay (20);

}
