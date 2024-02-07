#include<stdio.h>
void main()
{	int a[100][100],b[100][100],i,n,m,j,c[100][100],nb,mb;
	printf(" enter no of rows&no of columns:1st matrix");
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" enter no of rows&no of columns:2nd matrix");
	scanf("%d%d",&nb,&mb);
	for(i=0;i<nb;i++)
	{
		for(j=0;j<mb;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if((n==nb)&&(m==mb))
	{	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d    ",c[i][j]);
			}
			printf("\n");
		}	
	}
	else
	printf("for addition rows and columns should be same for the matrices\n");
}
