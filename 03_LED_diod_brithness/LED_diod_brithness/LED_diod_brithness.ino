
int ledPin = 11;
int switchPin = 8;

bool currentButton = LOW;
bool lastButton = LOW;
int ledLevel = 0; // 0-255

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

bool debounce(bool last) {
  bool current = digitalRead(switchPin);
  if (last != current) {
    delay(5);
    current = digitalRead(switchPin);
  }

  return current;
}

void loop() {
//  Serial.println(digitalRead(switchPin)); // 0 когда кнопка выклюяена и 1 когда зажата
//  Serial.println(switchPin);  // 8

  currentButton = debounce(lastButton);
  
  if (lastButton == LOW && currentButton == HIGH) {
    ledLevel = ledLevel + 51;
  } 

  lastButton = currentButton;

  if (ledLevel > 255) ledLevel = 0;

  analogWrite(ledPin, ledLevel);

}
