#include <pic.h>
#include <htc.h>
#define _XTAL_FREQ 20e6
__CONFIG(0X3F3A);


#define  LED RB0
#define  SW RB1

void main()
{
	TRISB=0X02;
	PORTB=0X00;
	
	while(1)
	{
		if(SW==1)
		{
			LED=1;
		}
		else
		{
			LED=0;
		}
	}
}