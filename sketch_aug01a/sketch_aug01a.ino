int pinIntensidad = 12;
int pinRed = 11;
int pinGreen = 10;
int pinBlue = 9;
int torojo = 0;
int toverde = 0;
int toazul = 0;
int tempo = 1000;
int fuerza = 1;
int masfuerza = 1;
void setup(){
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);
  pinMode(pinIntensidad, OUTPUT);
}
void loop() {
  setColor(0,0,0,1);
  delay(tempo);
  torojo = torojo + 1;
  if(torojo > 255){
    torojo = 0;
    toverde = toverde + 1;
  }
  if(toverde > 255){
    toverde = 0;
    toazul = toazul + 1;
  }
  if(toazul > 255){
    toazul = 0;
      if(fuerza == 0){
      masfuerza = 1;
      }
      if(fuerza == 255){
      masfuerza = 0;
      }
      if(masfuerza==0){
      fuerza = fuerza - 1;
      }
      if(masfuerza==1){
      fuerza = fuerza + 1;
      }   
  }
}
void setColor(int red, int green, int blue, int intensidad)
{
  analogWrite(pinRed, 0 - red);
  analogWrite(pinGreen, 0 - green);
  analogWrite(pinBlue, 254 - blue);
  analogWrite(pinIntensidad, intensidad);
}
