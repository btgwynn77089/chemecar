// Nathan Samuell and Benjamin Gwynn
// UH CHEMECAR 2023
// currently testing the full motor functionaliy


//instantiation
int motorPin1 = 2; // motor pins
int motorPin2 = 4;
int motorPin3 = 8;
int motorPin4 = 12;
int photoPin = A0; // pin to read photoresistor input
bool isOn = false; // used in the motor control method
int seconds = 0;


//USE THIS VARIABLE TO CONTROL THE LIGHTS
int lightcheck = 100; // variable used as light input threshold during testing


void setup() {
  //pinmode setup
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(photoPin, INPUT);
  Serial.begin(9600); //start serial monitor for monitoring arduino output, can be reached by going to tools > serial monitor
  }


//turns the motors on or off based on a true/false input
void turnMotors(String onOrOff) {
  if (onOrOff == "on") {
    isOn = true;
  }
  else {
    isOn = false;
  }
  if (isOn == true) {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, HIGH);
  }
  else {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
  }
}

void loop() {  
  int value = analogRead(photoPin); // read photoresistor value
  turnMotors("on"); // turn the motors on by default

  if (value < lightcheck) { // check to see if motors should be off
    turnMotors("off");
    String output = "dark";
    Serial.println(output); // debug output
    Serial.println(value); // debug output
    while(1); //forever loop to break the cycle, reset process manually for now using arduino reset button (located by the serial port)
  }
  if (value > lightcheck) {
    String output = "light";
    Serial.println(output); // print light if the motors should be on
    Serial.println(value); //debug ouput
  }

  Serial.println(seconds);
  Serial.println("");
  seconds += 1;
  delay(1000); // waits one second, change this value to change how often the photoresistor checks 
  
  }