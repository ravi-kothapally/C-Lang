#include<stdio.h>
void main()
{
	int a[100],i,j,n,min,t;
	printf("size=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{	min=i;
		for(j=i;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
