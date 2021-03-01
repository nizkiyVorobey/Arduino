int incomingByte = 0;
int ledPin = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  
  if (Serial.available() > 0) {
    
//    incomingByte = Serial.read() - '0';
    incomingByte = Serial.parseInt();
  
    if (incomingByte == 0) {
      Serial.println("LED pin is off");
      digitalWrite(ledPin, LOW);
    } else if (incomingByte == 1) {
      Serial.println("LED pin is on");
      digitalWrite(ledPin, HIGH);
    } else {
      Serial.println("invaild value");
    }
  }

}
