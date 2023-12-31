//pattern priting using nested for loop
//*
//**
//***
//****
//*****
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i<5; i++){
    for (int j = 0; j<=i; j++){//condition can either be j<=i or j<i+1
      Serial.print("*");
    }
    Serial.println();
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
