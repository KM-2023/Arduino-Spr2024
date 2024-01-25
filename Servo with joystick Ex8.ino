#include <Servo.h>
const int joystickX = A3; // joystick connected to Analog pin 3

Servo rotator;  //create a variable rotator for the servo

int direction;    

void setup() {
  rotator.attach(6); //servo is attached to digital pin 6
  //delay(1); 
}

void loop() {
  direction = analogRead(joystickX); //read from analog pin           
  direction = map(direction, 0, 1023, 0, 180);     //map(value, fromLow (Joystick), fromHigh (Joystick), toLow(servo), toHigh (servo))
  rotator.write(direction); //move the shaft of the servo to that direction           
  delay(15); //small delay between movements for stability                          
}
