//int xyz = 0;//use less global variables
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  //int xyz = 0;// but if i declare it here; it will initialize to zero at the start of every loop
  // to avoid this we use static
  static int xyz = 0;
  xyz++;
  Serial.println(xyz);//so it will only print 1
  delay(500);


}
