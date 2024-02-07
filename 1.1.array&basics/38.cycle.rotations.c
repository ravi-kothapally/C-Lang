#include<stdio.h>
void main()
{
	int a[100],i,j,k,b,n,m;
	printf("size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter how many rotations");
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{	b=a[n-1];
		for(i=0;i<n-1;i++)
		{
	
			a[n-1-i]=a[n-2-i];
		}
		a[0]=b;
	}
		
		for(i=0;i<n;i++)
		printf("%d",a[i]);
}

		
		
