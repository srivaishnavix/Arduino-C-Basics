void setup() {
  // put your setup code here, to run once:
  //or you can also setup the pin mode over here manually

}

void loop() {
  // put your main code here, to run repeatedly:
  blinkFunction(2);
  blinkFunction(7);
  blinkFunction(9); 

}

void blinkFunction(int pinNumber){
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, HIGH);
  delay(1000);
  digitalWrite(pinNumber, LOW);
}
