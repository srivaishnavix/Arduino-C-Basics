bool myBool = 89;//1 or HIGH or true all same; false or 0 or LOW all same

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(myBool);//gives 1 or 0 depending on true or false
}//boolean is used to check if a condition is true or not

void loop() {
  // put your main code here, to run repeatedly:

}
