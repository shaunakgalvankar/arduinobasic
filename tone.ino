void setup() {
  // put your setup code here, to run once:

}

void loop() {

int i;  // put your main code here, to run repeatedly:
for (i=1;i<=4;i++){
  ekpat();
}
for (i=1;i<=8;i++){
duppat();
}
for (i=1;i<=16;i++){
  chaupat();
}
tone(6,4000);
delay(5000);

}

void ekpat(){
  tone (6, 1000);
delay(400);
noTone(6);
delay(400);
}

void duppat(){
tone (6, 1000);
delay(100);
noTone(6);
delay(100);
}

void chaupat(){
  tone (6, 1000);
delay(50);
noTone(6);
delay(50);
}
