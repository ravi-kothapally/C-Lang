#include<stdio.h>
void main()
{	int a[100][100],b[100][100],i,n,m,j,c[100][100],n1,m1,k;
	printf("matrix 1:\nrows=");
	scanf("%d",&m);
	printf("columns=");
	scanf("%d",&n);
	printf("matrix 2:\nrows=");
	scanf("%d",&m1);
	printf("columns=");
	scanf("%d",&n1);
	if(n==m1)
	{	printf("assign matrix 1:\n");
		for(i=0;i<m;i++)/* m is no of rows*/
		{
			for(j=0;j<n;j++)/*n is no of colms*/
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("assign matrix 2:\n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("product=\n");
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
	else
	printf(" invalid\n");
}
