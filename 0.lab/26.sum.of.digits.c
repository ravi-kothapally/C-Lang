#include<stdio.h>
void main()
{
	int n,sum=0,r;
	printf("enter");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n/=10;
	}
	printf("sum of %d",sum);
}


