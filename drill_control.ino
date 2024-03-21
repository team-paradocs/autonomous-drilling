int pin=5; //digital pin out for drill control
bool mode=LOW; //mode of drill, on or off
void setup() {
  pinMode(pin,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if(Serial.available()>0)
  {
    String input=Serial.readString();
    if(input=="drill")
    {
      mode=HIGH;
      digitalWrite(pin,mode);
    }
    else if(input=="stop")
    {
      mode=LOW;
      digitalWrite(pin,mode);
    } 
    digitalWrite(pin,mode);
  }
  digitalWrite(pin,mode);
}