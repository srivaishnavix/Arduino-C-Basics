//functions-a block of code designed to peform a certain task; they take input and perform the task and give output

/*
 Function implementation-
<return type> <name>(<parameteres/arguments){
//statements;
}

 ex:
 void name() {
 statements;
 }
*/

 //void setup() is a funciton and so is void loop()
 //void is a return type where, nothing will return by function

  //to call a function- we just use the function name and pass parameters if any
  //ex - calling pinmode function- pinmode(13, OUTPUT); digitalWrite(13, HIGH);
  //before calling a function it should be defined somewhere

// implementing a function
void say(String s) {
  Serial.begin(9600);
  Serial.println(s);
}
void setup() {
  // put your setup code here, to run once:
  say("Hello");//this will go to the function void say with the parameter "Hello"
}

void loop() {
  // put your main code here, to run repeatedly:

}
