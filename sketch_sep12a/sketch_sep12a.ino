int motorPin1 = 2;
int motorPin2 = 4;

int photoPin = A0;

void setup() {
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  pinMode(photoPin, INPUT);

  Serial.begin(9600);
  }

void loop() {  
  int value = analogRead(photoPin);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, HIGH);

  if (value < 50) {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    Serial.println("dark");
    while(1);
  }
  if (value > 50) {
    Serial.println("light");
  }
  delay(1000);
  }