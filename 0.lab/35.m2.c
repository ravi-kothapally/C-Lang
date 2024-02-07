#include<stdio.h>
void main()
{
	int a[100],i,j;
	for(i=0;i<5;i++)
	{
		for(j=5;j>i;j--)
		{
			if(i%2==0)
			printf("*");
			else
			printf("0");
		}
		printf("\n");
	}
}
