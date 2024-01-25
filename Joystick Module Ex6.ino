int xPin=A0;//X Pin goes to A0
int yPin=A1;//Y Pin goes to A1
int KeyPin=8;//Z goes to digital pin 8

void setup() {
  // put your setup code here, to run once:
  pinMode(KeyPin,INPUT_PULLUP);//we will need an internal pullup resistor for Z
  digitalWrite(KeyPin,HIGH);//It's a switch so lets keep it high
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.print(" X= ");
 Serial.print(analogRead(xPin));
 Serial.print(" |Y = ");
 Serial.print(analogRead(yPin));
 Serial.print(" |Z = ");
 Serial.println(digitalRead(KeyPin));

 delay(100);//1ms delay between readings
}
