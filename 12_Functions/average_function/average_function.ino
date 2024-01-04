//Advantages of functions

/*
 * 1. Functions help us in reducing code redundancy(it will reduce repetetion of code);
 * 2. Functions make code modular and reusable
 * 3. Functions provide abstraction and aids teamwork
 */

//creating a function-average
float average(int n[], int l){
  int sum =0;
  for(int i = 0; i<l; i++){
    sum += n[i];
  }
  float avg = float(sum)/float(l);//explicit conversion of int to float to get float result 
  return avg;

  //This saves me time and reduces lines by not having to write the code two times or n number of times
}


void setup() {
  // put your setup code here, to run once:
  //finding average of two data sets
  Serial.begin(9600);
  int n1 [] = {23,25,40};
  int l1 = 3;

  float a1 = average(n1, l1);
  Serial.print("The average of n1 is ");
  Serial.println(a1);

  int n2 [] = {11, 14, 17, 10, 3};
  int l2 = 5;
  
  float a2 = average(n2, l2);
  Serial.print("The average of n2 is ");
  Serial.println(a2);


}

void loop() {
  // put your main code here, to run repeatedly:

}
