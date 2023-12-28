//for loop
//entry controlled loop
//used when an action is to be executed for a predefined number of times
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for( int i =0; i!=5; i++){
    Serial.println(i + ") Hello");
  }
  
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
