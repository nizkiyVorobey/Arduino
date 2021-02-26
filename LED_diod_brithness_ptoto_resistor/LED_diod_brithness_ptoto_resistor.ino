
int sensePin = 0;
int ledPin = 9;
 
void setup() {
  analogRead(DEFAULT); // isn't necessary
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int val = analogRead(sensePin);

  // if less 300, val = 300, if val more 600, val = 600
  val = constrain(val, 200, 500);

  // 750 min; 900 max; -> 0 min; 255 max;
  int ledLevel = map(val, 200, 500, 255, 0);
  
//  if (val < 400) digitalWrite(ledPin, HIGH);
//  else digitalWrite(ledPin, LOW);

  analogWrite(ledPin,ledLevel);

  
  Serial.println(analogRead(sensePin));
//  delay(500);
} 
