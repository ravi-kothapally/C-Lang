#include<stdio.h>
void main()
{
	int i,n,k,c;
	printf("enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{       c=0;
			for(k=1;k<=i;k++)
			{
				if (i%k==0)
				c++;
			}
			
		if(c==2)
		printf("%d is a prime factor",i);
                }
	}
}

