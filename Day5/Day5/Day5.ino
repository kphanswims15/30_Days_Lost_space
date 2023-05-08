int Red = 13;
int Yellow = 12;
int Green = 11;

void setup() {
  // sets up the traffic light
  pinMode(Red, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Green, OUTPUT);
  digitalWrite(Red, HIGH);
  digitalWrite(Yellow, HIGH);
  digitalWrite(Green, HIGH);
}

void loop() {
  // changes the light every second
  if (digitalRead(Red) == HIGH) {
    digitalWrite(Red, LOW);
    digitalWrite(Yellow, LOW);
    digitalWrite(Green, HIGH);
  } else if (digitalRead(Yellow) == HIGH) {
    digitalWrite(Red, HIGH);
    digitalWrite(Yellow, LOW);
    digitalWrite(Green, LOW);
  } else if (digitalRead(Green) == HIGH) {
    digitalWrite(Red, LOW);
    digitalWrite(Yellow, HIGH);
    digitalWrite(Green, LOW);
  }

  delay(1000);
}
