#include<stdio.h>
void main()
{
	int a[100],i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j%2==0)
			printf("1");
			else
			printf("0");
		}
		printf("\n");
	}
}
