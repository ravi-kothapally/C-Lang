#include<stdio.h>
#include<stdlib.h>
void main()
{	
	int i,j,m,n;	
 	int **a;
	printf("rows & columns");
	scanf("%d%d",&m,&n);
	a=(int *)malloc(n*sizeof(int *));
	for(i=0;i<m;i++)
	a[i]=(int *)malloc(n*sizeof(int));
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
