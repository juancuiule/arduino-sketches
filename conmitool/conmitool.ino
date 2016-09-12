#include <LedControl.h>

int DIN = 10;
int CS =  11;
int CLK = 12;

byte corazon[8]= {0x66,0xFF,0xFF,0xFF,0xFF,0x7E,0x3C,0x18};
byte corazo[8]= {0x0,0x24,0x7E,0x7E,0x7E,0x3C,0x18,0x0};
byte coraz[8]= {0x0,0x0,0x24,0x7E,0x3C,0x18,0x0,0x0};

LedControl lc=LedControl(DIN,CLK,CS,0);

void setup(){
 lc.shutdown(0,false);       //The MAX72XX is in power-saving mode on startup
 //lc.setIntensity(0,15);      // Set the brightness to maximum value
 lc.clearDisplay(0);         // and clear the display
}

void loop(){ 
    printSnake();
    delay(10);
}

void printSnake(){
  printByte(corazon);
  delay(20);
  printByte(corazo);
  delay(20);
  printByte(coraz);
  delay(20);
}

void printByte(byte character [])
{
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}

