#include <stdio.h>

#define XXX X

int *if_max(int *pointer_a,int *pointer_b)

	{
		if(*pointer_a>*pointer_b)
			return pointer_a;
		else return pointer_b;
	}

int main(int argc,char *argv[])

	{
		int a,b,*max;
		printf("Please input two numbers:");
		scanf("%d,%d",&a,&b);
		max=if_max(&a,&b);
		if(max==&a)
			printf("\nmax is %d,min is %d\n",a,b);
		else printf("\nmax is %d,min is %d\n",b,a);
		return 0;
	}
