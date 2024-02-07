#include<stdio.h>
int factorial(int n)
{
	if(n==1)
	return 1;
	else
	return n*factorial(n-1);
}
void main()
{
	int n,a;
	printf("enter a number");
	scanf("%d",&n);
	a=factorial(n);
	printf("%d \n",a);
}
