int direction1 = 4;
int direction2 = 5;
int analogPin = A0;
int voltageReadingi = 0;
int voltageReadingf = 0;
int change = 0;

void setup() {
  Serial.begin(9600);
  voltageReadingi = analogRead(analogPin);
  pinMode(direction1, OUTPUT);
  pinMode(direction2, OUTPUT);
  pinMode(analogPin, INPUT);
}

void open(int time) {
  analogWrite(direction1, 150);
  analogWrite(direction2, 0);
  delay(abs(time));
  analogWrite(direction1, 0);
  Serial.println("Opening");
}

void close(int time) {
  analogWrite(direction1, 0);
  analogWrite(direction2, 150);
  delay(abs(time));
  analogWrite(direction2, 0);
  Serial.println("Closing");
}

void off() {
  analogWrite(direction1, 0);
  analogWrite(direction2, 0);
}

void loop() {
  voltageReadingf = analogRead(analogPin);
  Serial.println(voltageReadingf);
  delay(500);
  voltageReadingi = analogRead(analogPin);
  Serial.println(voltageReadingi);
  change = (voltageReadingf - voltageReadingi);
  if(change > 10){
    Serial.println(change);
    close(change*3);
  }
  else if(change == 0){
    off();
    delay(change);
  }
  else if(change < -10){
    open(change*3);
  }
}
