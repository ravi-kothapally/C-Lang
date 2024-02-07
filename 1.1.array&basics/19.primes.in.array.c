#include<stdio.h>
void main()
{	int a[100],i,n,c,j,c1=0;
	printf("length of series=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=1;j<=a[i];j++)
		{
		if(a[i]%j==0)
			c++;
		}
		if(c==2)
		{
			printf("%d,",a[i]);
			c1++;
                }
	}
	if(c1==0)
	printf("no prime numbers ");
	
}
