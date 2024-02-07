#include<stdio.h>
void main()
{	int a[100],i,max=-9999,n;
	printf("length of series=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		max=a[i];
	}
	printf("%d is max",max);
}
		
