 void setup() {
   // configure the serial connection:
   Serial.begin(9600);
 }
 
void loop() {
   // read first value
   int sensorValue = analogRead(A0);
   // print the results:
   Serial.print(sensorValue);
   Serial.print(",");
 
   // read second value
   sensorValue = analogRead(A1);
   // print the results:
   Serial.print(sensorValue);
   Serial.print(",");
 
   // read third value
   sensorValue = analogRead(A2);
   // print the results:
   Serial.println(sensorValue);
}
