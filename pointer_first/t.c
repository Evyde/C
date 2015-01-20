#include<stdio.h>
int main()
{
	int i[10]={0,1,2,3,4,5,6,7,8,9},*p=&i,*q,o;
	p=q;
	for(i[0],o=0;o<=10;o++,*(p+1))
	{
		printf("%x,%x",*p,*q);
	}
	return 0;
}
