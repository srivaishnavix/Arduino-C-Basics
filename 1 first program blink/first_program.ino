/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

/*This is multiline comments
So even this line is considered as comments
Everything in between the forward slash and stars are comments.
*/
/*White spaces help in indentation*/

int myDelayValue = 100;
int ledPin = 13;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
  //pinMode configures a particular pin
  /*The function pinMode(a1,a2); takes two arguments in the parantheses;
  a1 is the pin number 
  a2 is the configuration of the particular pin as output or input
  semicolon is used to end the line 
  LED_BUILTIN is the pin number 13 in arduino uno and it is mentioned in library so you don't need to explicitly mention it in the code
  compiler will replace it with pin number 13;
  So the pin configuration (pinMode) is done in the void setup;the arduino will run this once in the beginning when we dump the code*/
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level
  delay(myDelayValue);                       // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(myDelayValue);                       // wait for a second
}

/*
void loop runs the code block inside it in a loop forever; unless specified
digitalWrite is an inbuilt function that is used to manipulate the pins; it can also manipulate analog pins using digitalWrite
it takes in two parameters the pin number and the value-HIGH or LOW
HIGH= 5v LOW=0v
delay is a builtin function that pauses the Arduino for a certain time given in parameter(in Milliseconds) 1000ms= 1s
*/

/*This entire process will keep repeating until the arduino is turned off*/

/*Variable naming- first character of first word is small and first character of second character should be capital 
  It is called Camel case helps in differentiating different words
*/
/*Serial communication-enables serial communication between arduino and computer
Serial.begin();
Serial.print();
Serial.println();*/

/*Data types-
 * int is Integer[negative and positive whole numbers in cluding zero] values- range{-32768 to 32767}; initialization- int value=5; or int value; this will hold 0
 * 
*/
