#include<stdio.h>
void main()
{
 	int a[100],b[100],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	a=a++;
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	a=b;
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
