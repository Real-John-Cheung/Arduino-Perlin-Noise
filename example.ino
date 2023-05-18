#include "Noise.h"

float noiseP = 0;

void setup(){
    Serial.begin(9600);
}

void loop(){
    float rawNoiseV1 = Noise::noise(noiseP1);
    Serial.println(rawNoiseV1);
    delay(100);
    noiseP1 += 0.03;
}