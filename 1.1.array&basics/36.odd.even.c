#include<stdio.h>
void main()
{
	int a[100],n,min,b[100],k=0,l=1,i,j,s,t;
	printf("enter size");
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
	{	
		if(i%2==0)
		{
			if(a[i]%2!=0)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[j]%2==0)
					{
						t=a[j];
						a[j]=a[i];
						a[i]=t;
						break;
					}
				}
			}
		}
		else
		{
			if(a[i]%2==0)
			{
				for(j=i+1;j<n;j++)
				{
					if(a[j]%2==0)
					{
						t=a[j];
						a[j]=a[i];
						a[i]=t;
						break;
					}
				}
			}
		}
			
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
		
		
