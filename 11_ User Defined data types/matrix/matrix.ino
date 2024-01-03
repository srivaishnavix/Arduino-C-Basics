void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int matrix [2][3] = {{1,2,3},{5,6,7}};
  Serial.println(matrix[1][0]);//will print 5

}

void loop() {
  // put your main code here, to run repeatedly:

}
