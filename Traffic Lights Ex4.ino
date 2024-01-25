int Red=4;
int Yellow=5;//create a variable "Yellow" with a value of 5
int Green=6;

void setup() {
  // put your setup code here, to run once:
pinMode(Green,OUTPUT); //set pin as output
pinMode(Yellow,OUTPUT); //set Yellow as output
pinMode(Red,OUTPUT); //set pin as output

digitalWrite(Green,LOW); //initial state
digitalWrite(Yellow,LOW); //initial state
digitalWrite(Red,LOW); //initial state

Serial.begin(9600);//Start serial monitor
}

void loop() {
//Yield

digitalWrite(Green,LOW);
digitalWrite(Yellow,HIGH); //yellow led is on
digitalWrite(Red,LOW);

Serial.println(" Light Mode : Yield ");
delay(1000);

// Go
digitalWrite(Green,HIGH); //green led is on
digitalWrite(Yellow,LOW);
digitalWrite(Red,LOW);

Serial.println(" Light Mode : Go ");
delay(2000);//delay of 2 seconds

// Stop
digitalWrite(Green,LOW);
digitalWrite(Yellow,LOW);
digitalWrite(Red,HIGH); //red led is on

Serial.println(" Light Mode : STOP ");
delay(2000);
}
