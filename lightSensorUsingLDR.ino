void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorvalue=analogRead(A0);
Serial.println(sensorvalue);
delay(10);
analogWrite(3,sensorvalue);
//digitalWrite(3,HIGH);
}
