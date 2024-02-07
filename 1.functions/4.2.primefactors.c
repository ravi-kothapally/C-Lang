#include<stdio.h>
int factors(int k)
{
	int i,c=0;
	for(i=1;i<=k;i++)
	{
		if(k%i==0)
		c++;
	}
	return c;
}
int prime(int k)
{
	
	if(factors(k)==2)
	return 1;
	else
	return 0;
}
void main()
{
	int a,k;
	printf("enter a number");
	scanf("%d",&a);
	for(k=1;k<=a;k++)
	{
		if(a%k==0&&prime(k)==1)
	printf("%d is a pf\n",k);
	}
}
	
