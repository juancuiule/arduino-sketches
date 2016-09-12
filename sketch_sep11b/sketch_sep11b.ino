/*int speakerPin = 13;
int potPin = 2;
int vol = 0;

void setup() {
  
  pinMode(speakerPin, OUTPUT);
  
}
void loop() {
  
  //beep(1000);
  vol = analogRead(potPin);
  analogWrite(speakerPin, vol);
}*/
     int speakerPin = 13;
  
     int numTones = 10;
     int tones[ ] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440,466, 494};
                       // mid C C# D D# E F F# G G# A

     void setup()
        { }

     void loop()
        {
             for (int i = 0; i < numTones; i++)
                 {
                     tone(speakerPin, tones[i]);
                     delay(500);
                 }
             noTone(speakerPin);
       }
