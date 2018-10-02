// File Name: switching_led
// Author: R.venkatesan


# include <reg51.h>
# include <stdio.h>
sbit led_blink =P1^0 ; // led pin connected on port1^0
sbit switch_led=P1^1; // switch connected on port 1^1


void main()
{
switch_led=1;   // pullup input pin 
	
while(1)  // while loop for contiue woking on program endless
{
	
if(switch_led==1) // check the input occur if is true led on
{
led_blink=1;
}

else              // if  is flase led off
{
	led_blink=0;
}
}
}