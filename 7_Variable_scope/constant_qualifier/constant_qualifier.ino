//qualifiers are of two types- constant and static
//constant qualifier - const is the keyword
#define pie 3.1459 //c++ concepet; it does not consume memory; avoid using it since it messes with the references
const float pi = 3.14;//constant variables cannot be alteresd, the value of the variable cannot be changed
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pi = pi-0.14;//throws an error exit status 1 ; assignment of read-only variable 'pi'
  //pi++; //increment of read-only variable 'pi'
  
  Serial.println(pi);
  
  int r = 5;
  
  int c = 2*pi*r;//31 if int and 31.4 if float is expected answer
  Serial.println(c);

  
  float circumference = 2*pi*r;//31 if int and 31.40 if float is expected answer
  Serial.println(circumference);

  float area = pie*pow(r,2);
  Serial.println(area);

  
}

void loop() {
  // put your main code here, to run repeatedly:

}
