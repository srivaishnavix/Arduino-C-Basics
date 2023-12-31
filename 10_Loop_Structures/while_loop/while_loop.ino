//while loop
//It is entry controlled loop
//used when we don't know how many times an action has to be repeated

//"For" loop when you know how many iterations
//"While" loop when you don't know how many times to iterate
//for ex, for a obstacle avoidance robot, as long as there is no obstacle, keep moving forward



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int score = 10;
  int goal = 100;
  while(score != goal){
    score += 10;
    Serial.println("Your score is - " + String(score) + " Improve your score to reach next level! The target to reach next level is- " + String(goal));
    delay(200);
  }
  Serial.println("Congrats you have reached the target score, and you've leveled up");
}

void loop() {
  // put your main code here, to run repeatedly:

}
