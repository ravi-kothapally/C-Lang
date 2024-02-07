#include<stdio.h>
void print(int a[],int n)
{	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ,",a[i]);
	}
}
void main()
{	 int a[100],n,i;
	 printf("how many num u want");
	 scanf("%d",&n);
 	 for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	print(a,n);
}
