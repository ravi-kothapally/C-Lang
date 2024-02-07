#include<stdio.h>
void prime factors(int a)
{
	int i,c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		c++;
	}
	if(c==2)
	printf("%d is a prime number",a);
	else
	printf("it is not a prime");
}
void main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	prime factors(a);
}
