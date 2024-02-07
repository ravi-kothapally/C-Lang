#include<stdio.h>
void main()
{
	int n,i,c=0,j,d;
	printf("no of primes");
	scanf("%d",&n);
	for(i=1;c<n;i++)
	{	d=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			d++;
		}
		if (d==2)
		{printf("%d ,",i);
		c++;}
	}
}	
			
