#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	if(a<b)
	printf("up");
	else if (b<a)
	printf("down");
	else
	printf("equal");
}	
