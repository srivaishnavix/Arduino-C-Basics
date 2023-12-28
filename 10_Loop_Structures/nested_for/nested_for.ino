void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i < 7; i++){
    for (int j = 0; j<2; j++){
      Serial.println("Hi there!");
    }
    Serial.println();
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
