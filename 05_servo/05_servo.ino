#include <Servo.h>
Servo myServo;

int servoPin = 9;
bool grow = true;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:



    for(int i = 0; i <180; i++){
      Serial.println(i);
      myServo.write(i);
    }


//    for(int i = 0; i < 180;){
//      Serial.println(i);
//      myServo.write(i);
//      delay(10);
//      if (grow) {
//        i++;
//      }
//      if (i == 180) {
//        grow = false;
//      } 
//    }
//
//
//    for(int i = 180; i > 0;){
//      Serial.println(i);
//      myServo.write(i);
//      delay(10);
//      if (!grow) {
//        i--;
//      }
//      if (i == 0) {
//        grow = true;
//      } 
//    }

 
}
