#include<stdio.h>
void main()
{
	int a[100],i,j,n,max,t;
	printf("size=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{	
		for(j=i;j>0;j--)
		{
			if(a[j]<a[j-1])
			{
				t=a[j-1];
				a[j-1]=a[j];
				a[j]=t;
			}
			
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
