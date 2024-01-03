//array user defined data type,arrangement of items in equally spaced addresses 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int a [5] = {1, 2, 3, 4, 5};//implementation of array, indexing starts from 0

  Serial.println(a[2]); //this will print the element at 2nd index, which is 3

}

void loop() {
  // put your main code here, to run repeatedly:

}
