//Nathan Samuell
//2 Apr 2024
//used to test a two motor setup


//instantiation
int motorPin1 = 2; // motor pins
int motorPin2 = 12;

void setup() {
  // set motorpins as out
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);

  digitalWrite(motorPin1,HIGH);
  delay(3000);
  digitalWrite(motorPin1,LOW);
  delay(3000);

  digitalWrite(motorPin2,HIGH);
  delay(3000);
  digitalWrite(motorPin2,LOW);
  delay(3000);


  digitalWrite(motorPin1,HIGH);
  delay(1000)
  digitalWrite(motorPin2,HIGH);
  delay(5000);
  
  digitalWrite(motorPin1,LOW);
  digitalWrite(motorPin2,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

}
