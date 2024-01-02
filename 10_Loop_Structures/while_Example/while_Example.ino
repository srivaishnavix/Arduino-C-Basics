void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  static int testVariable;//0 is default if not initialized

  while (testVariable>5) {
    Serial.println("We are in the while loop now");//will execute infinitely once testVariable is greater than 5
  }

  testVariable++;
  Serial.println(testVariable);
  delay(1000);

}
