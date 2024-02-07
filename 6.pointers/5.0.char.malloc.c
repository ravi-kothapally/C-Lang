#include<stdio.h>
#include<stdlib.h>
void main()
{	int n,i;
	char *a,*b;
	printf("size");
	scanf("%d",&n);
	a=(char *)malloc(n*sizeof(char));
	b=(char *)calloc(n,sizeof(char));
	for(i=0;i<n;i++)
	scanf("%c",&a[i]);
	for(i=0;i<n;i++)
	printf("%c\n",a[i]);
	printf("b vavlues\n");
	for(i=0;i<n;i++)
	scanf("%c",&b[i]);
	for(i=0;i<n;i++)
	printf("%c\n",b[i]);
	
}
