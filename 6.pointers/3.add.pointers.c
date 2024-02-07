#include<stdio.h>
void add(int a,int b,int* p);
void main()
{
	int a,b,c;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	add(a,b,&c);
	printf("%d",c);
}
void add(int a,int b,int* p)
{
	*p=a+b;
}
