//a simple arduino blink code by shamim the programmer
// subscribe

int ledPin = 13; //Define the digital pin connected to the LED
int blinkInterval = 1000; //Interval in millisecond (1 second)

void setup() {
  pinMode(ledPin, OUTPUT); //Set the LED pin as an output
}

void loop() {
  digitalWrite(ledPin, HIGH); //Turn the LED on
  delay(blinkInterval); //Wait for the specified Interval
  digitalWrite(ledPin, LOW); // Turn the LED off
  delay(blinkInterval); //Wait for the specified Interval
}


// With this code, you should have the LED conencted to digital pin 13 on your Arduino board, and with blink on and off ar a 1-second interval.Adjust the 'blinkInterval' variable if you want the LED to blink at a different rate.

// bye bye
