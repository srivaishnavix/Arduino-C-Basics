//Forever loop or endless loop
//You can do this by replacing the condition within while with the bool "true"
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int x = 1;
  while (true){
    Serial.println(5*x);
    x++ ;
    delay(100);//I'm introducing a delay to not exhaust or get an epilepsy
  }
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
