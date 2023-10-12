int motorPin1 = 2;
int motorPin2 = 4;

int photoPin = A0;

int photoInput = 7;

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(photoInput, OUTPUT);

  pinMode(photoPin, INPUT);
  }

void loop() {
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(photoInput, HIGH);
  
  int value = analogRead(photoPin);

  if (value < 10){
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    }
  }