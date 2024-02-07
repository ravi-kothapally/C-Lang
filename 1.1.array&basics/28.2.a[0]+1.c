#include<stdio.h>
void main()
{
	int a[10][10];
	printf(" %u\n %u\n %u\n %u\n %u\n %u\n %u\n %u\n",a,a+1,&a,&a+1,a[0],a[0]+1,&a[0],&a[0]+1);
}
