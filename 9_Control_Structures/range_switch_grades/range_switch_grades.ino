//range in switch case
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int marks = 79;
  switch (marks) {
    case 0 ... 39://3 dots can be used for range
      Serial.println("F");break;
    case 40 ... 49:
      Serial.println("E");break;
    case 50 ... 59:
      Serial.println("D");break;
    case 60 ... 69:
      Serial.println("C");break;
    case 70 ... 79:
      Serial.println("B");break;
    case 80 ... 89:
      Serial.println("A");break;
    case 90 ... 100:
      Serial.println("S");break;
    default:
      Serial.println("Undetermined grade");
      break;
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
