//return - terminate a function

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("1");
  Serial.println("2");
  //return;//this will return back to the loop()function, means the lines after these won't execute
  Serial.println("3");
  Serial.println("4");

  for(int i=0;i<10;i++) {
    Serial.println(i);
    return; //this will also return back to loop()function after every; so it will only be able to iterate once and print 0
  }
  //putting a return at the end of function over here would be redundant?
  

}
