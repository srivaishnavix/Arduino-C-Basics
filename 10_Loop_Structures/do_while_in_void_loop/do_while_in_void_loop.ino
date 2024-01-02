void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  static int x;
  do {
    Serial.println("This will execute at least once");
    delay(1000);
  }while(x>5);//it will execute only once until x reaches 5; then it will execute infinitely

  //here we increment x
  x++;
  Serial.println(x);
  delay(500);

}
