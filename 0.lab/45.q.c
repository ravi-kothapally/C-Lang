#include<stdio.h>
int mymod(int a,int b)
{	int k;
	k=a-b;
	return k;
}

void main()
{	
	int a,b,k;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	k=mymod(a,b);
	printf("%d",k);
}
	
