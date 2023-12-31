//printing tables using while loop

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  int multiple = 1;
  int limit = 12;//you can change the limit, upto which number the table should be printed 
  while(multiple <= limit) {
    //to print two table
    int x = 7;//change this number to any number to print that table
    Serial.println(String(x)+" * "+String(multiple)+ " = " + String(x *multiple));
    multiple++;
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
