#include "hf.h"
#include <8052.h>

/**#define K1_O //发送口
#define K2_O**/
#define K1 P3_0//接收口
#define K2 P3_1	
#define OUT1 P1_1//IN1
#define OUT2 P1_2//IN2

void main(void)
	{
		int k1='F',k2='F';
		K2=1;
		K1=1;
		OUT1=1;
		OUT2=1;
		while(1)
		{
	/****程序初始化，F为断开，T为闭合****/
			if(K1==0)
				{
					if(k1=='F')
						{
							k1='T';
							OUT1=0;
							K1=1;
						}
					else if(k1=='T')
						{
							k1='F';
							OUT1=1;
							K1=1;
						}
					else K1=1;
				}
			else if(K2==0)
				{
					if(k2=='F')
						{
							k2='T';
							OUT2=0;
							K2=1;
						}
					else if(k2=='T')
						{
							k2='F';
							OUT2=1;
							K2=1;
						}
					else K2=1;
				}
		delay(130);
			}

	}
