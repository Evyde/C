#include <8052.h>
#include "hf.h"
//#include <lcd.h>

int w(unsinged char data)
	{
		P2_5=0;
		P2_6=1;
		P2_7=0;
		delay(10);
		P0=data;
		return 0;
	}

void main(void)
	{
		while(1)
			{
				w('2');
				delay(100);
			}
	}
