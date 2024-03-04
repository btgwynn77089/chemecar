// Nathan Samuell
// 27 Feb 2024
// 
// drawn up with no board (so far) to find creative ways to reduce current draws

#include <Arduino.h>


// instantiation
int motorPin1 = 2; // motor pins
int motorPin2 = 4;
int motorPin3 = 8;
int motorPin4 = 12;

void setup() {
    // set motorpins as out
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(motorPin3, OUTPUT);
    pinMode(motorPin4, OUTPUT);

    // start serial monitor
    Serial.begin(9600);
    Serial.println("Instantiation complete--press any key to continue.");
    while (Serial.available() == 0) {} // waits forever until the SM has more than 0 bytes to parse
    Serial.flush();

}

void loop() {
    
    Serial.println("Motor Test 1 -- test each motor individually. Press any key to continue.");
    while (Serial.available() == 0) {}
    int t = 5000;
        
        for(int i=1; i<=4; i++) {
        if(i==1) {
            digitalWrite(motorPin1, HIGH);
            Serial.println("Motor 1 on for five Seconds...");
            delay(t);
            digitalWrite(motorPin1, LOW);
            Serial.println("Motor 1 off. Press any key to continue");
            while (Serial.available() == 0) {}
            Serial.flush();

        }else if (i==2){ //Motor 2
            digitalWrite(motorPin2, HIGH);
            Serial.println("Motor 2 on for five Seconds...");
            delay(t);
            digitalWrite(motorPin2, LOW);
            Serial.println("Motor 2 off. Press any key to continue");
            while (Serial.available() == 0) {}
            Serial.flush();

        }else if (i==3){ //Motor 3
            digitalWrite(motorPin3, HIGH);
            Serial.println("Motor 3 on for five Seconds...");
            delay(t);
            digitalWrite(motorPin3, LOW);
            Serial.println("Motor 3 off. Press any key to continue");
            while (Serial.available() == 0) {}
            Serial.flush();

        }else{             //Motor 4
            digitalWrite(motorPin4, HIGH);
            Serial.println("Motor 4 on for five Seconds...");
            delay(t);
            digitalWrite(motorPin4, LOW);
            Serial.println("Motor 4 off. Press any key to continue");
            while (Serial.available() == 0) {}
            Serial.flush();
            
        }}
        
    

    //Motor Test 2: Spikes when all motors draw current
    Serial.println("Motor Test 2--Test all motors at once. Press any key to continue.");
    while (Serial.available() == 0) {}
    Serial.flush();

    // Turn on the motors
    Serial.println("Turning on all motors at once for 3s with no time delay in 2 s");
    delay(2000);
    
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, HIGH);
    Serial.println("Motors on...");
    delay(3000);
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);

    Serial.println("All motors off. Press any key to continue.");
    while(Serial.available() == 0) {}
    Serial.flush();

    //Motor Test 3: stagger the motor on time
    Serial.println("Motor Test 3a--Turning on all motors with a delay of 0.25 s in between. Press any key to continue.");
    while (Serial.available() == 0) {}
    Serial.flush();

    t = 250;

    Serial.println("Turning on all motors for 3s with a 0.25s time delay in 2s");
    delay(2000);
    digitalWrite(motorPin1, HIGH);
    delay(t);
    digitalWrite(motorPin2, HIGH);
    delay(t);
    digitalWrite(motorPin3, HIGH);
    delay(t);
    digitalWrite(motorPin4, HIGH);
    Serial.println("All motors on.");
    delay(3000);
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    Serial.println("All motors off. Press any key to continue.");
    while (Serial.available() == 0) {}
    Serial.flush();

    Serial.println("Motor Test 3b--Turning on all motors with a delay of 0.1 s in between. Press any key to continue.");
    while (Serial.available() == 0) {}
    Serial.flush();

    t = 100;
    
    Serial.println("Turning on all motors for 3s with a 0.1s time delay in 2s");
    delay(2000);
    digitalWrite(motorPin1, HIGH);
    delay(t);
    digitalWrite(motorPin2, HIGH);
    delay(t);
    digitalWrite(motorPin3, HIGH);
    delay(t);
    digitalWrite(motorPin4, HIGH);
    Serial.println("All motors on.");
    delay(3000);
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    Serial.println("All motors off. Press any key to continue.");
    while (Serial.available() == 0) {}
    Serial.flush();

    t = 10;

    Serial.println("Turning on all motors for 3s with a 0.01s time delay in 2s");
    delay(2000);
    digitalWrite(motorPin1, HIGH);
    delay(t);
    digitalWrite(motorPin2, HIGH);
    delay(t);
    digitalWrite(motorPin3, HIGH);
    delay(t);
    digitalWrite(motorPin4, HIGH);
    Serial.println("All motors on.");
    delay(3000);
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    Serial.println("All motors off. Press any key to continue.");
    while (Serial.available() == 0) {}
    Serial.flush();

    // Add other motor tests later if needed.
    Serial.println("Motor test will repeat in 10s...");
    delay(10000);

}
