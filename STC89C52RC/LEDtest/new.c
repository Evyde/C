#include <8052.h>
#include "hf.h"
//#include <reg52.h>
	//sbit D3=P2^0;
#define D3 P2

int left(int i)
	{
		for(;i<0x80;)
			{
				D3=~i;
				i=i<<1;
				if(i==1) ;
				else delay(100);
			}
		return i;
	}

int right(int i)
	{
		for(;i>=1;)
			{
				D3=~i;
				i=i>>1;
				if(i==0) ;
				else delay(100);
			}
		return i;
	}


void main(void)
{
	int i=1;
	while(1)
	{
		if(i==0) i=1;
		i=left(i);
		i=right(i);		
	}
	}
