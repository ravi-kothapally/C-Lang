#include<stdio.h>
void main()
{	int a[100][100],b[100][100],i,n,m,j,c[100][100],n1,m1,d[100][100],k;
	printf(" enter no of rows&no of columns:1st matrix");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" enter no of rows&no of columns:2nd matrix");
	scanf("%d%d",&m1,&n1);
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if((n==n1)&&(m==m1))
	{	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				d[i][j]=a[i][j]-b[i][j];
			}
		}
		printf("addition\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d    ",c[i][j]);
			}
			printf("\n");
		}
		printf("difference\n");	
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("%d    ",d[i][j]);
			}
			printf("\n");
		}
	
		printf("transpose 2;\n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					c[i][j]=a[j][i];
					printf("%d ",c[i][j]);
				}
				printf("\n");
			}
		printf("transpose 1;\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=b[j][i];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}		
	}
	else
	printf("for addition  rows and columns should be same for the matrices\n");
	printf("product=\n");
	if(n==m1)
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<n1;j++)
			{	c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n1;j++)
			{
				printf("%d    ",c[i][j]);
			}
			printf("\n");
		}	
	}
}
