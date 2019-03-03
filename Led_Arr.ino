// FastLED-3.2.0 - Version: Latest 
#include <FastLED.h>
#include <avr/pgmspace.h>

//Tests if all LEDs on strip are working

#define numLED 20
//Number of LEDS in strip
#define PIN 12

CRGB LEDs[numLED];


void setup() 
{
  FastLED.addLeds<NEOPIXEL, PIN>(LEDs, numLED);
  //FastLED.addLeds<WS2812B, PIN, 0xFFFFFF>(LEDs, numLED);
  FastLED.setBrightness();
}

void loop() 
{
  for(int i = 0; i < numLED; i++)
  {
    LEDs[i] = 0xff0000;
    delay(600);
    FastLED.show();
  }
  
  for(int i = 0; i < numLED; i++)
  {
    LEDs[i] = 0x000000;
    delay(600);
    FastLED.show();
  }
  
}
