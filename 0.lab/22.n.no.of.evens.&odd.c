#include<stdio.h>
void main()
{
	int i,n,odd=0,even=0,ce=0,co=0;
	printf("no of odds and evens=");
	scanf("%d",&n);
	for(i=1;ce<n;i++)
	{
		if(i%2==0)
		{even=even+i;
		ce++;}
	}
	printf("%d is even sum\n",even);
	for(i=1;co<n;i++)
	{
		if(i%2!=0)
		{odd+=i;
		co++;}
	}
	printf("%d is odd sum",odd);
}
		
