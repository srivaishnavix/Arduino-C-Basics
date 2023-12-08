//If you initialize here(outside all functions) it is a global variable
int globalVariable = 67; //global variable
void setup() {
  // put your setup code here, to run once:
  int localVariable = 9;//local variable local to setup() function scope is setup() function
  Serial.begin(9600);
  Serial.println("Printing in the setup function");
  Serial.println(globalVariable);
  Serial.println(localVariable);

}

void loop() {
  // put your main code here, to run repeatedly:
  int localVariable = 34;//Local variable local to loop() function scope is loop()function
  Serial.println("Printing in the loop function");
  Serial.println(globalVariable);
  Serial.println(localVariable);
  delay(10000);

}
