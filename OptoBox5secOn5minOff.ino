// Copyright 2022 Kevin J. Donaldson

void setup() {
  // Stimulus Parameters: 5 seconds on, every 5 minutes (modeled after Ye Lab 2017 Neuron paper)
  // put your setup code here, to run once:
  Serial.begin(9600);
int State = 0;
pinMode(3,OUTPUT); // initiate Channel 3
pinMode(5,OUTPUT); // initiate Channel 5
pinMode(6,OUTPUT); // initiate Channel 6
}

void loop() {
  // put your main code here, to run repeatedly:

// 1st group  
digitalWrite(3,HIGH); //turn on LED Group 1 by passing 5V through pin 3, specified by HIGH
Serial.println("LED Group 1 on for 5 seconds");

digitalWrite(5,HIGH); //turn on LED Group 2 by passing 5V through pin 5, specified by HIGH
Serial.println("LED Group 2 on for 5 seconds");

digitalWrite(6,HIGH); //turn on LED by passing 5V through pin 6, specified by HIGH
Serial.println("LED Group 3 Lights on for 5 seconds");

//Keep LEDs on for 5 seconds (units=milliseconds)
delay(5000);

//Turn off LEDs
digitalWrite(3,LOW); //turn off LED Group 3, specified by LOW
digitalWrite(5,LOW); //turn off LED Group 5, specified by LOW
digitalWrite(6,LOW); //turn off LED Group 6, specified by LOW

//Stay off for 5 minutes
delay(300000); // stay in this state for 5 minutes
Serial.println("ALL LEDs should be off, begin 5 min delay");
}
