// FastLED-3.2.0 - Version: Latest 
#include <FastLED.h>
#include <avr/pgmspace.h>

//Creates digits from 0 to 9 out of a matrix display

#define numLED 42
//Number of LEDS in strip
#define PIN 12

CRGB LEDs[numLED];

/*
Seven-Segment display
  -
|   |
  _
|   |
  _
  
Each segment corresponds to an LED
Code connects specific segment to 
an LED. 


*/

void topOn()
{
  LEDs[14] = 0xff0000;
  LEDs[21] = 0xff0000;
  
}
void leftTopOn()
{
  LEDs[8] = 0xff0000;
  LEDs[9] = 0xff0000;
}
void rightTopOn()
{
  LEDs[29] = 0xff0000;
  LEDs[30] = 0xff0000;
}
void midOn()
{
  LEDs[17] = 0xff0000;
  LEDs[24] = 0xff0000;
}
void leftBotOn()
{
  LEDs[11] = 0xff0000;
  LEDs[12] = 0xff0000;
}
void rightBotOn()
{
  LEDs[32] = 0xff0000;
  LEDs[33] = 0xff0000;
}
void botOn()
{
  LEDs[27] = 0xff0000;
  LEDs[20] = 0xff0000;
}

void allOff()
{
  for(int i = 0; i < numLED; i++)
  {
    LEDs[i] = 0x000000;
  }
  
}
void setup() 
{
  FastLED.addLeds<NEOPIXEL, PIN>(LEDs, numLED);
  //FastLED.addLeds<WS2812B, PIN, 0xFFFFFF>(LEDs, numLED);
  FastLED.setBrightness(255);
  allOff();
}

void loop() 
{
  //Zero
  allOff();
  topOn();
  rightTopOn();
  rightBotOn();
  botOn();
  leftBotOn();
  leftTopOn();
  FastLED.show();
  FastLED.delay(1000);
  
  //One
  allOff();
  rightTopOn();
  rightBotOn();
  FastLED.show();
  FastLED.delay(1000);
  
  //Two
  allOff();
  botOn();
  leftBotOn();
  midOn();
  rightTopOn();
  topOn();
  FastLED.show();
  FastLED.delay(1000);
  
  //Three
  allOff();
  topOn();
  rightTopOn();
  midOn();
  rightBotOn();
  botOn();
  FastLED.show();
  FastLED.delay(1000);
  
  //Four
  allOff();
  leftTopOn();
  midOn();
  rightTopOn();
  rightBotOn();
  FastLED.show();
  FastLED.delay(1000);
  
  //Five
  allOff();
  topOn();
  leftTopOn();
  midOn();
  rightBotOn();
  botOn();
  FastLED.show();
  FastLED.delay(1000);
  
  //Six
  allOff();
  botOn();
  leftBotOn();
  rightBotOn();
  midOn();
  lefTopOn();
  topOn();
  FastLED.show();
  FastLED.delay(1000);
  
  //Seven
  allOff();
  topOn();
  rightTopOn();
  rightBotOn();
  FastLED.show();
  FastLED.delay(1000);
  
  //Eight
  allOff();
  topOn();
  leftTopOn();
  rightTopOn();
  midOn();
  leftBotOn();
  rightBotOn();
  botOn();
  FastLED.show();
  FastLED.delay(1000);
  
  //Nine
  allOff();
  topOn();
  leftTopOn();
  rightTopOn();
  midOn();
  rightBotOn();
  botOn();
  FastLED.show();
  FastLED.delay(1000);
}
