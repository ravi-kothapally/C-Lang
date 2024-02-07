#include<stdio.h>
void main()
{ int i,j;char c;
  
 	 for(i=0;i<2;i++)
	{	char c='A';
		for(j=0;j<=i;j++)
		{
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
	for(i=0;i<3;i+=2)	
	{
		c='A';
		for(j=0;j<=i;j++)
		{
			printf("%c",c);
			c++;
		}
		printf("\n");
	}

}	
