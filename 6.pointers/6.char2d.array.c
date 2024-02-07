#include<stdio.h>
#include<stdlib.h>
void main()
{	
	int i,j,m,n;	
 	char *a[100];
	printf("rows & columns");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	a[i]=(char *)malloc(n*sizeof(char));
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%c",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c\t",a[i][j]);
		}
		printf("\n");
	}
}
