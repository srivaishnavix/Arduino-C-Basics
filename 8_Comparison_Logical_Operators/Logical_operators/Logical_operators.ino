//Logical Operators
//List -  and- &&, or- ||, not-!
void setup(){
  Serial.begin(9600);
  
  //works with true and false as well
  Serial.println("AND operator possibilities");
  Serial.print("0 and 0 is ");
  Serial.println(0 && 0);
  Serial.print("0 and 1 is ");
  Serial.println(0 && 1);
  Serial.print("1 and 0 is ");
  Serial.println(1 && 0);
  Serial.print("1 and 1 is ");
  Serial.println(1 && 1);
  
  Serial.println();
  Serial.println();
  Serial.println();

  
  Serial.println("OR operator possibilities");
  Serial.print("0 or 0 is ");
  Serial.println(0 || 0);
  Serial.print("0 or 1 is ");
  Serial.println(0 || 1);
  Serial.print("1 or 0 is ");
  Serial.println( 1 || 0);
  Serial.print("1 or 1 is ");
  Serial.println(1 || 1);
  
  Serial.println();
  Serial.println();
  Serial.println();
  
  Serial.println("NOT operator possibilities");
  Serial.print("not of 1 is ");
  Serial.println(!1);
  Serial.print("not of 0 is ");
  Serial.println(!0);
  
}

void loop(){
  
  //examples
  Serial.println(3 == 0 or 5 >= 2);// 0 or 1 is 1
  Serial.println(8!= 9 and 7 > 4);// 1 and 1 is 1
  Serial.println(1<1 and 0 < 8);// 0 and 1 is 0
  Serial.println(! 9 < 0);//!9 is 0; 0<0 is 0
  Serial.println(!(9<0));//9<0 is 0; !0 is 1
  delay(100000);
  
}
