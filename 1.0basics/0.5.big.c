#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter two numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{if (a>c)
	{if (b>c)
	printf("%d",b);
 	else
	printf("%d",c);}}
	if (b>c)
	{if (b>a)
	{if (c>a)
	printf("%d",c);
	else
	printf("%d",a);}}
	if (c>a)
	{if (c>b)
	{if (a>b)
	printf("%d",a);
	else
	printf("%d",b);}}
}
