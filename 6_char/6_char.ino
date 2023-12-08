char x ='A'; //can store a single character; can be alphabet, numbers, symbols like ?.,'[-=+ but within a single inverted commas '-'
char y;//char is stored as a number; ASCII values, each character corresponds to a number like 'A'= 65; 'a'=97
char z = 50;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(x);
  Serial.println(y);//will give nothing since it's not initialized
  Serial.println(z);//ASCII of 50 is the char '2'
  Serial.println(x+1);//will give 66 ASCII value of 'A'+1=65+1=66
}

void loop() {
  // put your main code here, to run repeatedly:

}
