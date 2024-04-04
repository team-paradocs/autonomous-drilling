int pin = 13;
bool mode = LOW;
void setup() {
  pinMode(pin,OUTPUT);
  Serial.begin(115200);
  Serial.setTimeout(1);
}

void loop() {
  while (Serial.available() > 0) {
    // Serial.println("Serial is available");
    String input = Serial.readString();
    if (input == "drill") {
      mode = HIGH;
      digitalWrite(pin, mode);
      Serial.println("Drill Started");
    } else if (input == "stop") {
      mode = LOW;
      digitalWrite(pin, mode);
      Serial.println("Drill Stopped");
    }
    digitalWrite(pin, mode);
  }
  digitalWrite(pin, mode);
}