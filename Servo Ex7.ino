#include<Servo.h> //include servo library

Servo rotate; //initialize variable with the name rotate


void setup() 
{
  rotate.attach(6);//servo is attached to digital pin 6
}

void loop() 
{
   
    rotate.write(90);//write function is to set the output(In this case it moves the shaft to 90)             
    delay(15);//for stability                     
    


}
