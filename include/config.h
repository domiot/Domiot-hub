#ifndef Config_h
#define Config_h

#define MCU_MODEL esp8266
#define BOARD_MODEL 
#define CONFIGURATION_VERSION 0000001
#define MQTT_SERVER "m24.cloudmqtt.com"
#define MQTT_PORT 15235  //1883

/**
 * HEATING SYSTEM CONTROL
 */

#ifndef HS_CONTROL_MODE
  #define HS_CONTROL_MODE FIL_PILOT
#endif

// FIL PILOTE
#if HS_CONTROL_MODE == FIL_PILOT
    #define FIL_PILOT_ORDERS_NB 4 // Un radiateur avec fil pilote offre 4 ou 6 ordres
#endif

// HEATING SYSTEM CONTROL LIST
#define FIL_PILOT 10
//...


/**
 * ENERGY METER
 */

// ENERGY METER LIST
#define ENERGY_METER_PULSE 10
//...

#endif