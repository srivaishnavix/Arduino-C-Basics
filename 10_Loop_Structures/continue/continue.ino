//continue - skips the rest of the current iteration of a loop.
//It just skips the block of code after the continue keyword; and goes back to the condition checking for the next iteration

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i <= 10; i++) {
    if (i==5){
      continue;//if break was used instead the output would be 0,1,2,3,4, End of loop
    }
    Serial.println(i);//prints from 0 -10 except for 5
  }
  Serial.println("End of loop");
}

void loop() {
  // put your main code here, to run repeatedly:

}
