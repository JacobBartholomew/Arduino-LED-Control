#include "FastLED.h"
#define ledPin 13
int inPin = 2;
int inPin2 = 3;
int val = 0;
int val2 = 0;
#define NUM_LEDS 15
CRGB leds[NUM_LEDS];

void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<NEOPIXEL, ledPin>(leds, NUM_LEDS);
  

}

void loop() {
  // put your main code here, to run repeatedly:
    val = digitalRead(inPin);
    val2 = digitalRead(inPin2);
    if (val == 0 && val2 == 0) {
      for (int i = 0; i<NUM_LEDS; i++) {
    leds[i] = CRGB::Blue;
    FastLED.show();
    }
    }
       else if (val == 1 && val2 == 0) {
      for (int i = 0; i<NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    }
    }
      else if (val == 0 && val2 == 1) {
      for (int i = 0; i<NUM_LEDS; i++) {
    leds[i] = CRGB::Purple;
    FastLED.show();
    }
    }
      else if (val == 1 && val2 == 1) {
      for (int i = 0; i<NUM_LEDS; i++) {
    leds[i] = CRGB::Green;
    FastLED.show();
    }
    }
}
