
#include <Servo.h>
Servo myservo;
int value = 59;
int val = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  myservo.attach(9);
  delay(1);
  myservo.write(10);
  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()>0)
  {
    if (Serial.read() == '0')
    {
      value +=2;
    }
    else
    {
      value-=2;
    }
    Serial.println(value);
  }
  myservo.write(value);

}
