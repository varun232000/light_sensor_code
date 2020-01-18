int sensorPin = A0;    // select the input pin for the potentiometer
int red1ledPin = 11; 
int red2ledPin = 12;  // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  Serial.begin(9600);
  pinMode(red1ledPin, OUTPUT);
  pinMode(red2ledPin,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

/*void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the ledPin off:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}*/
void loop()
{
  sensorValue=analogRead(sensorPin);
  if(sensorValue <= 14)
  digitalWrite(11,HIGH);
  else
  digitalWrite(11,LOW);
  if(sensorValue <=10)
  digitalWrite(12,HIGH);
  else
  digitalWrite(12,LOW);
  Serial.println(sensorValue);
  delay(2);
}
