#include<stdio.h>
void main()
{
	int n,i,j,ans,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	ans=1;
		for(j=1;j<=i;j++)
		{
			ans*=i;
		}
		sum+=ans;
	}
	printf("%d ",sum);
}
