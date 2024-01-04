//String- a sequence of characters,an array of characters
//strings use "", and characters use ''
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println("This is a string");

  char name1[4] = {'s', 'r', 'i'};//add 1 character always while declaring a char array or string, since here it's 3 add 1 so 4 has to be considered
  //we take extra character because a null character is used to denote the ending of a string, compiler does it internally
  Serial.println(name1);

  char name2[4] = {'s', 'r', 'i', '\0'};//you can also add null character explicitly

  char name3[] = "sri";//automatically allot memory; better way to write a string as char
  char name4[4] = "sri";
  char name5[10] = "sri";//you can allocate more memory for a small string
  char name6[2] = "sri";//will only print 2 chars
  Serial.println(name6);
  

  String name7 = "sri";//the best way
  Serial.println(name7);
  Serial.println(name7.charAt(0));

}

void loop() {
  // put your main code here, to run repeatedly:

}
