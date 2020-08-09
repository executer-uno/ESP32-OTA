#include "OTA.h"
unsigned long entry;

// #define ESP32_RTOS  // Uncomment this line if you want to use the code with freertos (only works on the ESP32)

void setup() {
  Serial.begin(115200);
  Serial.println("Booting");

  setupOTA("TemplateSketch"); // No dots(.), no spaces( ) in the name. Online device should response to ping by TemplateSketch.local name

  // your code

}

void loop() {
#ifndef ESP32_RTOS
  ArduinoOTA.handle();
#endif

  delay(20);

  // your code here

}
