//do-while loop 
//exit-controlled loop
//used when we don't know how many times an action has to be repeated but should run at least once

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int x = 1;
  do {
    Serial.println(x);
    x++;
  }while(x<=10);//will execute 10 times

  x = 1;
  do {
    Serial.println("do while loop 2- This will print at least once, even if the condition is not satisfied");
    x++;
  }while(x>4);//will execute once even if the condition is not satisfied, as condition is checked at the end of the loop
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
