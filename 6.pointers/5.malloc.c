#include<stdio.h>
#include<stdlib.h>
void main()
{	int n,i;
	int *a,*b;
	printf("size");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	b=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	printf("b vavlues\n");
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n;i++)
	printf("%d\n",b[i]);
	
}
