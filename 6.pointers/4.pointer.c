#include<stdio.h>
void main()
{
	int i=50;
	int *p;
	p=&i;
	*p=20;
	
	printf("*p=20;qnd *p=%d\n"*p);
}
