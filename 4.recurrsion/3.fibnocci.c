#include<stdio.h>
#include<stdlib.h>
int fib(int n,int f,int s,int r)
{
	if(f+s<n)
	{r=f+s;
	f=s;
	s=r;
	printf("%d ",r);
	return fib(n,f,s,r);}
	else
	exit(1);
}
	
void main()
{
	int n,f=0,s=1,r=0;
	printf("enter num");
	scanf("%d",&n);
	printf("0 1 ");
	fib(n,f,s,r);
}
