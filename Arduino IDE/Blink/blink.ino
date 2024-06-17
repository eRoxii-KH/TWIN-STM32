// eRoxi TWIN STM32F1 Blink Arduinio IDE vai SWD
const int ledPin = PC13; // Led Pin on the TWIN STM32 at pin PC13

void setup() {
  // Configure PC13 as output pin on TWIN STM32
  pinMode( ledPin,OUTPUT);

}

void loop() {
  digitalToggle(ledPin);
  delay(1000); // wait for 1 seconde to blink LED
}

