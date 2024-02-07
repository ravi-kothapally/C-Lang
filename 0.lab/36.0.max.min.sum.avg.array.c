#include<stdio.h>
void main()
{	int a[100],i,max=-9999,n,min=99999,sum=0;
	printf("length of series=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		max=a[i];
	}
	printf("%d is max",max);
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	printf("%d is min",min);
	for(i=0;i<n;i++)
	sum+=a[i];
	printf("%d is sum\n%d is avg",sum,sum/n);

}
		
