//Nested If
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello welcome to the if's of arduino with nests.\nNo reason to get confused, it's easy cause we are a huge family of if's and what if's. \nThis is just me trying to be quirky cause I'm bored with no condition like if.");
  delay(4000);
  Serial.println("Let's take a look at the nested if family PS:and their drama?");
  delay(2000);
  bool what_if = false;
  bool drama = true; //change this to false to resolve the family drama
  bool dramaResolved = false;
  if (true) {
    Serial.println("Hi I'm If- the biggest of the family.");
    delay(1000);
    if (true) {
      Serial.println("Hi, I'm If1- nested inside the If- the biggest of the family and sibling to If2.");
      delay(2000);
      if (true) {
        Serial.println("Hi I'm If11 - nested inside If1 which is indeed nested inside the big If.");
        delay(2000);
      }
      if (!drama){
        Serial.println("Hello, is someone there? \nI'm If12-nested inside If1 and sibling to If11, but honestly I don't if I will make it cause it's upto my creator to introduce me to you. How sad? What if I'm left in this darkness forever?");
        delay(3000);
        Serial.println("Wait no I see some light, Thank you angel for bringing me into your world!");
        delay(2000);
        what_if = true;
        if (true) {
          Serial.println("Proud of you If12, Hi Angel, I'm If121, thank you for saving my nest");
          delay(2000);
        }
      }
      if (true){
        Serial.println("If13 here, wait is that your OCD kicking in cause you can't see my sibling If12, lol make necessary changes to code, to revive If12, Sayonara.");
        delay(3000);
      }
      if (what_if){
        Serial.println("If14 here, Glad you made it brother If12, you are the reason I exist");
        dramaResolved = true;
        delay(3000);
      }
    }
    if (true) {
      Serial.println("Hola, I'm If2- nested inside the If- the biggest of the family and sibling to If1.");
      delay(2000);
    }
  }
  if(drama) {
    Serial.println("Would you like to resolve our family draama. \nIf yes please assign false to drama in the void setup() and rerun the code.");
  }
  if(dramaResolved){
    Serial.println("Thank you for resolving our nested drama, LOL");
  }
    Serial.println("Thanks for visiting our nested if family with hot tea, which is indeed warm and cozy as a nest. Nest sweet nest!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
