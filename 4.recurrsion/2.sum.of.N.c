#include<stdio.h>
int sum(int n)
{
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}
void main()
{
	int n,a;
	printf("enter a number");
	scanf("%d",&n);
	a=sum(n);
	printf("%d \n",a);
}
