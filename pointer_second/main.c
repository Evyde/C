#include <stdio.h>
#include <stdlib.h>

#define XXX XX

int main(int argc,char *argv[])
	
	{
		int a,*p;
		p=&a;
		printf("a is %d,adress is %p\np is %p,*p is %d\n",a,&a,p,*p);
		p=p+0x21;
		printf("p is %p,*p is %d\n",p,*p);
		*p=20000220;
		printf("*p is %d\n",*p);
		return 0;
	}
