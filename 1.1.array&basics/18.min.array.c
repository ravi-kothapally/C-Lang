#include<stdio.h>
void main()
{	int a[100],i,n,min=99999999;
	printf("length of series=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	printf("%d is min",min);
}
