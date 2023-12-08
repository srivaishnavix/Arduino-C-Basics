float myFloat = 7.856743;
int myInt = 7.8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  Serial.println(myFloat);
  Serial.println(myInt);

  myFloat = myFloat/2;
  Serial.println(myFloat);

}

void loop() {
  // put your main code here, to run repeatedly:

}
