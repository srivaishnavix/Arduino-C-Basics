void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(isTall(145));
  Serial.println(isTall(170));
  //if true it will print 1
  //if flase it will print 0

}

bool isTall(int height) {
  if (height>160){
    return true;
  }
  else{
    return false;
  }
}

/*
 * void moveRobotForward(){
 * .
 * .
 * .
 * .
 * .
 * .
 * }
 */
