void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int a [5] = {1, 2, 3, 4, 5};
  int x = a[0]+a[1]+a[2]+a[3]+a[4];//this is naive method

  Serial.println(x);//should print 15

  
  //instead we can use for loop for sum
  int sum = 0;
  for(int i = 0; i<5; i++){
    sum += a[i];
  }
  Serial.println(sum);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
