#include<stdio.h>
int gcd(int n1,int n2)
{	int k;
	k=n1%n2;
	if(k==0)
	printf("%d\n",n2);
	else
	{
		n1=n2;
		n2=k;
		gcd(n1,n2);
	}
}
void main()
{
	int n1,n2;
	printf("enter 2 num");
	scanf("%d%d",&n1,&n2);
	gcd(n1,n2);
}
