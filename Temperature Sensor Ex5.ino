int analogPin=A2;//Use pin 2 as analog pinB
float vout;
float temp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Begin Serial Monitor
  analogReference(DEFAULT); //Configures the reference voltage used for analog input
}

void loop() {
  // put your main code here, to run repeatedly:
    int adc=analogRead(analogPin);
    vout=(adc/1024.0)*5000; //Vout formula
    temp=vout/25; //Finding temperature using Vout (Divide by the scaling factor)

    Serial.print(temp,1);//print temperature to 1 decimal point
    Serial.println("C");

    delay(200);//0.2 sec

  
}
