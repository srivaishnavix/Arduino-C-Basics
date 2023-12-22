//comparison operator
//List >, <, >=, <=, ==, !=

void setup(){
  int a = 7;
  int b = 7;
  Serial.begin(9600);
  Serial.println(a>b);//0-This will return 0 if false, and 1 if true
  Serial.println(a==b);//1-This will give 1(true) since 7==7
  Serial.println(a<=b);//1-true
  //works with all logical operators
  a = 9;
  b = 5;
  Serial.println(a==b);//0 since 9 does not equal 5
  Serial.println(a!=b);//1
  Serial.println(a>b);//1 since true
  Serial.println(a<b);//0 since false
  Serial.println(b<a);//1 same as a>b hence true
  Serial.println(a>=b);//1- true
  Serial.println(a<=b);//0- false
  
}

void loop(){
  Serial.println();
  delay(1000);
}
