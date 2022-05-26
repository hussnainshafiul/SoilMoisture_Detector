#include <WiFi.h>
#include <Wire.h>    
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>            
#include "Adafruit_MQTT.h"
#include "Adafruit_MQTT_Client.h"

/*Wifi Credentials*/
const char *ssid =  "Vivo1920";     // WiFi Name
const char *pass =  "shafi1234"; // WiFi Password

/*For OLED DISPLAY*/
#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64  

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1); //-1 means OLED do not have a reset pin 

WiFiClient client;

//AidaFruit Credentials

#define MQTT_SERV "io.adafruit.com"
#define MQTT_PORT 1883
#define MQTT_NAME "hussshafiul" // Adafruit IO Username
#define MQTT_PASS "aio_DwVh62wuoHlT2v36r04gpu1LYEDQ" // Adafruit IO AIO key

const int Sensor_key = 36;             
int Sensor_value;   
