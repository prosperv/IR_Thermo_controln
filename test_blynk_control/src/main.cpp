
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "IRremoteESP8266.h"
#include "BlynkSimpleEsp8266.h"



// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "3771a29413a54d7387eaae537228ed95";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "HouseOfMack_EXT";
char pass[] = "SeanSarahMack123";


void setup()
{
    Serial.begin(115200);
    // IrOut.begin();
    Blynk.begin(auth, ssid, pass);
}

void loop()
{

}
