/* www.ec-bot.com */
int Relay_1 = 2;

void setup() {
  Serial.begin(9600);
  pinMode(Relay_1, OUTPUT);
  digitalWrite(Relay_1, 1);
}
void loop() {
  int Sensor_1 = digitalRead(A0);
  if (Sensor_1 == 1) {
    digitalWrite(Relay_1, 1);
  }
  else if (Sensor_1 == 0) {
    digitalWrite(Relay_1 , 0);
    delay(3000);
  }
}
