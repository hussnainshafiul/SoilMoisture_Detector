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
