#include <LedControl.h>

int DIN = 10;
int CS =  11;
int CLK = 12;

byte aa[8]= {0x99,0x5A,0x3C,0xFF,0xFF,0x3C,0x5A,0x99};
byte ab[8]= {0x32,0xB4,0x78,0xFE,0xFE,0x78,0xB4,0x32};
byte ac[8] = {0x64,0x68,0xF0,0xFC,0xFC,0xF0,0x68,0x64};
byte ad[8]= {0xC8,0xD0,0xE0,0xF8,0xF8,0xE0,0xD0,0xC8};
byte ae[8]= {0x91,0xA0,0xC0,0xF1,0xF1,0xC0,0xA0,0x91};
byte af[8]= {0x22,0x41,0x80,0xE3,0xE3,0x80,0x41,0x22};
byte ag[8]= {0x44,0x82,0x1,0xC7,0xC7,0x1,0x82,0x44};
byte ah[8]= {0x89,0x5,0x3,0x8F,0x8F,0x3,0x5,0x89};
byte ai[8]= {0x13,0xB,0x7,0x1F,0x1F,0x7,0xB,0x13};
byte aj[8]= {0x26,0x16,0xF,0x3F,0x3F,0xF,0x16,0x26};
byte ak[8]= {0x4C,0x2D,0x1E,0x7F,0x7F,0x1E,0x2D,0x4C};

LedControl lc=LedControl(DIN,CLK,CS,0);

void setup(){
 lc.shutdown(0,false);       //The MAX72XX is in power-saving mode on startup
 //lc.setIntensity(0,15);      // Set the brightness to maximum value
 lc.clearDisplay(0);         // and clear the display
}

void loop(){ 
    printX();
    delay(10);
}

void printX(){
printByte(aa);
delay(100);
printByte(ab);
delay(100);
printByte(ac);
delay(100);
printByte(ad);
delay(100);
printByte(ae);
delay(100);
printByte(af);
delay(100);
printByte(ag);
delay(100);
printByte(ah);
delay(100);
printByte(ai);
delay(100);
printByte(aj);
delay(100);
printByte(ak);
delay(100);
}

void printByte(byte character [])
{
  int i = 0;
  for(i=0;i<8;i++)
  {
    lc.setRow(0,i,character[i]);
  }
}
