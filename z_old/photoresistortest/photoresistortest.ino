#define RESISTOR_PIN A0
int prValCurrent = 0;
int prValPrev = 0;
int difference = 0;
bool chng = true;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(RESISTOR_PIN, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  prValPrev = prValCurrent;
  prValCurrent = analogRead(RESISTOR_PIN);
  difference = prValCurrent - prValPrev;
  if (difference < 0) {
    difference *= -1;
  }
  if (difference > 10) {
    chng = true;
  }
  else{
    chng = false;
  }
  if (chng == true) {
    Serial.println("Change Detected");
    Serial.println(difference);
  }
  else {
    Serial.println("No Change");
    Serial.println(difference);
  }
  

  delay(2000);
}
