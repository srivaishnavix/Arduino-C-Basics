void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  int b [7] = {570, 21, 678, 438, 0, 97, 12};

  Serial.println(b[4]);//prints 0

  b[4] = 320;//updates the element at index 4 with the assigned value

  Serial.println(b[4]);

}

void loop() {
  // put your main code here, to run repeatedly:

}
