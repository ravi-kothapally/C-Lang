#include<stdio.h>
void main()
{
	int a[100],i,j,n,max,t;
	printf("size=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>0;i--)
	{	max=i;
		for(j=i;j>=0;j--)
		{
			if(a[j]>a[max])
			max=j;
		}
		t=a[max];
		a[max]=a[i];
		a[i]=t;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
