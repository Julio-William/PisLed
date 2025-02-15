const int ledPin0 = 0;
const int ledPin2 = 2;
const int ledPin4 = 4;

void setup() {
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin4, OUTPUT);
}

void loop() {
  digitalWrite(ledPin0, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin4, LOW);
  delay(100);
  digitalWrite(ledPin0, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin4, LOW);
  delay(100);
  digitalWrite(ledPin0, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin4, HIGH);
  delay(100);
  }