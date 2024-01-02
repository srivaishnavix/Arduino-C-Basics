//break - is used to exit a loop, bypassing the normal condition
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int multiple = 1;
  int n = 2; //change it to the desired number to get that table
  while (multiple <= 10) {
    Serial.println(String(n)+" * "+String(multiple)+" = "+String(n*multiple));
    multiple ++;
    if (multiple == 5) {
      Serial.println("Breaking the loop now");//will only print till 4
      break;
    }
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
