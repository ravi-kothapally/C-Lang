#include<stdio.h>
void main()
{
	int i,j,k,a,n,p;
	printf("enter odd base size");
	scanf("%d",&n);
	printf("enter height\n");
	scanf("%d",&p);
	for(i=0;i<(n+1)/2;i++)
	{	
		for(k=(n+1)/2;k>i;k--)
		printf(" ");
		for(j=0;j<=i;j++)	
		{
			printf("*");
		}
		for(j=0;j<i;j++)	
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<p;i++)
	{
		for(k=0;k<3;k++)
		printf(" ");
		for(a=0;a<n-4;a++)
		printf("*");
		printf("\n");
	}
}
			
		
		
	

		
