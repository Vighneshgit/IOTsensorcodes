int buzzer = LED_BUILTIN;
int smoke = A0;   //read sensor

// Your threshold value. You might need to change it.
int sensorThres = 750;

void setup() {
 pinMode(buzzer, OUTPUT);
 pinMode(smoke, INPUT);
 Serial.begin(9600);
}

void loop() {
 int analogSensor = analogRead(smoke);

 Serial.print("Pin A0: ");
 Serial.println(analogSensor);
 // Checks if it has reached the threshold value
 if (analogSensor > sensorThres)
 {
   //tone(buzzer, 1000, 200);
   digitalWrite(buzzer,HIGH);
 }
 else
 {
   //noTone(buzzer);
   digitalWrite(buzzer,LOW);
 }
 delay(100);
}
