 void setup() {
   // configure the serial connection:
   Serial.begin(9600);
 }
 
void loop() {
   // read the X axis:
   int sensorValue = analogRead(A0);
   // print the results:
   Serial.print(sensorValue);
   Serial.print(",");
 
   // read the y axis:
   sensorValue = analogRead(A1);
   // print the results:
   Serial.print(sensorValue);
   Serial.print(",");
 
   // read the button:
   sensorValue = analogRead(A2);
   // print the results:
   Serial.println(sensorValue);
}
