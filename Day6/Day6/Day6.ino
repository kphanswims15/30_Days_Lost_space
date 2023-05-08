int sensorPin = A0; // select the *analog zero* input pin for probing the photoresistor
int onboardLED = 13; // select the pin for the HEAD's built-in LED
int sensorValue = 0; // variable that we'll use the store the value reading fron the sensor


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(onboardLED, OUTPUT);
}

void loop() {
  // Pulse the builtin LED for a time determined by the sensor
  sensorValue = analogRead(sensorPin);
  digitalWrite(onboardLED, HIGH);
  delay(sensorValue);
  digitalWrite(onboardLED, LOW);
  delay(sensorValue);

  // Read the analog sensor value and send it to the serial
  Serial.println(sensorValue);
  delay(sensorValue);
}
