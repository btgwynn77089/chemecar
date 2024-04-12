// Nathan Samuell Chem E Car 2024

int buttonPin = 7;

void setup() {
    pinMode(buttonPin,INPUT);
    Serial.begin(9600);
    Serial.println("Serial Monitor intialized!");
}

void loop () {
    bool buttonStatus = digitalRead(buttonPin);
    if(buttonStatus==HIGH) {
        Serial.println("Button Pressed!");

    } else {
        Serial.println("Button not Pressed");
    }
    delay(500);

}