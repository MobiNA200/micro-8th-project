#include <Servo.h>
const int sw = 2;
const int x = A0;
const int y = A1;
Servo myservo;
void setup() {
  myservo.attach(9);
  pinMode(y , INPUT);
  pinMode(x , INPUT);
}
void loop() {
  if (analogRead(y) > 1000){
    myservo.write(0);
    delay(1000);
    myservo.write(90);
    delay(1000);
  }
   if (analogRead(x) < 200){
    myservo.write(180);
    delay(1000);
    myservo.write(0);
    delay(1000);
  }
}
