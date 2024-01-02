//break - is used to exit a loop, bypassing the normal condition


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while (true) {
    static int i = 1;//entered loop and i is set as looping variable
    Serial.println("Hey there! I just wanted to tell you something important.");
    delay(100);
    //but since i is not used in the condition, and the conditionis set to true, the loop will run forever
    //to stop the loop we need to use break
    i++;
    if (i>=23) {
      Serial.println("That is 'Have a good day'");
      break;
    }
    
  }
  Serial.println("Ok Bye!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
