#include<stdio.h>
void main()
{
	char a[100],b[100];
	int i,n;
	printf("entr num");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%c",&a[i]);
	for(i=0;i<n;i++)
	printf("%c",a[i]);
	for(i=0;i<n;i++)
	scanf("%c",&b[i]);
	for(i=0;i<n;i++)
	printf("%c",b[i]);
}
