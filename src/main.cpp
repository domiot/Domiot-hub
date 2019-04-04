#include <FS.h> 

#include <Arduino.h>
#include <ESP8266WiFi.h>          //ESP8266 Core WiFi Library (you most likely already have this in your sketch)
#include <DNSServer.h>            //Local DNS Server used for redirecting all requests to the configuration portal
#include <ESP8266WebServer.h>     //Local WebServer used to serve the configuration portal
#include <WiFiManager.h>          //https://github.com/tzapu/WiFiManager WiFi Configuration Magic
#include <PubSubClient.h>
#include "config.h"
#include "pins.h"
#include "motionSensor.h"
#include "wifiManagement.h"

// https://github.com/Microsoft/vscode-cpptools/blob/master/Documentation/Getting%20started%20with%20IntelliSense%20configuration.md
// https://docs.platformio.org/page/projectconf/section_env_build.html#build-flags
// https://forum.arduino.cc/index.php?topic=532067.0



/*const char* mqtt_server = MQTT_SERVER;
const int mqtt_port = MQTT_PORT;*/

MotionSensor motion(MOTION_SENSOR_PIN);
WiFiManager wifiManager;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Starting...");  
  
  wifiManager.setBreakAfterConfig(true); //exit after config instead of connecting
  wifiManager.resetSettings();
  wifiManager.setAPCallback(configModeCallback); //wifiManager.autoConnect("AutoConnectAP", "password")
  wifiManager.autoConnect();

}

void loop() {
  motion.check(); 
  delay(100);
}


