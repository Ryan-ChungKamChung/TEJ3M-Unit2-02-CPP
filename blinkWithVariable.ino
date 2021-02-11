// Copyright 2021 (c) Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in February 2021
// This program makes the 13th pin (LED) blink with delay

// Global variables
const int DELAYTIME = 1000;  // delayTime is 1000ms
const int TIMEINCREMENT = 1000;  // how many ms are added delayTime every loop
int blinkTime = 1000;  // blinkTime is 1000ms, changes every loop


void setup() {                
  // Sets up the pins
  pinMode(LED_BUILTIN, OUTPUT);     
}


void loop() {
  // Loops infinitely after setup
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(DELAYTIME);
  
  blinkTime += TIMEINCREMENT;
}
