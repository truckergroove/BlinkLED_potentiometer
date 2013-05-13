/*
  Blink LED i.f.o. resistance change with potmeter
 */
 

int led = 13, sensorValue;  //declaration of the LEDpin and a variable to 
                            //store the analog potmeter values

void setup() {                
  // initialize the digital pin as an output for the LED.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  sensorValue = analogRead(A0);  //read from potmeter
  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(sensorValue);               // wait for some time dependent on resistance value
  
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(sensorValue);               // wait for some time dependent on resistance value
}
