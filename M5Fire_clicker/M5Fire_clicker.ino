#define BATpin 35 //36 also works
void setup() {
  pinMode(BATpin, INPUT);
}

void loop() {
  analogRead(BATpin);
  delay(100);
}
