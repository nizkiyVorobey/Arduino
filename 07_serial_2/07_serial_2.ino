int readPin = 0;
int ledPin = 11;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int readValue = analogRead(readPin);

  int ledPinBrithnes = map(readValue,0,1023, 0,255);
  String str1 = "readValue: " + String(readValue);
  String str2 = "readValue: " + String(ledPinBrithnes);
//  Serial.println(str1);
//  Serial.println(str2);
  Serial.println(ledPinBrithnes);
  analogWrite(ledPin, ledPinBrithnes);
  delay(200);
}
