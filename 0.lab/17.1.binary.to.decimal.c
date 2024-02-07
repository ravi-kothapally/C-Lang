#include<stdio.h>
int power(int i)
{
	int ans=1,j;
	for(j=0;j<i;j++)
	{
		ans*=2;
	}
	return ans;
}
void main()
{
	int n,i,sum=0,r;
	printf("binary");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		r=n%10;
		n=n/10;
		sum+=r*power(i);
	}
	printf("%d",sum);
}
