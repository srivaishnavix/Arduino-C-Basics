void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int b [7] = {570, 21, 678, 438, 320, 97, 12};
  
  //traversing through array
  for (int i = 0; i < 7; i++){
    Serial.println(b[i]);
  }
  
  Serial.println("Updated value of elements after adding 5 are ");

  for (int i = 0; i < 7; i++){
    b[i] += 5;//updating all elements by adding 5
    Serial.println(b[i]);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
