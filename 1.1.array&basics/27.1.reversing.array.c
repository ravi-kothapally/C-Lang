#include<stdio.h>
void main()
{
	int a[100],i,j,n,t;
	printf("size=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;j=n-1;
	while(j>i)
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		i++;
		j--;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
