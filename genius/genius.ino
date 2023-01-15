// int redLed = 2;
#define RED_LED 2
#define ONE_SECOND 1000
#define HALF_SECOND 500

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(RED_LED);
  blinkLed();
}

void blinkLed() {
  digitalWrite(RED_LED, HIGH);
  delay(ONE_SECOND);
  digitalWrite(RED_LED, LOW);
  delay(HALF_SECOND);
}
