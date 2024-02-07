#include<stdio.h>
void main()
{ int i,j;
 printf("1\n");
  for(i=0;i<4;i++)
 {	char c='2';
	for(j=0;j<=i+1;j++)
	{
		printf("%c",c);
		c++;
	}
	printf("\n");
}

}	
