#include <Servo.h>

Servo Voltorb;

void setup()
{
  Voltorb.attach(5); 
}

void loop()
{
  for( int angle = 0; angle < 180 ; angle++)  
  {
      Voltorb.write(angle);
      delay(10);
  }
  }
