//analogRead and analogWrite
//Real world physical parameter is converted to analog singal using a sensor
//This analog signal is converted to digital signal using ADC; Aruino has a builtin 10 bit ADC
//Arduino uses the digital signal for processing

//these pins are a0 to a5 on arduino uno
//analogRead(pin);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(A0));//will give 511 which is close to 2.5V in ADC 10 bit for two equal resistors
}
//higher the resistance; higher will be the voltage drop accross the resistor; according to ohm's law as the current flowing in series is same, the current accross the circuit is same
//The output voltage A0 is measured accross the resistor 2 with reference to the ground and the wire connected to A0 yellow
//For a photo resistor, the dimmer the light brightness the higher is the resistance, the brighter the light the lower is the resistance
