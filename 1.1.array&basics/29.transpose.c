#include<stdio.h>
void main()
{
	int a[100][100],n,m,i,j,b[100][100];
	printf("no of rows and columns");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
		
