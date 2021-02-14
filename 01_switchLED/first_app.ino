
int ledPin = 13;

// when arduino launch at first
void setup() {
  // pid can bet INPUT and OUTPUT, we set ledPin as OUTPUT
  pinMode(ledPin, OUTPUT);
}

// just loop
void loop() {
  // eneadle light
  digitalWrite(ledPin, HIGH);
  delay(1000);

  // siable light
  digitalWrite(ledPin, LOW);
  delay(1000);
}
