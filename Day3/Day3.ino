int LED = 12;
int Switch1 = 2; // pin 2 will be attached to the switch

void setup() {
  // setup both an output AND an input on the HERO
  pinMode(LED, OUTPUT);
  pinMode(Switch1, INPUT);
}

void loop() {
  // takes actions based on the status of the input switch
  if (digitalRead(Switch1) == HIGH) {
    digitalWrite(LED, HIGH); // turn LED ON
  } else {
    digitalWrite(LED, LOW); // turn LED OFF
  }
}
