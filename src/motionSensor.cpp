#include <Arduino.h>
#include "motionSensor.h"

MotionSensor::MotionSensor(int pin)
{
    _motionSensorPin = pin;
    val = 0;
    pirState = LOW;
}

void MotionSensor::check(){    
  val = digitalRead( _motionSensorPin );  // read input value
  // Serial.print("Sensor : ");
  // Serial.println(val);  
  if (val == HIGH) {            // check if the input is HIGH
    if (pirState == LOW) {
      Serial.println("Motion detected!"); // We only want to print on the output change, not state
      pirState = HIGH;
    }
  } else {
    if (pirState == HIGH){
      Serial.println("Motion ended!"); // We only want to print on the output change, not state
      pirState = LOW;
    }
  }
}
