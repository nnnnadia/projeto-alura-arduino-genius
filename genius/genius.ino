int redLed = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLed, 1);
  delay(1000);
  digitalWrite(redLed, 0);
  delay(500);
}
