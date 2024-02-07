#include<stdio.h>
void main()
{
	int i,n,ce=0,co=0;
	printf("no of odds and evens=");
	scanf("%d",&n);
	printf("even numbers are");
	for(i=1;ce<n;i++)
	{
		if(i%2==0)
		{printf("%d,",i);
		ce++;}
	}
	printf("\n");
	printf("odd numbers are");
	for(i=1;co<n;i++)
	{
		if(i%2!=0)
		{printf("%d,",i);
		co++;}
	}
}
		
