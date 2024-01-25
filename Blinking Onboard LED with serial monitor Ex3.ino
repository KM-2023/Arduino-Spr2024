int LED = 13; //LED is a variable with a value of 13
int counter = 0; //initialize counter
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT); //Sets pin number 13 as output
Serial.begin(9600); //start serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  counter=counter+1; //add 1 to counter
  Serial.print("Blink Number: "); //print blink number
  Serial.println(counter); //print value of blink number
digitalWrite(LED,HIGH); //Turns on pin number 13
delay(1000); //delay of 1 second
digitalWrite(LED,LOW); //Turns off pin number 13
delay(1000); //delay of 1 second
}
