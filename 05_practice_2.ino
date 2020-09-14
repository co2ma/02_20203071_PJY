#define PIN_LED 7
unsigned int toggle, i = 0;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  toggle = 0;
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

void loop() {
  for(i; i<11; i++){
    digitalWrite(PIN_LED, ++toggle%2);
    delay(100);
  }
}
