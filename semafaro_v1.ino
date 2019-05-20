void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  toggleGreen();
  toggleYellow();
  toggleRed();
}

void toggleGreen() {
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  togglePersonRed();
  delay(5000);
}

void toggleYellow() {
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(3000);
}

void toggleRed() {
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  togglePersonGreen();
  delay(2000);
  digitalWrite(9, LOW);
  blinkPersonRed();
  delay(500);
  togglePersonRed();
}

void blinkPersonRed() {
  for(int x=0; x < 5; x++){
      digitalWrite(10, LOW);
      delay(500);
      digitalWrite(10, HIGH);
      delay(500);
  }
  digitalWrite(10, LOW);
}

void togglePersonRed() {
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
}

void togglePersonGreen() {
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
}
