void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  float duracion = 1000.0;
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(duracion/2);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(duracion/4);
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(duracion/8);
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(duracion/16);
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(duracion/32);
}
