int myVariable = 5;
int mySecondVariable = 6;
int myThirdVariable;//declaration is important before using otherwise error will arise;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println(myVariable);
myVariable = myVariable + 10;//Addition
Serial.println(myVariable);
myVariable = myVariable - 3;//Subtraction
Serial.println(myVariable);
myVariable = myVariable * 4;//Multiplication
Serial.println(myVariable);
myVariable = myVariable /6;//Division; integer division only since myVariable is defined as integer(so floor of actual value) 
Serial.println(myVariable);//For decimal we use float
//The value now is 8
myVariable = myVariable%3;
Serial.println(myVariable);
Serial.println(myVariable+mySecondVariable);//5+6; But this does not store values just displayed; to store use another var
myThirdVariable = myVariable * mySecondVariable;//5*6
Serial.println(myThirdVariable);
//Increment and Decrement operator; incrementation or decrementation by 1
myVariable = 6;
myVariable++;//will give 7- pre increment
Serial.println(myVariable);
++myVariable;//will give 8- post increment 
Serial.println(myVariable);
//What is the difference you ask
Serial.println(myVariable++);//post- this will use the previous value here and later increment the value
Serial.println(++myVariable);//whereas pre-  this will use the incremented value
//similarly with the decrement
}

void loop() {
  // put your main code here, to run repeatedly:

}
