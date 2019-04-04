#ifndef Pins_h
#define Pins_h

//===========================================================================
//===================================== PIN MAP =============================
//===========================================================================

/**
 * SENSORS
 */

#define MOTION_SENSOR_PIN D2 //TO-SET // BEWARE ! SET A CONFIG FOR TEMP SENSOR
#define TEMP_SENSOR_PIN //TO-SET // BEWARE ! SET A CONFIG FOR TEMP SENSOR
#define DOOR_SENSOR_PIN //TO-SET // BEWARE ! SET A CONFIG FOR TEMP SENSOR

/**
 * ACTUATORS
 */

#define RELAY1_PIN //TO-SET

/**
 * COMMUNICATION
 */

// FIL PILOTE
#if HS_CONTROL_MODE == FIL_PILOT
    #define HS_CONTROL_PIN  //TO-SET
#endif

/**
 * ENERGY METER
 */

// PULSE MODE
#if EM_READING_MODE == ENERGY_METER_PULSE
    #define EM_READING_PIN 0 //TO-SET
#endif

#endif