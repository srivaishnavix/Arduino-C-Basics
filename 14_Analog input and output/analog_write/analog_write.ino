//analogWrite(pin,value); //a pwm value
//analogWrite is different from analogRead; and it is not related to analog pins

//The pin numbers we can use for analogWrite-3,5,6,9,10,11; These are the PWM pins
//Frequency range- 490Hz; except 5&6-980Hz

//The analogWrite function generates a square wave of a specified duty cycle on that specified pin;
//Examples- to control the brightness of a LED,to control the speed of a motor
//The square wave has only 2 values ON (1 or highV) OFF (0 or lowV)
//duty cycles and their pwmvalue
/*
 * 0%- 0
 * 25%-64
 * 50%-127
 * 75%-191
 * 100%-255
*/
//Frequency
//The frequency will scale the graphs up and down without changing other properties
//higher the frequency closer the waves
void setup()
{
  //pinMode is not required for analogWrite
}

void loop()
{
  analogWrite(10,0);
  delay(1000);
  analogWrite(10,50);
  delay(1000);
  analogWrite(10,100);
  delay(1000);
  analogWrite(10,150);
  delay(1000);
  analogWrite(10,200);
  delay(1000);
  analogWrite(10,255);
  delay(1000);
}
