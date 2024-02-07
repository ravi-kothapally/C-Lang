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
			f=1;
			k=i;
		}
	}
	if(f==1)
	printf("number is present & index is %d",k);
	if(f==0)
	printf("number is absent");
}
