int sensorPin = A0; // select the *analog zero* input pin for probing the photoresistor
int onboardLED = 13; // select the pin for the HEAD's built-in LED
int sensorValue = 0; // variable that we'll use the store the value reading fron the sensor
unsigned int batteryCapacity = 50000; 
unsigned int batteryLevel = 0;
unsigned int ticks = 0;
unsigned int wait = 100;
double PercentFull;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(onboardLED, OUTPUT);
}

void PrintBatteryPercentage() {
  // print the elasped time
  Serial.print(ticks);
  Serial.print("ms    charge at ");

  // convert the integers to decimal numbers, divide them and print...
  Percentfull = 100*((double)batteryLevel / (double)batteryCapacity);
  Serial.print(PercentFull);

  // print a percent character and line return...
  Serial.print("%");
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
