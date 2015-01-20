#include<stdio.h>
int main(int argc,char *argv[])
{
	int i[10]={0,1,2,3,4,5,6,7,8,9},*p,q=0;
	p=&i[0];
	for(;q<=10;q++)
	{
		printf("%p,%p\n",&p[q],&q);
	}
	return 0;
}
