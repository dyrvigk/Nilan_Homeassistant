/* 
 *  It should not be necessary to change anything else than in this file to suit your needs.
 *  If you need to change other things, consider adding to this file and submit a pull request :)
 */

// Change config to verify that project has been configured
#define CONFIGURED 0

// WIFI settings
#define WIFISSID     "kdynet" // Put in your SSID
#define WIFIPASSWORD "1029384756" // Put in you SSID Password
#define CUSTOM_HOSTNAME "Nilan_MQTT"  // Hostname of the ESP8266 so that it's easier to find in your DHCP range

// LED settings
#define LED_BUILTIN     2     // Blue led on NodeMCU
#define USE_LED_BUILTIN true // if 'true', the blue led in a NodeMCU will blink during connection,
                           // and glow solid once connected
// MQTT settings
#define MQTTSERVER   "192.168.1.140" // Put in the IP adresse of your MQTT broker
#define MQTTUSERNAME "kenn" // Username for the MQTT broker (NULL if no username is required)
#define MQTTPASSWORD "Brazil4586" // Passowrd for the MQTT broker (NULL if no password is required)

// Serial port
#define SERIAL       SERIAL_HARDWARE // SERIAL_SOFTWARE or SERIAL_HARDWARE
#define SERIAL_SOFTWARE_RX D2 // only needed if SERIAL is SERIAL_SOFTWARE
#define SERIAL_SOFTWARE_TX D1 // only needed if SERIAL is SERIAL_SOFTWARE

#if CONFIGURED == 1
  #error "Default configuration used - won't upload to avoid loosing connection."
#endif
