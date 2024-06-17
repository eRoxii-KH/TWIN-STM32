// eRoxi TWIN STM32F1 Digital output pin with Arduinio IDE vai SWD
const int ledPin = PC13; // Led Pin on the TWIN STM32 at pin PC13

void setup() {
  // Configure PC13 as output pin on TWIN STM32
  pinMode( ledPin,OUTPUT);
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  digitalWrit(ledPin, HIGH); //Set digital PIN PC13 to HIGH
  Serial.println("LED ON"); // Display statuts LED ON
  delay(1000); // wait for 1 second
  digitalWrite(ledPin,LOW); // Set digital PIN PC13 to LOW
  Serial.println("LED OFF"); // Display statuts LED OFF
  delay(1000); //wait for 1 second
}
