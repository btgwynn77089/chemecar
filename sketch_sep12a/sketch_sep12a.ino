int motorPin1 = 2;
int motorPin2 = 4;

#define photoPin = A0;

int photoInput = 7;

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  pinMode(photoPin, INPUT);

  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, HIGH);
  }

void loop() {  
  int value = analogRead(photoPin);

  if (value < 10) {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    }
  }