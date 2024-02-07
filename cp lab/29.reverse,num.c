#include<stdio.h>
void main()
{
	int n,r,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n/=10;
	}
	printf("%d is reverse n8umber",sum);
}
		
