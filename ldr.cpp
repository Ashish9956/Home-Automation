#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   
}
void brightness_control(void)
{  
  unsigned short inputVal;
   // read the values from LDR sensor
  inputVal = analogRead(LDR_SENSOR);
  inputVal= inputVal/4; 
 // set the pwm from 255 to 0
 inputVal = 255 - inputVal;
  analogWrite (GARDEN_LIGHT, inputVal);
  delay(100);
}
