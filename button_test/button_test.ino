// Nathan Samuell Chem E Car 2024

int buttonPin = 7;

void setup() {
    pinMode(buttonPin,OUTPUT);
    Serial.begin(9600);
}

void loop () {
    if(buttonPin==HIGH) {
        Serial.println("Button Pressed!");

    } else {
        Serial.println("Button not presed");
    }
    delay(500);

}