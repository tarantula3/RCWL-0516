int ledPin   = 3;               // Pin where the LED is hooked up
int inputPin = 2;               // Pin where teh Radar Sensor is hooked up
int motion   = 0;               // State of motion


void setup() {
  pinMode(ledPin, OUTPUT);      // Declare the LED pin as output
  pinMode(inputPin, INPUT);     // Declare the sensor pin as input 
  Serial.begin(9600);
};


void loop() {
  motion = digitalRead(inputPin);  // Read the input pin
  
  if (motion == HIGH) { 
    digitalWrite(ledPin, HIGH);   // Turn on the LED
    Serial.println("Motion Detected!");
  } else {
    digitalWrite(ledPin, LOW);    // Turn off the LED
    Serial.println("No Motion Detected!");
  };
};
