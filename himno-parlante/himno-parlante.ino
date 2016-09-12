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
     int tones[ ] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440, 466, 494};
                   //mid   C    C#   D    D#    E   F     F#   G   G#   A

// Do   mi   do    sol   sol   fa   si   si   si   si   do   re   do
//  1   0.75 0.25  1      0.5  0.5  1    1    1.5  0.25 0.25 1    1


void tocarHimno()
{
  tone(speakerPin, Do);
  delay(100);
  tone(speakerPin, Mi);
  delay(75);
  tone(speakerPin, Do);
  delay(25);
  tone(speakerPin, Sol);
  delay(100);
  tone(speakerPin, Sol);
  delay(50);
  tone(speakerPin, Fa);
  delay(50);
  tone(speakerPin, Si);
  delay(100);
  tone(speakerPin, Si);
  delay(100);
  tone(speakerPin, Si);
  delay(150);
  tone(speakerPin, Si);
  delay(25);
  tone(speakerPin, Do);
  delay(0.25);
  tone(speakerPin, Re);
  delay(100);
  tone(speakerPin, Do);
  delay(100);
};

void setup() { }

void loop()
{
  tocarHimno();
  delay(2000);
  noTone(speakerPin);
}
