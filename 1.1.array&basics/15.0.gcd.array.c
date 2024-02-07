#include<stdio.h>
void main()
{
	int a[100],i,j,n,min=9999,c,k;
	printf("enter size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<min)
		min=a[i];
	}
	for(i=1;;i++)
	{	c=0;
		k=min/i;
		for(j=0;j<n;j++)
		{
			if(a[j]%k!=0)
			c=1;	
		}
		if(c==0)
		{printf("%d is gcd",k);
		break;}
	}
}
