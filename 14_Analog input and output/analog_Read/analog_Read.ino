//analogRead and analogWrite
//Real world physical parameter is converted to analog singal using a sensor
//This analog signal is converted to digital signal using ADC; Aruino has a builtin 10 bit ADC
//Arduino uses the digital signal for processing

//these pins are a0 to a5 on arduino uno
//analogRead(pin);
//analogWrite();
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(A0));//will give 511 which is close to 2.5V in ADC 10 bit
}
