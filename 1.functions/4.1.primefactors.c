#include<stdio.h>
void factors(int a)
{
	int i;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		prime(i);
	}
}
void prime(int i)
{
	int j,c=0;
	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		c++;
	}
	if(c==2)
	printf("%d is a pf\n",i);
}

void main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	factors(a);
}
