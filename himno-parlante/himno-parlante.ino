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
#include "notas.h"
int speakerPin = 8;

int tones[ ] = {NOTE_C5, NOTE_E5, NOTE_C5, NOTE_G5, NOTE_G5, NOTE_F5, NOTE_B5, NOTE_B5, NOTE_B5, NOTE_B5, NOTE_C5, NOTE_D5, NOTE_C5};
int duraciones[ ] = {1000, 750, 250, 1000, 500, 500, 1000, 1000, 1500, 250, 250, 1000, 1000};
             //mid   C    C#   D    D#    E   F     F#   G   G#   A

// Do   mi   do    sol   sol   fa   si   si   si   si   do   re   do
//  1   0.75 0.25  1      0.5  0.5  1    1    1.5  0.25 0.25 1    1


void tocarHimno()
{
  for( int i = 0; i < 13; i++){
    tone(speakerPin, tones[i], duraciones[i]);
    delay(1+duraciones[i]);
    if(i > 7 && i < 10) {
      noTone(speakerPin);
      delay(10);
    }
  };
};

void setup()
{
  tocarHimno();  
  noTone(speakerPin);
}

void loop()
{
}
