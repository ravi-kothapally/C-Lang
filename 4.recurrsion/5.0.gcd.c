#include<stdio.h>
int gcd(int n1,int n2)
{	
	if(n2==0)
	printf("%d\n",n1);
	else
	gcd(n2,n1%n2);
}
void main()
{
	int n1,n2;
	printf("enter 2 num");
	scanf("%d%d",&n1,&n2);
	gcd(n1,n2);
}
