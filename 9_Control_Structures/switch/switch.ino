//Switch case- similar to if statement which controls the flow of code based on conditions
// you can convert a long if-elif-else to switch case
//it is extremely important to put break after every switch case 
//otherwise all the other cases after the correct case will run until a break is encountered or till the end of switch

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int x = 4;//with switch case you can only use int or char, other datatypes like float string will throw error
  switch(x) {
    case 1:
      Serial.println("You chose option 1");
      break;
    case 2:
      Serial.println("You chose option 2");
      break;
    case 3:
      Serial.println("You chose option 3");
      break;
    case 4:
      Serial.println("You chose option 4");
      break;
    case 5:
      Serial.println("You chose option 5");
      break;
    default:
      Serial.println("Not a valid option");
      break;
      
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
