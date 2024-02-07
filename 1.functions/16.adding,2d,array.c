#include<stdio.h>
void add(int a[][100],int b[][100],int m,int n)
{	int i,j,c[100][100];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
        }
}
void main()
{	int a[100][100],i,n,m,j,m1,n1,b[100][100];
	printf(" enter no of rows andno of columns");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("2nd matrix;rows & columns");
        scanf("%d %d",&m1,&n1);
        for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
					scanf("%d",&b[i][j]);
				}
		}
        if((m1==m)&&(n1==n))
	add(a,b,m,n);
        else
        printf("check");
	
	
		
	
}
