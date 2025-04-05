// Pin definitions
const int ledPin = 13;      // Built-in LED on most Arduino boards
const int buttonPin = 2;    // Button connected to digital pin 2

// Variable to store button state
int buttonState = 0;

void setup() {
  // Set pin modes
  pinMode(ledPin, OUTPUT);    // Set LED pin as output
  pinMode(buttonPin, INPUT);  // Set button pin as input

  // Start serial communication
  Serial.begin(9600);
  Serial.println("Arduino is ready!");
}

void loop() {
  // Read the state of the button
  buttonState = digitalRead(buttonPin);

  // Print the state to the Serial Monitor
  Serial.print("Button State: ");
  Serial.println(buttonState);

  // Turn the LED on or off depending on the button state
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn LED on
  } else {
    digitalWrite(ledPin, LOW);  // Turn LED off
  }

  delay(200); // Short delay to make output readable
}

