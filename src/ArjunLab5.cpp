/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/student/Desktop/IoT/ArjunLab5/src/ArjunLab5.ino"
void setup();
void loop();
#line 1 "/Users/student/Desktop/IoT/ArjunLab5/src/ArjunLab5.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

int cMax = 4096;
int cMin = 0;

void setup() {

pinMode(D6, OUTPUT);
pinMode(A5, INPUT);

}

void loop() {

int reading = analogRead(A5);

int Maxx = max(cMax, reading);
int Minn = min(cMin, reading);

int brightness = map(reading, Minn, Maxx, 0, 255);

analogWrite(D6, brightness);

}