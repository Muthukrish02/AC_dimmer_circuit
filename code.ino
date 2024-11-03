int AC_LOAD = 3;
int potentiometerPin = A0;
int dimming = 0;

void setup() {
  pinMode(AC_LOAD, OUTPUT);
  attachInterrupt(0, zero_crosss_int, RISING);
}

void zero_crosss_int() {
  int dimtime = (75 * dimming);
  delayMicroseconds(dimtime);
  digitalWrite(AC_LOAD, HIGH);
  delayMicroseconds(10);
  digitalWrite(AC_LOAD, LOW);
}

void loop() {
  dimming = map(analogRead(potentiometerPin), 0, 1023, 5, 128);
}
