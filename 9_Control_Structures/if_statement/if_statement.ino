//if statement sample
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("This line should print irrespective  of anything as it is not present in any if statements.");
  if (true) {
    Serial.println("This is printed only when if condition is true");
    //anything inside this will execute
  }
  if (false) {
    Serial.println("Lol");//This won't be printed as the condition is false
    //anything inside this will not be executed
  }
  Serial.println("This line will be printed irrespective of anything");
}

void loop() {
  // put your main code here, to run repeatedly:
  if (5 > 9) {
    Serial.println("Yes 5 is greater than 9");//not printed
  }
  if (5 < 9){
    Serial.println("Yes 5 is lesser than 9");//printed
  }
  bool formal = false;

  if (formal == true) {
    Serial.println("Hello Sir. Welcome!");
  }
  if (formal != true) {
    Serial.println("Hey there. Come on in!");
  }
  delay (10000);


}
