#include<stdio.h>
int power(int i)

{	int j,pow;
	pow=1;
	for(j=0;j<i;j++)
	{
		pow*=10;
	}
	return pow;
}
void main()
{
	int n,sum,r,a,i;
	printf("enter num");
	scanf("%d",&n);
	sum=0;
	for(i=0;n!=0;i++)
	{
		r=n%8;
		n/=8;
		a=power(i);
		sum=sum+r*a;
	}
	printf("%d",sum);
}
