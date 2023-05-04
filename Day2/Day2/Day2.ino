int light = 12; // HERO board pin 12

void setup() {
  // initialize a digital pin as an output, then set its value to HIGH (5 volts)
  pinMode(light, OUTPUT);
  // digitalWrite(light, HIGH); // HIGH Turns on the light
  digitalWrite(light, LOW); // LOW turns the light off 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(light, LOW); // Turns off the light
  delay(1000); // wait for a sec
  digitalWrite(light, HIGH); // Turns on the light
  delay(500); // wait for a half a sec
}
