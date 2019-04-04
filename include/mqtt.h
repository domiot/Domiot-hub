#ifndef Mqtt_h
#define Mqtt_h

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>

extern WiFiClient espClient;
extern PubSubClient client(espClient);
#endif