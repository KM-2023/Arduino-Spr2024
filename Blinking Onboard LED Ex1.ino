int LED = 13; //LED is a variable with a value of 13
void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT); //Sets pin number 13 as output
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED,HIGH); //Turns on pin number 13
delay(1000); //delay of 1 second
digitalWrite(LED,LOW); //Turns off pin number 13
delay(1000); //delay of 1 second
}
