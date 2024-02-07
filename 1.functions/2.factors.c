#include<stdio.h>
void factors(int a)
{
	int i;
	printf("factors are");
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		printf("%d ",i);
	}
}
void main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	factors(a);
}
