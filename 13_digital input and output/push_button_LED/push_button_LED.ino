//Digital input and output
//digitalRead and digitalWrite - pre-built functions by arduino 

//before using a pin, declare the pin as either input or output using pinMode; pinMode is also a builtin function
//digitalWrite(pin,state);
//digitaRead(pin);//reads the state of the pin, either high or low

//Turn on Led if the input of a push button is high
int button = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(button,INPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(button));
  
  if(digitalRead(button)==LOW){
    digitalWrite(LED_BUILTIN,LOW);
  }
  else{
    digitalWrite(LED_BUILTIN,HIGH);
  }
}
