#include<16F887.h>
#DEVICE *=16 ADC=10
#FUSES HS,NOWDT,NOPUT,NOLVP
#USE DELAY(CLOCK=16M)
#include <luutinh.h>

void Button1()
{

while(input(pin_a3)==0){}
OUTPUT_B(0b11111111);
delay_ms(200);

while(input(pin_a3)==1){}
OUTPUT_B(0x00);
delay_ms(200);



/*if(input(pin_a3)==0)
{
output_high(pin_b0);
output_low(pin_b1);
output_high(pin_b2);
output_low(pin_b3);
output_high(pin_b4);
output_low(pin_b5);
output_high(pin_b6);
output_low(pin_b7);
//delay_ms(500);
//OUTPUT_B(0xBB);
}
if(input(pin_a3)==1)
{
OUTPUT_B(0x00);
}*/

}

void main()
{
set_tris_a(0xFF); // khai báo port a la input

set_tris_b(0x00); // khai báo port b la output

//set_tris_d(0x00);

while(TRUE)
{

output_b(0x00);

if(input(pin_a3)==0)
{
Button1();

}

}

}

