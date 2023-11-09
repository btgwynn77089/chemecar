//Nathan Samuell
//used to test car with wheels actually on it. any insights will be added into the prototype file.


//instantiation
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

  digitalWrite(motorPin1,HIGH);
  delay(3000);
  digitalWrite(motorPin1,LOW);
  delay(3000);

  digitalWrite(motorPin2,HIGH);
  delay(3000);
  digitalWrite(motorPin2,LOW);
  delay(3000);

  digitalWrite(motorPin3,HIGH);
  delay(3000);
  digitalWrite(motorPin3,LOW);
  delay(3000);

  digitalWrite(motorPin4,HIGH);
  delay(3000);
  digitalWrite(motorPin4,LOW);
  delay(3000);


  digitalWrite(motorPin1,HIGH);
  digitalWrite(motorPin2,HIGH);
  digitalWrite(motorPin3,HIGH);
  digitalWrite(motorPin4,HIGH);
  delay(5000);
  
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,LOW);
  digitalWrite(motorPin3,LOW);
  digitalWrite(motorPin4,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

}
