#include <Arduino.h>
#include <Led.h>
#define LED_PIN 13

Led led(LED_PIN);

void po-ad () {

}

void default () {

}

void setup()
{
  led.init();
}

void loop()
{
  led.on();
  delay(500);
  led.off();
  delay(500);
}
