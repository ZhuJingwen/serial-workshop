bool ledState = LOW;
void setup() {
  // configure the serial connection:
  Serial.begin(9600);
  pinMode(5,OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    int inByte = Serial.read();
    
    //char inChar = (char)Serial.read();
    //char inChar = 'x';
    String inString = "Hello world";
    Serial.write(inString);
//    if(inChar == 'h'){
//      ledState = HIGH;
//    }else if(inChar == 'l'){
//      ledState = LOW;
//    }
//    // read first value
//    int sensorValue = analogRead(A0);
//    // print the results:
//    Serial.print(sensorValue);
//    Serial.print(",");
//
//    // read second value
//    sensorValue = analogRead(A1);
//    // print the results:
//    Serial.print(sensorValue);
//    Serial.print(",");
//
//    // read third value
//    sensorValue = analogRead(A2);
//    // print the results:
//    Serial.println(sensorValue);
  }


  //digitalWrite(5,ledState);
}
