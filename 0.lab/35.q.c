#include<stdio.h>
void main()
{
	int a[100],i,j;
	for(i=4;i>0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(i%2==0)
			printf("@");
			else
			printf("*");
		}
		printf("\n");
	}
}
