#include<stdio.h>
void main()
{	int n=10,a[n],i,b;
	printf("size=");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{ 
		scanf("%d",&a[i]);
	}
	for(i=0;i<b;i++)
	{
		printf("%d,",a[i]);
	}
}
		
