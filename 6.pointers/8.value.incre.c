#include<stdio.h>
void main()
{
	int s[10]={10,1,2,4,5};
	int *p;
	p=s;
	printf("%u\n",p);
	(*p)++;
	printf("%u\n%d",p,*p);
}

