//int xyz = 0;//use less global variables-good practice
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  //int xyz = 0;// but if i declare it here; it will initialize to zero at the start of every loop; and will print 1 continuously
  // to avoid this we use static
  static int xyz = 0;//will only initialize once
  xyz++;
  Serial.println(xyz);
  delay(500);


}
