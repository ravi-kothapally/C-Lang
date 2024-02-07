#include<stdio.h>
void main()
{
	int i,j;
	char c;
	
	for(i=0;i<3;i++)
	{	c='1';
		for(j=0;j<=i;j++)
		{printf("%c",c);
		c++;}
		printf("\n");
	}
}
