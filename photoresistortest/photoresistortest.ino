#define RESISTOR_PIN A0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RESISTOR_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(RESISTOR_PIN));
  delay(100);
}
