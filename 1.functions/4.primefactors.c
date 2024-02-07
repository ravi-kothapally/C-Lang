#include<stdio.h>
void primefactors(int a)
{
	int i,j,l;
	for(i=1;i<=a;i++)
	{	l=0;
		if(a%i==0)
   		{
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				l++;
			}
			if(l==2)
			printf("%d is a prime factor\n",i);
		}
	}	
}
void main()
{
	int a;
	printf("enter a number");
	scanf("%d",&a);
	primefactors(a);
}
