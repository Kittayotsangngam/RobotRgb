#include <Arduino.h>
#include "Rgb.h"
//GND is One Ground
Rgb rgb = Rgb(11,12,13,15);

void setup() {
  // put your setup code here, to run once:
  rgb.begin();
  Serial.begin(9600);
}

void loop() {
   rgb.fullBody(148,0,211);
   delay(500);
   rgb.fullBody(75,0,130);
   delay(500);
   rgb.fullBody(0,0,255);
   delay(500);
   rgb.fullBody(0,255,0);
   delay(500);
   rgb.fullBody(255,255,0);
   delay(500);
   rgb.fullBody(255,127,0);
   delay(500);
  rgb.fullBody(255,0,0);
   delay(500);
}