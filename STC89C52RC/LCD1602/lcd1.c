#include<8052.h>
#include <stdlib.h>
#define uchar unsigned char
#define uint unsigned int
uchar __code table[]="     21:25     "; 
uchar __code table1[]=" 2014-12-24 WED ";
#define lcdrs P2_6
#define lcdwr P2_5
#define lcde P2_7
void delay(uchar x)
{
	uchar i,j;
	for(i=x;i>0;i--)
		for(j=110;j>0;j--);
}
void write_com(uchar com)
{
	P0=com;
	lcdrs=0;
	lcdwr=0;
	delay(5);
	lcde=0;
	delay(5);
	lcde=1;
}
void write_dat(uchar dat)
{
	P0=dat;
	lcdrs=1;
	lcdwr=0;
	delay(5);
	lcde=0;
	delay(5);
	lcde=1;
}
void init()
{
	write_com(0x01);
	write_com(0x3f);
	write_com(0x0d);
	write_com(0x06);
}
void main()
{
	uchar i;
	init();
	write_com(0x80+0x10);
	for(i=0;i<16;i++)
	{
		
		write_dat(table[i]);
		delay(50);
	}
	write_com(0x80+0x40+0x10);
	for(i=0;i<16;i++)
	{
		write_dat(table1[i]);
		delay(50);
	}
	for(i=0;i<16;i++)
	{
		write_com(0x18);
		delay(50);
	}
	while(1);
}
