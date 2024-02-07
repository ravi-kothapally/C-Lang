#include<stdio.h>
void main()
{	int a[100][100],b[100][100],i,n,m,j;
	printf(" enter no of rows andno of columns");
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=a[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d    ",b[i][j]);
		}
		printf("\n");
	}
}
