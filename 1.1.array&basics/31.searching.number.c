#include<stdio.h>
void main()
{
	int a[10],i,n,se,f,k;
	printf("size=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("search the number=");
	scanf("%d",&se);
	f=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==se)
		{
			printf("number is present at index %d\n",i);
		}
	}
}
