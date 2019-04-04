#ifndef MotionSensor_h
#define MotionSensor_h

#include <Arduino.h>

class MotionSensor {
    public:
        MotionSensor(int pin);
        void check();

    private:
        int pirState;
        int val; 
        int _motionSensorPin;
};
#endif