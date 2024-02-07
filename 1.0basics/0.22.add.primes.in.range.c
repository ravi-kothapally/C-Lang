#include <stdio.h>
void main()
{
 	int i,n,k,l,c,a,sum=0;
	printf("give a number range.we will add primes in that range");
	printf("\nrange starts from=");
	scanf("%d",&a);
	printf("ends at=");
	scanf("%d",&n);
	c=0;
	for(i=a;i<n;i++)
	{
		l=0;
		for(k=1;k<=i;k++)
		{
			if(i%k==0)
			l++;
		}
		if (l==2)
		sum=sum+i;	
	}
	printf("%d is sum\n",sum);
}			

