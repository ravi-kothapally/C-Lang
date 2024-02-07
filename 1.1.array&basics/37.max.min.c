#include<stdio.h>
void main()
{
	int a[100],i,j,max=-9999,s,min,n,t;
	printf("enter size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{	max=-99999;
		min=999999;
		if(i%2==0)
		{
			for(j=i;j<n;j++)
			{
				if(a[j]>max)
				{s=j;
				max=a[j];}
			}
			t=a[i];
			a[i]=a[s];
			a[s]=t;
		}
		else
		{
			for(j=i;j<n;j++)
			{
				if(a[j]<min)
				{s=j;
				min=a[j];}
			}
			t=a[i];
			a[i]=a[s];
			a[s]=t;
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}	
				
		
		
				

