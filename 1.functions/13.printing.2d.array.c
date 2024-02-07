#include<stdio.h>
void print(int a[][100],int m,int n)
{	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void main()
{	int a[100][100],i,n,m,j;
	printf(" enter no of rows andno of columns");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	print(a,m,n);
}
