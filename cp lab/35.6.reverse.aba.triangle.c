#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<5;i++)
	{char a='A';
		for(j=4;j>=i;j--)
		{
			printf("%c",a);
			a++;
		}
		printf("\n ");
	}
}
