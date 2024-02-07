#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{char a='A';
		for(k=0;k<=i;k++)
		printf(" ");
		for(j=4;j>=i;j--)
		{
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}

}	
